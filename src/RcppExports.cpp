// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// ep
double ep(arma::vec intercepts, arma::mat coefficients, NumericVector latent_pos, int sender, int recipient, arma::vec current_covariates, int interaction_pattern, bool using_coefficients);
RcppExport SEXP CCAS_ep(SEXP interceptsSEXP, SEXP coefficientsSEXP, SEXP latent_posSEXP, SEXP senderSEXP, SEXP recipientSEXP, SEXP current_covariatesSEXP, SEXP interaction_patternSEXP, SEXP using_coefficientsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type intercepts(interceptsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latent_pos(latent_posSEXP);
    Rcpp::traits::input_parameter< int >::type sender(senderSEXP);
    Rcpp::traits::input_parameter< int >::type recipient(recipientSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type current_covariates(current_covariatesSEXP);
    Rcpp::traits::input_parameter< int >::type interaction_pattern(interaction_patternSEXP);
    Rcpp::traits::input_parameter< bool >::type using_coefficients(using_coefficientsSEXP);
    __result = Rcpp::wrap(ep(intercepts, coefficients, latent_pos, sender, recipient, current_covariates, interaction_pattern, using_coefficients));
    return __result;
END_RCPP
}
// lsms
int lsms(arma::vec unnormalized_discrete_distribution, int seed);
RcppExport SEXP CCAS_lsms(SEXP unnormalized_discrete_distributionSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type unnormalized_discrete_distribution(unnormalized_discrete_distributionSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    __result = Rcpp::wrap(lsms(unnormalized_discrete_distribution, seed));
    return __result;
END_RCPP
}
// sotep
int sotep(NumericVector edge_probs, int tokens_in_document, int current_token_topic_assignment, arma::vec current_document_topic_counts, bool leave_out_current_token, arma::vec topic_interaction_patterns, int document_sender, int document_recipient, int leave_out_topic);
RcppExport SEXP CCAS_sotep(SEXP edge_probsSEXP, SEXP tokens_in_documentSEXP, SEXP current_token_topic_assignmentSEXP, SEXP current_document_topic_countsSEXP, SEXP leave_out_current_tokenSEXP, SEXP topic_interaction_patternsSEXP, SEXP document_senderSEXP, SEXP document_recipientSEXP, SEXP leave_out_topicSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type edge_probs(edge_probsSEXP);
    Rcpp::traits::input_parameter< int >::type tokens_in_document(tokens_in_documentSEXP);
    Rcpp::traits::input_parameter< int >::type current_token_topic_assignment(current_token_topic_assignmentSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type current_document_topic_counts(current_document_topic_countsSEXP);
    Rcpp::traits::input_parameter< bool >::type leave_out_current_token(leave_out_current_tokenSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type topic_interaction_patterns(topic_interaction_patternsSEXP);
    Rcpp::traits::input_parameter< int >::type document_sender(document_senderSEXP);
    Rcpp::traits::input_parameter< int >::type document_recipient(document_recipientSEXP);
    Rcpp::traits::input_parameter< int >::type leave_out_topic(leave_out_topicSEXP);
    __result = Rcpp::wrap(sotep(edge_probs, tokens_in_document, current_token_topic_assignment, current_document_topic_counts, leave_out_current_token, topic_interaction_patterns, document_sender, document_recipient, leave_out_topic));
    return __result;
END_RCPP
}
// ppipp
double ppipp(arma::vec intercepts, arma::mat coefficients, NumericVector latent_pos, double intercept_prior_mean, double intercept_prior_variance, double coefficient_prior_mean, double coefficient_prior_variance, double latent_position_prior_mean, double latent_position_prior_variance, bool using_coefficients);
RcppExport SEXP CCAS_ppipp(SEXP interceptsSEXP, SEXP coefficientsSEXP, SEXP latent_posSEXP, SEXP intercept_prior_meanSEXP, SEXP intercept_prior_varianceSEXP, SEXP coefficient_prior_meanSEXP, SEXP coefficient_prior_varianceSEXP, SEXP latent_position_prior_meanSEXP, SEXP latent_position_prior_varianceSEXP, SEXP using_coefficientsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type intercepts(interceptsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latent_pos(latent_posSEXP);
    Rcpp::traits::input_parameter< double >::type intercept_prior_mean(intercept_prior_meanSEXP);
    Rcpp::traits::input_parameter< double >::type intercept_prior_variance(intercept_prior_varianceSEXP);
    Rcpp::traits::input_parameter< double >::type coefficient_prior_mean(coefficient_prior_meanSEXP);
    Rcpp::traits::input_parameter< double >::type coefficient_prior_variance(coefficient_prior_varianceSEXP);
    Rcpp::traits::input_parameter< double >::type latent_position_prior_mean(latent_position_prior_meanSEXP);
    Rcpp::traits::input_parameter< double >::type latent_position_prior_variance(latent_position_prior_varianceSEXP);
    Rcpp::traits::input_parameter< bool >::type using_coefficients(using_coefficientsSEXP);
    __result = Rcpp::wrap(ppipp(intercepts, coefficients, latent_pos, intercept_prior_mean, intercept_prior_variance, coefficient_prior_mean, coefficient_prior_variance, latent_position_prior_mean, latent_position_prior_variance, using_coefficients));
    return __result;
END_RCPP
}
// snipp
List snipp(arma::vec intercepts, arma::mat coefficients, NumericVector latent_pos, arma::vec intercept_proposal_variances, arma::vec coefficient_proposal_variances, arma::vec latent_position_proposal_variances, bool using_coefficients);
RcppExport SEXP CCAS_snipp(SEXP interceptsSEXP, SEXP coefficientsSEXP, SEXP latent_posSEXP, SEXP intercept_proposal_variancesSEXP, SEXP coefficient_proposal_variancesSEXP, SEXP latent_position_proposal_variancesSEXP, SEXP using_coefficientsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type intercepts(interceptsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latent_pos(latent_posSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type intercept_proposal_variances(intercept_proposal_variancesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type coefficient_proposal_variances(coefficient_proposal_variancesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type latent_position_proposal_variances(latent_position_proposal_variancesSEXP);
    Rcpp::traits::input_parameter< bool >::type using_coefficients(using_coefficientsSEXP);
    __result = Rcpp::wrap(snipp(intercepts, coefficients, latent_pos, intercept_proposal_variances, coefficient_proposal_variances, latent_position_proposal_variances, using_coefficients));
    return __result;
END_RCPP
}
// lsmc
double lsmc(NumericVector edge_probs, int tokens_in_document, int topic, int current_token_topic_assignment, arma::vec current_document_topic_counts, arma::vec document_edge_values, arma::vec topic_interaction_patterns, int document_sender);
RcppExport SEXP CCAS_lsmc(SEXP edge_probsSEXP, SEXP tokens_in_documentSEXP, SEXP topicSEXP, SEXP current_token_topic_assignmentSEXP, SEXP current_document_topic_countsSEXP, SEXP document_edge_valuesSEXP, SEXP topic_interaction_patternsSEXP, SEXP document_senderSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type edge_probs(edge_probsSEXP);
    Rcpp::traits::input_parameter< int >::type tokens_in_document(tokens_in_documentSEXP);
    Rcpp::traits::input_parameter< int >::type topic(topicSEXP);
    Rcpp::traits::input_parameter< int >::type current_token_topic_assignment(current_token_topic_assignmentSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type current_document_topic_counts(current_document_topic_countsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type document_edge_values(document_edge_valuesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type topic_interaction_patterns(topic_interaction_patternsSEXP);
    Rcpp::traits::input_parameter< int >::type document_sender(document_senderSEXP);
    __result = Rcpp::wrap(lsmc(edge_probs, tokens_in_document, topic, current_token_topic_assignment, current_document_topic_counts, document_edge_values, topic_interaction_patterns, document_sender));
    return __result;
END_RCPP
}
// ldac
double ldac(int tokens_in_document, int current_token_topic_assignment, arma::vec current_document_topic_counts, arma::mat word_type_topic_counts, arma::vec topic_token_counts, int topic, int current_word_type, arma::vec alpha_m, arma::vec beta_n, double beta);
RcppExport SEXP CCAS_ldac(SEXP tokens_in_documentSEXP, SEXP current_token_topic_assignmentSEXP, SEXP current_document_topic_countsSEXP, SEXP word_type_topic_countsSEXP, SEXP topic_token_countsSEXP, SEXP topicSEXP, SEXP current_word_typeSEXP, SEXP alpha_mSEXP, SEXP beta_nSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type tokens_in_document(tokens_in_documentSEXP);
    Rcpp::traits::input_parameter< int >::type current_token_topic_assignment(current_token_topic_assignmentSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type current_document_topic_counts(current_document_topic_countsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type word_type_topic_counts(word_type_topic_countsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type topic_token_counts(topic_token_countsSEXP);
    Rcpp::traits::input_parameter< int >::type topic(topicSEXP);
    Rcpp::traits::input_parameter< int >::type current_word_type(current_word_typeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_m(alpha_mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta_n(beta_nSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    __result = Rcpp::wrap(ldac(tokens_in_document, current_token_topic_assignment, current_document_topic_counts, word_type_topic_counts, topic_token_counts, topic, current_word_type, alpha_m, beta_n, beta));
    return __result;
END_RCPP
}
// ustta
int ustta(NumericVector edge_probs, int tokens_in_document, int current_token_topic_assignment, arma::vec current_document_topic_counts, arma::mat word_type_topic_counts, arma::vec topic_token_counts, int current_word_type, arma::vec alpha_m, arma::vec beta_n, arma::vec document_edge_values, arma::vec topic_interaction_patterns, int document_sender, double rand_num);
RcppExport SEXP CCAS_ustta(SEXP edge_probsSEXP, SEXP tokens_in_documentSEXP, SEXP current_token_topic_assignmentSEXP, SEXP current_document_topic_countsSEXP, SEXP word_type_topic_countsSEXP, SEXP topic_token_countsSEXP, SEXP current_word_typeSEXP, SEXP alpha_mSEXP, SEXP beta_nSEXP, SEXP document_edge_valuesSEXP, SEXP topic_interaction_patternsSEXP, SEXP document_senderSEXP, SEXP rand_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type edge_probs(edge_probsSEXP);
    Rcpp::traits::input_parameter< int >::type tokens_in_document(tokens_in_documentSEXP);
    Rcpp::traits::input_parameter< int >::type current_token_topic_assignment(current_token_topic_assignmentSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type current_document_topic_counts(current_document_topic_countsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type word_type_topic_counts(word_type_topic_countsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type topic_token_counts(topic_token_countsSEXP);
    Rcpp::traits::input_parameter< int >::type current_word_type(current_word_typeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_m(alpha_mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta_n(beta_nSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type document_edge_values(document_edge_valuesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type topic_interaction_patterns(topic_interaction_patternsSEXP);
    Rcpp::traits::input_parameter< int >::type document_sender(document_senderSEXP);
    Rcpp::traits::input_parameter< double >::type rand_num(rand_numSEXP);
    __result = Rcpp::wrap(ustta(edge_probs, tokens_in_document, current_token_topic_assignment, current_document_topic_counts, word_type_topic_counts, topic_token_counts, current_word_type, alpha_m, beta_n, document_edge_values, topic_interaction_patterns, document_sender, rand_num));
    return __result;
END_RCPP
}
// utta
List utta(arma::vec author_indexes, arma::mat document_edge_matrix, arma::vec topic_interaction_patterns, arma::mat document_topic_counts, arma::mat word_type_topic_counts, arma::vec topic_token_counts, Rcpp::List token_topic_assignments, Rcpp::List token_word_types, arma::vec intercepts, arma::mat coefficients, NumericVector latent_pos, NumericVector covars, arma::vec alpha_m, arma::vec beta_n, arma::vec random_numbers, bool using_coefficients);
RcppExport SEXP CCAS_utta(SEXP author_indexesSEXP, SEXP document_edge_matrixSEXP, SEXP topic_interaction_patternsSEXP, SEXP document_topic_countsSEXP, SEXP word_type_topic_countsSEXP, SEXP topic_token_countsSEXP, SEXP token_topic_assignmentsSEXP, SEXP token_word_typesSEXP, SEXP interceptsSEXP, SEXP coefficientsSEXP, SEXP latent_posSEXP, SEXP covarsSEXP, SEXP alpha_mSEXP, SEXP beta_nSEXP, SEXP random_numbersSEXP, SEXP using_coefficientsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type author_indexes(author_indexesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type document_edge_matrix(document_edge_matrixSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type topic_interaction_patterns(topic_interaction_patternsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type document_topic_counts(document_topic_countsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type word_type_topic_counts(word_type_topic_countsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type topic_token_counts(topic_token_countsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type token_topic_assignments(token_topic_assignmentsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type token_word_types(token_word_typesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type intercepts(interceptsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latent_pos(latent_posSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type covars(covarsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_m(alpha_mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta_n(beta_nSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type random_numbers(random_numbersSEXP);
    Rcpp::traits::input_parameter< bool >::type using_coefficients(using_coefficientsSEXP);
    __result = Rcpp::wrap(utta(author_indexes, document_edge_matrix, topic_interaction_patterns, document_topic_counts, word_type_topic_counts, topic_token_counts, token_topic_assignments, token_word_types, intercepts, coefficients, latent_pos, covars, alpha_m, beta_n, random_numbers, using_coefficients));
    return __result;
END_RCPP
}
// uipp
List uipp(arma::vec author_indexes, arma::mat document_edge_matrix, arma::mat document_topic_counts, arma::vec topic_interaction_patterns, arma::vec intercepts, arma::mat coefficients, NumericVector latent_pos, NumericVector covars, bool using_coefficients, double intercept_prior_mean, double intercept_prior_variance, arma::vec intercept_proposal_variances, double coefficient_prior_mean, double coefficient_prior_variance, arma::vec coefficient_proposal_variances, double latent_position_prior_mean, double latent_position_prior_variance, arma::vec latent_position_proposal_variances, double random_number, NumericVector edge_probs);
RcppExport SEXP CCAS_uipp(SEXP author_indexesSEXP, SEXP document_edge_matrixSEXP, SEXP document_topic_countsSEXP, SEXP topic_interaction_patternsSEXP, SEXP interceptsSEXP, SEXP coefficientsSEXP, SEXP latent_posSEXP, SEXP covarsSEXP, SEXP using_coefficientsSEXP, SEXP intercept_prior_meanSEXP, SEXP intercept_prior_varianceSEXP, SEXP intercept_proposal_variancesSEXP, SEXP coefficient_prior_meanSEXP, SEXP coefficient_prior_varianceSEXP, SEXP coefficient_proposal_variancesSEXP, SEXP latent_position_prior_meanSEXP, SEXP latent_position_prior_varianceSEXP, SEXP latent_position_proposal_variancesSEXP, SEXP random_numberSEXP, SEXP edge_probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type author_indexes(author_indexesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type document_edge_matrix(document_edge_matrixSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type document_topic_counts(document_topic_countsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type topic_interaction_patterns(topic_interaction_patternsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type intercepts(interceptsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latent_pos(latent_posSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type covars(covarsSEXP);
    Rcpp::traits::input_parameter< bool >::type using_coefficients(using_coefficientsSEXP);
    Rcpp::traits::input_parameter< double >::type intercept_prior_mean(intercept_prior_meanSEXP);
    Rcpp::traits::input_parameter< double >::type intercept_prior_variance(intercept_prior_varianceSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type intercept_proposal_variances(intercept_proposal_variancesSEXP);
    Rcpp::traits::input_parameter< double >::type coefficient_prior_mean(coefficient_prior_meanSEXP);
    Rcpp::traits::input_parameter< double >::type coefficient_prior_variance(coefficient_prior_varianceSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type coefficient_proposal_variances(coefficient_proposal_variancesSEXP);
    Rcpp::traits::input_parameter< double >::type latent_position_prior_mean(latent_position_prior_meanSEXP);
    Rcpp::traits::input_parameter< double >::type latent_position_prior_variance(latent_position_prior_varianceSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type latent_position_proposal_variances(latent_position_proposal_variancesSEXP);
    Rcpp::traits::input_parameter< double >::type random_number(random_numberSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type edge_probs(edge_probsSEXP);
    __result = Rcpp::wrap(uipp(author_indexes, document_edge_matrix, document_topic_counts, topic_interaction_patterns, intercepts, coefficients, latent_pos, covars, using_coefficients, intercept_prior_mean, intercept_prior_variance, intercept_proposal_variances, coefficient_prior_mean, coefficient_prior_variance, coefficient_proposal_variances, latent_position_prior_mean, latent_position_prior_variance, latent_position_proposal_variances, random_number, edge_probs));
    return __result;
END_RCPP
}
// utipa
arma::vec utipa(arma::vec author_indexes, arma::mat document_edge_matrix, arma::mat document_topic_counts, arma::vec topic_interaction_patterns, arma::vec intercepts, arma::mat coefficients, NumericVector latent_pos, NumericVector covars, bool using_coefficients, arma::vec random_numbers, NumericVector edge_probs);
RcppExport SEXP CCAS_utipa(SEXP author_indexesSEXP, SEXP document_edge_matrixSEXP, SEXP document_topic_countsSEXP, SEXP topic_interaction_patternsSEXP, SEXP interceptsSEXP, SEXP coefficientsSEXP, SEXP latent_posSEXP, SEXP covarsSEXP, SEXP using_coefficientsSEXP, SEXP random_numbersSEXP, SEXP edge_probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type author_indexes(author_indexesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type document_edge_matrix(document_edge_matrixSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type document_topic_counts(document_topic_countsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type topic_interaction_patterns(topic_interaction_patternsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type intercepts(interceptsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latent_pos(latent_posSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type covars(covarsSEXP);
    Rcpp::traits::input_parameter< bool >::type using_coefficients(using_coefficientsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type random_numbers(random_numbersSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type edge_probs(edge_probsSEXP);
    __result = Rcpp::wrap(utipa(author_indexes, document_edge_matrix, document_topic_counts, topic_interaction_patterns, intercepts, coefficients, latent_pos, covars, using_coefficients, random_numbers, edge_probs));
    return __result;
END_RCPP
}
// am
List am(arma::vec intercept_proposal_variances, arma::vec coefficient_proposal_variances, arma::vec latent_position_proposal_variances, arma::vec accept_rates, double target_accept_rate, double tollerance, double update_size);
RcppExport SEXP CCAS_am(SEXP intercept_proposal_variancesSEXP, SEXP coefficient_proposal_variancesSEXP, SEXP latent_position_proposal_variancesSEXP, SEXP accept_ratesSEXP, SEXP target_accept_rateSEXP, SEXP tolleranceSEXP, SEXP update_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type intercept_proposal_variances(intercept_proposal_variancesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type coefficient_proposal_variances(coefficient_proposal_variancesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type latent_position_proposal_variances(latent_position_proposal_variancesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type accept_rates(accept_ratesSEXP);
    Rcpp::traits::input_parameter< double >::type target_accept_rate(target_accept_rateSEXP);
    Rcpp::traits::input_parameter< double >::type tollerance(tolleranceSEXP);
    Rcpp::traits::input_parameter< double >::type update_size(update_sizeSEXP);
    __result = Rcpp::wrap(am(intercept_proposal_variances, coefficient_proposal_variances, latent_position_proposal_variances, accept_rates, target_accept_rate, tollerance, update_size));
    return __result;
END_RCPP
}
