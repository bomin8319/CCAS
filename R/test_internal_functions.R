#' @title Test C++ functions
#' @description Allows the user to interface with the individual C++ functions.
#'
#' @param Test_Log_Space_Multinomial_Sampler Defualts to FALSE. If TRUE, then
#' optional arguments distribution and seed must be provided.
#' @param Test_Edge_Probability Defaults to FALSE. If TRUE, then optional arguments
#' intercepts, coefficients, latent_pos, document_sender, document_recipient,
#' current_covariates, interaction_pattern, and using_coefficients must be
#' provided.
#' @param Test_Sum_Over_T_Edge_Probs Defaults to FALSE. If TRUE, then optional
#' arguments edge_probs, tokens_in_document, current_token_topic_assignment,
#' current_document_topic_counts, leave_out_current_token,
#' topic_interaction_patterns, document_sender,document_recipient,
#' leave_out_topic must be provided.
#' @param Test_Prior_Pobability_Of_I_P_Params Defaults to FALSE. If TRUE, then
#' optional arguments intercepts, coefficients, latent_pos, intercept_prior_mean,
#' intercept_prior_standard_deviation, coefficient_prior_mean,
#' coefficient_prior_standard_deviation, latent_position_prior_mean,
#' latent_position_prior_standard_deviation, using_coefficients must be
#' provided.
#' @param Test_Sample_New_I_P_Parameters Defaults to FALSE. If TRUE, then
#' optional  arguments intercepts, coefficients, latent_pos,
#' intercept_proposal_standard_deviations, coefficient_proposal_standard_deviations,
#' latent_position_proposal_standard_deviations, (all of which must be of
#' length = number of interaction patterns, and should all be equal)
#' using_coefficients must be provided.
#' @param Test_LSM_Contribution Defaults to FALSE. If TRUE, then optional
#' arguments edge_probs, tokens_in_document, topic,
#' current_token_topic_assignment, current_document_topic_counts,
#' document_edge_values, topic_interaction_patterns, document_sender must be
#'  provided.
#' @param Test_LDA_Contribution Defaults to FALSE. If TRUE, then optional
#' arguments tokens_in_document, current_token_topic_assignment,
#' current_document_topic_counts, word_type_topic_counts, topic_token_counts,
#' topic, current_word_type, alpha_m, beta_n, beta  must be provided.
#' @param Test_Update_Single_Token_Topic_Assignment Defaults to FALSE. If TRUE,
#' then optional arguments edge_probs, tokens_in_document,
#' current_token_topic_assignment, current_document_topic_counts,
#' word_type_topic_counts, topic_token_counts, current_word_type, alpha_m,
#' beta_n, document_edge_values, topic_interaction_patterns, document_sender,
#' rand_num must be provided.
#' @param Test_Update_All_Token_Topic_Assignments Defaults to FALSE. If TRUE,
#' then optional arguments author_indexes, document_edge_matrix,
#' topic_interaction_patterns, document_topic_counts, word_type_topic_counts,
#' topic_token_counts, token_topic_assignments, token_word_types, intercepts,
#' coefficients, latent_pos, covars, alpha_m, beta_n, random_numbers,
#' using_coefficients must be provided. Make sure that random_numbers has length
#' equal to the total number of tokens in the corpus.
#' @param Test_Update_Interaction_Pattern_Parameters Defaults to FALSE. If TRUE,
#' then optional arguments author_indexes, document_edge_matrix,
#' document_topic_counts, topic_interaction_patterns, intercepts, coefficients,
#' latent_pos, covars, using_coefficients, intercept_prior_mean,
#' intercept_prior_standard_deviation, intercept_proposal_standard_deviations,
#' coefficient_prior_mean, coefficient_prior_standard_deviation,
#' coefficient_proposal_standard_deviations, latent_position_prior_mean,
#' latent_position_prior_standard_deviation,
#' latent_position_proposal_standard_deviations, rand_num, edge_probs must be
#' provided.
#' @param Test_Update_Topic_Interaction_Pattern_Assignments Defaults to FALSE.
#' If TRUE, then optional arguments author_indexes, document_edge_matrix,
#' document_topic_counts, topic_interaction_patterns, intercepts, coefficients,
#' latent_pos, covars, using_coefficients, random_numbers, edge_probs must be
#' provided.
#' @param Test_Adaptive_Metropolis Defaults to FALSE. If TRUE, then optional
#' arguments intercept_proposal_standard_deviations,
#' coefficient_proposal_standard_deviations,
#' latent_position_proposal_standard_deviations,
#' accept_rates, target_accept_rate,
#' tollerance, update_size must be provided.
#' @param Test_Inference If TRUE, then optional arguments author_indexes,
#' document_edge_matrix, document_topic_counts, topic_interaction_patterns,
#' word_type_topic_counts, topic_token_counts, token_topic_assignments,
#' token_word_types, intercepts, coefficients, latent_pos, covars, alpha_m,
#' beta_n, using_coefficients, intercept_prior_mean,
#' intercept_prior_standard_deviation,
#' intercept_proposal_standard_deviations, coefficient_prior_mean,
#' coefficient_prior_standard_deviation,
#' coefficient_proposal_standard_deviations,
#' latent_position_prior_mean, latent_position_prior_standard_deviation,
#' latent_position_proposal_standard_deviations, target_accept_rate, tollerance,
#' update_size, seed, iterations, metropolis_iterations, total_number_of_tokens,
#' iterations_before_t_i_p_updates, update_t_i_p_every_x_iterations,
#' perform_adaptive_metropolis must be provided.
#' @param Test_RDirichlet If TRUE, then alpha_m must be provided.
#' @param Test_Sample_Token_Topics_From_Generative_Process If TRUE, then optional
#' arguments author_indexes, token_topic_assignments, token_word_types, alpha_m,
#' beta_n, random_numbers, resample_word_types and use_collapsed_topic_sampling
#' must be provided.
#' @param Getting_It_Right If TRUE, then Geweke's getting it right test is
#' performed
#' @param seed An integerg.
#' @param distribution A log-space vector
#' @param intercepts A vector.
#' @param coefficients A matrix.
#' @param latent_positions An array.
#' @param document_sender An integer.
#' @param document_recipient An integer.
#' @param current_covariates A vector
#' @param interaction_pattern An integer
#' @param using_coefficients A boolean.
#' @param edge_probabilities An array
#' @param tokens_in_document An integer
#' @param current_token_topic_assignment An integer
#' @param current_document_topic_counts A vector.
#' @param leave_out_current_token A logical
#' @param topic_interaction_patterns a vector
#' @param leave_out_topic An integer.
#' @param intercept_prior_mean A double.
#' @param intercept_prior_standard_deviation A double.
#' @param intercept_proposal_standard_deviations A vector.
#' @param coefficient_prior_mean A double.
#' @param coefficient_prior_standard_deviation A double.
#' @param coefficient_proposal_standard_deviations A vector.
#' @param latent_position_prior_mean A double.
#' @param latent_position_prior_standard_deviation A double.
#' @param latent_position_proposal_standard_deviations A vector.
#' @param topic An integer.
#' @param document_edge_values A vector.
#' @param word_type_topic_counts A matrix
#' @param topic_token_counts A matrix.
#' @param current_word_type An integer.
#' @param alpha_m A vector
#' @param beta_n A vector
#' @param beta Is equal to sum(beta_n)
#' @param rand_num An integer
#' @param author_indexes A vector
#' @param document_edge_matrix A matrix
#' @param document_topic_counts A matrix
#' @param token_topic_assignments A List
#' @param token_word_types A List
#' @param covariates An array
#' @param random_numbers A vector
#' @param accept_rates A vector.
#' @param target_accept_rate A double.
#' @param tollerance A dobule.
#' @param update_size A double.
#' @param iterations An integer.
#' @param metropolis_iterations An integer.
#' @param total_number_of_tokens An integer.
#' @param iterations_before_t_i_p_updates An integer.
#' @param update_t_i_p_every_x_iterations An integer.
#' @param perform_adaptive_metropolis A boolean.
#' @param resample_word_types A boolean.
#' @param slice_sample_alpha_m An integer (normally a boolean but you can set
#' the value directly (normally 5, set to a negative number to turn off)),
#' @param slice_sample_step_size An integer.
#' @param parallel A boolean.
#' @param use_cached_token_topic_distribution A boolean.
#' @param cached_token_topic_distribution A vector with legth equal to the number
#' of topics.
#' @param u A numeric of length 1 between 0 and 1.
#' @param num_documents An integer.
#' @param words_per_doc An integer.
#' @param num_topics An integer.
#' @param num_terms An integer.
#' @param num_actors An integer.
#' @param num_ip An integer.
#' @param num_ld An integer.
#' @param GiR_samples An integer.
#' @param forward_sample A logical. If TRUE, the forward GiR samples are
#' generated. If FALSE, then backwards GiR samples are generated.
#' @param use_collapsed_topic_sampling Defaults to FALSE. IF TRUE, then collapsed
#' topic sampling is done. This only matters if you are using the
#' Test_Sample_Token_Topics_From_Generative_Process option.
#' @param verbose Defaults to TRUE, if FALSE, then no output is printed to the
#' screen by the inference code.
#' @return Whatever is returned by the internal function being tested
#' @export
test_internal_functions <- function(
    Test_Log_Space_Multinomial_Sampler = FALSE,
    Test_Edge_Probability = FALSE,
    Test_Sum_Over_T_Edge_Probs = FALSE,
    Test_Prior_Pobability_Of_I_P_Params = FALSE,
    Test_Sample_New_I_P_Parameters = FALSE,
    Test_LSM_Contribution = FALSE,
    Test_LDA_Contribution = FALSE,
    Test_Update_Single_Token_Topic_Assignment = FALSE,
    Test_Update_All_Token_Topic_Assignments = FALSE,
    Test_Update_Interaction_Pattern_Parameters = FALSE,
    Test_Update_Topic_Interaction_Pattern_Assignments = FALSE,
    Test_Adaptive_Metropolis = FALSE,
    Test_Inference = FALSE,
    Test_RDirichlet = FALSE,
    Test_Sample_Token_Topics_From_Generative_Process = FALSE,
    Getting_It_Right = FALSE,
    seed = NULL,
    distribution = NULL,
    intercepts = NULL,
    coefficients = NULL,
    latent_positions = NULL,
    document_sender = NULL,
    document_recipient = NULL,
    current_covariates = NULL,
    interaction_pattern = NULL,
    using_coefficients = NULL,
    edge_probabilities = NULL,
    tokens_in_document = NULL,
    current_token_topic_assignment = NULL,
    current_document_topic_counts = NULL,
    leave_out_current_token = NULL,
    topic_interaction_patterns = NULL,
    leave_out_topic = NULL,
    intercept_prior_mean = NULL,
    intercept_prior_standard_deviation = NULL,
    intercept_proposal_standard_deviations = NULL,
    coefficient_prior_mean = NULL,
    coefficient_prior_standard_deviation = NULL,
    coefficient_proposal_standard_deviations = NULL,
    latent_position_prior_mean = NULL,
    latent_position_prior_standard_deviation = NULL,
    latent_position_proposal_standard_deviations = NULL,
    topic = NULL,
    document_edge_values = NULL,
    word_type_topic_counts = NULL,
    topic_token_counts = NULL,
    current_word_type = NULL,
    alpha_m = NULL,
    beta_n = NULL,
    beta = NULL,
    rand_num = NULL,
    author_indexes = NULL,
    document_edge_matrix = NULL,
    document_topic_counts = NULL,
    token_topic_assignments = NULL,
    token_word_types = NULL,
    covariates = NULL,
    random_numbers = NULL,
    accept_rates = NULL,
    target_accept_rate = NULL,
    tollerance = NULL,
    update_size = NULL,
    iterations = NULL,
    metropolis_iterations = NULL,
    total_number_of_tokens = NULL,
    iterations_before_t_i_p_updates = NULL,
    update_t_i_p_every_x_iterations = NULL,
    perform_adaptive_metropolis = NULL,
    resample_word_types = NULL,
    slice_sample_alpha_m = NULL,
    slice_sample_step_size = NULL,
    parallel = NULL,
    use_cached_token_topic_distribution = NULL,
    cached_token_topic_distribution = NULL,
    u = NULL,
    num_documents = NULL,
    words_per_doc = NULL,
    num_topics = NULL,
    num_terms = NULL,
    num_actors = NULL,
    num_ip = NULL,
    num_ld = NULL,
    GiR_samples = NULL,
    forward_sample = TRUE,
	use_collapsed_topic_sampling = FALSE,
    verbose = TRUE) {

    return_object <- NULL

    # test the lsms function
    if (Test_Log_Space_Multinomial_Sampler) {
        return_object <- lsms(distribution,
                              seed, u)
    }

    # test ep function
    if (Test_Edge_Probability) {
        return_object <- ep(intercepts,
                         coefficients,
                         latent_positions,
                         document_sender,
                         document_recipient,
                         current_covariates,
                         interaction_pattern,
                         using_coefficients)
    }

    if (Test_Sum_Over_T_Edge_Probs) {
        return_object <- sotep(edge_probabilities,
              tokens_in_document,
              current_token_topic_assignment,
              current_document_topic_counts,
              leave_out_current_token,
              topic_interaction_patterns,
              document_sender,
              document_recipient,
              leave_out_topic)
    }

    if (Test_Prior_Pobability_Of_I_P_Params) {
        return_object <- ppipp(intercepts,
              coefficients,
              latent_positions,
              intercept_prior_mean,
              intercept_prior_standard_deviation,
              coefficient_prior_mean,
              coefficient_prior_standard_deviation,
              latent_position_prior_mean,
              latent_position_prior_standard_deviation,
              using_coefficients)
    }

    if (Test_Sample_New_I_P_Parameters) {
        return_object <- snipp(intercepts,
              coefficients,
              latent_positions,
              intercept_proposal_standard_deviations,
              coefficient_proposal_standard_deviations,
              latent_position_proposal_standard_deviations,
              using_coefficients)
    }

    if (Test_LSM_Contribution) {
        return_object <- lsmc(
            edge_probabilities,
            tokens_in_document,
            topic,
            current_token_topic_assignment,
            current_document_topic_counts,
            document_edge_values,
            topic_interaction_patterns,
            document_sender)
    }

    if (Test_LDA_Contribution) {
        return_object <- ldac(
            tokens_in_document,
            current_token_topic_assignment,
            current_document_topic_counts,
            word_type_topic_counts,
            topic_token_counts,
            topic,
            current_word_type,
            alpha_m,
            beta_n,
            beta)
    }

    if (Test_Update_Single_Token_Topic_Assignment) {
        return_object <- ustta(edge_probabilities,
              tokens_in_document,
              current_token_topic_assignment,
              current_document_topic_counts,
              word_type_topic_counts,
              topic_token_counts,
              current_word_type,
              alpha_m,
              beta_n,
              document_edge_values,
              topic_interaction_patterns,
              document_sender,
              rand_num,
              parallel,
              use_cached_token_topic_distribution,
              cached_token_topic_distribution)
    }

    if (Test_Update_All_Token_Topic_Assignments) {
        return_object <-  utta(author_indexes,
            document_edge_matrix,
            topic_interaction_patterns,
            document_topic_counts,
            word_type_topic_counts,
            topic_token_counts,
            token_topic_assignments,
            token_word_types,
            intercepts,
            coefficients,
            latent_positions,
            covariates,
            alpha_m,
            beta_n,
            random_numbers,
            using_coefficients,
            parallel)
    }

    if (Test_Update_Interaction_Pattern_Parameters) {
        return_object <- uipp(
            author_indexes,
            document_edge_matrix,
            document_topic_counts,
            topic_interaction_patterns,
            intercepts,
            coefficients,
            latent_positions,
            covariates,
            using_coefficients,
            intercept_prior_mean,
            intercept_prior_standard_deviation,
            intercept_proposal_standard_deviations,
            coefficient_prior_mean,
            coefficient_prior_standard_deviation,
            coefficient_proposal_standard_deviations,
            latent_position_prior_mean,
            latent_position_prior_standard_deviation,
            latent_position_proposal_standard_deviations,
            rand_num,
            edge_probabilities)
    }

    if (Test_Update_Topic_Interaction_Pattern_Assignments) {
        return_object <- utipa(author_indexes,
                               document_edge_matrix,
                               document_topic_counts,
                               topic_interaction_patterns,
                               intercepts,
                               coefficients,
                               latent_positions,
                               covariates,
                               using_coefficients,
                               random_numbers,
                               edge_probabilities)
    }

    if (Test_Adaptive_Metropolis) {
        return_object <- am(intercept_proposal_standard_deviations,
                            coefficient_proposal_standard_deviations,
                            latent_position_proposal_standard_deviations,
                            accept_rates,
                            target_accept_rate,
                            tollerance,
                            update_size)
    }

    if (Test_Inference) {
        return_object <- model_inference(
            author_indexes,
            document_edge_matrix,
            document_topic_counts,
            topic_interaction_patterns,
            word_type_topic_counts,
            topic_token_counts,
            token_topic_assignments,
            token_word_types,
            intercepts,
            coefficients,
            latent_positions,
            covariates,
            alpha_m,
            beta_n,
            using_coefficients,
            intercept_prior_mean,
            intercept_prior_standard_deviation,
            intercept_proposal_standard_deviations,
            coefficient_prior_mean,
            coefficient_prior_standard_deviation,
            coefficient_proposal_standard_deviations,
            latent_position_prior_mean,
            latent_position_prior_standard_deviation,
            latent_position_proposal_standard_deviations,
            target_accept_rate,
            tollerance,
            update_size,
            seed,
            iterations,
            metropolis_iterations,
            total_number_of_tokens,
            iterations_before_t_i_p_updates,
            update_t_i_p_every_x_iterations,
            perform_adaptive_metropolis,
            slice_sample_alpha_m,
            slice_sample_step_size,
            parallel,
            verbose)
    }

    if (Test_RDirichlet){
        return_object <- mjd_rdirichlet(alpha_m)
    }

    if (Test_Sample_Token_Topics_From_Generative_Process) {
        return_object <- sttgp(
            token_topic_assignments,
            token_word_types,
            alpha_m,
            beta_n,
            length(token_topic_assignments),
            resample_word_types,
            random_numbers,
			use_collapsed_topic_sampling)
    }

    if (Getting_It_Right) {
        return_object <- gir(
            author_indexes,
            covariates,
            alpha_m,
            beta_n,
            using_coefficients,
            intercept_prior_mean,
            intercept_prior_standard_deviation,
            intercept_proposal_standard_deviations,
            coefficient_prior_mean,
            coefficient_prior_standard_deviation,
            coefficient_proposal_standard_deviations,
            latent_position_prior_mean,
            latent_position_prior_standard_deviation,
            latent_position_proposal_standard_deviations,
            target_accept_rate,
            tollerance,
            update_size,
            seed,
            iterations,
            metropolis_iterations,
            total_number_of_tokens,
            iterations_before_t_i_p_updates,
            update_t_i_p_every_x_iterations,
            perform_adaptive_metropolis,
            slice_sample_alpha_m,
            slice_sample_step_size,
            parallel,
            num_documents,
            words_per_doc,
            num_topics,
            num_terms,
            num_actors,
            num_ip,
            num_ld,
            GiR_samples,
            forward_sample,
            token_topic_assignments,
            token_word_types,
            resample_word_types)

        # generate lables for the output
        colnms <- c(paste("LSM_Intercept_",1:num_ip,sep = ""),
                    paste("LSM_Mean_Coefficients_",1:num_ip,sep = ""),
                    paste("LSM_Mean_Positions_",1:num_ip,sep = ""),
                    paste("LSM_Sum_Of_Distances_",1:num_ip,sep = ""),
                    paste("Tokens_Assigned_To_IP_",1:num_ip,sep = ""),
                    paste("Token_Count_Topic_",1:num_topics,sep = ""),
                    paste("Tokens_Count_Word_Type_",1:num_terms,sep = ""),
                    "Mean_Edge_Value","Mean_IP_Value", "Mean_MH_Accept_Rate")

        colnames(return_object) <- colnms
    }

    # return whatever needs to be returned
    return(return_object)
}
