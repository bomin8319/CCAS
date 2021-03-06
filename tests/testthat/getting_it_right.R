test_that("That we get it right", {
    skip_on_cran()

    # we need a very simple model with a small number of actors, topics, odcuments etc.
    # create an example distribution
    seed <- 12345
    set.seed(seed)

    resample_token_word_types = TRUE
    GiR_samples = 100000
    num_documents = 5
    words_per_doc = 4
    num_topics = 4
    num_terms = 5
    num_actors = 4
    num_ip = 2
    num_ld = 2
    num_covar = 1
    total_word_count = num_documents * words_per_doc
    # five topics
    alpha = 2
    temp <- rep(1/num_topics,num_topics)
    alpha_m = alpha * temp/sum(temp)

    # ten unique words
    beta = 2
    temp2 <- rep(1/num_terms,num_terms)
    beta_n = beta * temp2/sum(temp2)

    author_indexes <- floor(runif(n = num_documents, min = 0, max = num_actors - 0.00001))

    covars <- array(data = rnorm(n = num_actors*num_actors*num_covar,0,2),
                    dim = c(num_actors, num_actors, num_covar))

    token_topic_assignments <- vector(mode = "list",
      length = num_documents)
    token_word_types <- vector(mode = "list",
                               length = num_documents)

    for (i in 1:num_documents) {
        # initialize to -1 to make sure we throw an error if the C++ generative
        # process does not take care of it.
        token_topic_assignments[[i]] <- rep(-1, words_per_doc)

        # if we are not resampling then they need to be fixed from the start. We
        # need to have them fixed either way for collapsed sampling
        token_word_types[[i]] <- floor(runif(n = words_per_doc,
                                             min = 0,
                                             max = num_terms - .000001))

    }


    # first lets try without covariates
    forward_samples <- test_internal_functions(
        Getting_It_Right = TRUE,
        author_indexes = author_indexes,
        covariates = covars,
        alpha_m = alpha_m,
        beta_n = beta_n,
        using_coefficients = TRUE,
        intercept_prior_mean = 0,
        intercept_prior_standard_deviation = 1,
        intercept_proposal_standard_deviations = c(0.5,0.5),
        coefficient_prior_mean = 0,
        coefficient_prior_standard_deviation = 1,
        coefficient_proposal_standard_deviations = c(0.5,0.5),
        latent_position_prior_mean = 0,
        latent_position_prior_standard_deviation = 1,
        latent_position_proposal_standard_deviations = c(0.5,0.5),
        target_accept_rate = 0.25,
        tollerance = 0.05,
        update_size = 0.05,
        seed = seed,
        iterations = 1,
        metropolis_iterations = 50,
        iterations_before_t_i_p_updates = 0,
        update_t_i_p_every_x_iterations = 0,
        perform_adaptive_metropolis = TRUE,
        slice_sample_alpha_m = -2,
        slice_sample_step_size = 1,
        parallel = FALSE,
        num_documents = num_documents,
        words_per_doc = words_per_doc,
        num_topics = num_topics,
        num_terms = num_terms,
        num_actors = num_actors,
        num_ip = num_ip,
        num_ld = num_ld,
        total_number_of_tokens = total_word_count,
        GiR_samples = GiR_samples,
        forward_sample = TRUE,
        token_topic_assignments = token_topic_assignments,
        token_word_types = token_word_types,
        resample_word_types = resample_token_word_types,
        verbose = FALSE)

    backward_samples <- test_internal_functions(
        Getting_It_Right = TRUE,
        author_indexes = author_indexes,
        covariates = covars,
        alpha_m = alpha_m,
        beta_n = beta_n,
        using_coefficients = TRUE,
        intercept_prior_mean = 0,
        intercept_prior_standard_deviation = 1,
        intercept_proposal_standard_deviations = c(0.5,0.5),
        coefficient_prior_mean = 0,
        coefficient_prior_standard_deviation = 1,
        coefficient_proposal_standard_deviations = c(0.5,0.5),
        latent_position_prior_mean = 0,
        latent_position_prior_standard_deviation = 1,
        latent_position_proposal_standard_deviations = c(.5,.5),
        target_accept_rate = 0.25,
        tollerance = 0.05,
        update_size = 0.05,
        seed = seed,
        iterations = 1,
        metropolis_iterations = 50,
        iterations_before_t_i_p_updates = 0,
        update_t_i_p_every_x_iterations = 0,
        perform_adaptive_metropolis = TRUE,
        slice_sample_alpha_m = -2,
        slice_sample_step_size = 1,
        parallel = FALSE,
        num_documents = num_documents,
        words_per_doc = words_per_doc,
        num_topics = num_topics,
        num_terms = num_terms,
        num_actors = num_actors,
        num_ip = num_ip,
        num_ld = num_ld,
        total_number_of_tokens = total_word_count,
        GiR_samples = GiR_samples,
        forward_sample = FALSE,
        token_topic_assignments = token_topic_assignments,
        token_word_types = token_word_types,
        resample_word_types = resample_token_word_types,
        verbose = FALSE)


    # check average t-test stat and wilcox test stat.
    tstats <- rep(0,(ncol(forward_samples)-1))
    wstats <- rep(0,(ncol(forward_samples)-1))
    for (i in 1:(ncol(forward_samples)-1)) {
        thin <- seq(from = floor(nrow(forward_samples)/5), to = nrow(forward_samples),length.out = 400)
        forward_test <- forward_samples[thin,i]
        backward_test <- backward_samples[thin,i]
        tstats[i] <- t.test(backward_test,forward_test)$p.value
        wstats[i] <- wilcox.test(backward_test,forward_test)$p.value
    }

    # throw an error if these change so we make sure that everything is
    # running smoothly.
    expect_equal(round(mean(tstats),4),0.5243)
    expect_equal(round(mean(wstats),4),0.5710)


    generate_PP_plots <- FALSE
    if (generate_PP_plots) {
        pdf(file = "~/Desktop/PP_Plot.pdf", height = 25,width = 25)
        par(mfrow = c(5,5), oma=c(3,3,3,3), mar = c(5,5,4,1))
        GiR_PP_Plots(forward_samples, backward_samples)
        dev.off()
    }


