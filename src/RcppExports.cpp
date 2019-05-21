// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// LikelihoodCV
double LikelihoodCV(arma::vec& S, double& Tob, double& TB, arma::mat& Sigma_hat1, int& k, arma::mat& Sigma_hat2, arma::mat& RestrictionMatrix, int& restrictions);
RcppExport SEXP _svars_LikelihoodCV(SEXP SSEXP, SEXP TobSEXP, SEXP TBSEXP, SEXP Sigma_hat1SEXP, SEXP kSEXP, SEXP Sigma_hat2SEXP, SEXP RestrictionMatrixSEXP, SEXP restrictionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type S(SSEXP);
    Rcpp::traits::input_parameter< double& >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< double& >::type TB(TBSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Sigma_hat1(Sigma_hat1SEXP);
    Rcpp::traits::input_parameter< int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Sigma_hat2(Sigma_hat2SEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type RestrictionMatrix(RestrictionMatrixSEXP);
    Rcpp::traits::input_parameter< int& >::type restrictions(restrictionsSEXP);
    rcpp_result_gen = Rcpp::wrap(LikelihoodCV(S, Tob, TB, Sigma_hat1, k, Sigma_hat2, RestrictionMatrix, restrictions));
    return rcpp_result_gen;
END_RCPP
}
// IdentifyVolatilityNew
Rcpp::List IdentifyVolatilityNew(int& counter, arma::mat& Bhat, arma::mat& LambdaHat, int& Exit, int& crit, int& MaxIter, arma::mat& Zt, double& TB, arma::mat& y, int& p, int& k, arma::mat& RestrictionMatrix, int& restrictions, arma::vec& S, double& Tob);
RcppExport SEXP _svars_IdentifyVolatilityNew(SEXP counterSEXP, SEXP BhatSEXP, SEXP LambdaHatSEXP, SEXP ExitSEXP, SEXP critSEXP, SEXP MaxIterSEXP, SEXP ZtSEXP, SEXP TBSEXP, SEXP ySEXP, SEXP pSEXP, SEXP kSEXP, SEXP RestrictionMatrixSEXP, SEXP restrictionsSEXP, SEXP SSEXP, SEXP TobSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int& >::type counter(counterSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Bhat(BhatSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type LambdaHat(LambdaHatSEXP);
    Rcpp::traits::input_parameter< int& >::type Exit(ExitSEXP);
    Rcpp::traits::input_parameter< int& >::type crit(critSEXP);
    Rcpp::traits::input_parameter< int& >::type MaxIter(MaxIterSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Zt(ZtSEXP);
    Rcpp::traits::input_parameter< double& >::type TB(TBSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int& >::type p(pSEXP);
    Rcpp::traits::input_parameter< int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type RestrictionMatrix(RestrictionMatrixSEXP);
    Rcpp::traits::input_parameter< int& >::type restrictions(restrictionsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type S(SSEXP);
    Rcpp::traits::input_parameter< double& >::type Tob(TobSEXP);
    rcpp_result_gen = Rcpp::wrap(IdentifyVolatilityNew(counter, Bhat, LambdaHat, Exit, crit, MaxIter, Zt, TB, y, p, k, RestrictionMatrix, restrictions, S, Tob));
    return rcpp_result_gen;
END_RCPP
}
// LikelihoodST
double LikelihoodST(arma::vec& parameter, double& Tob, arma::mat& u, int& k, arma::vec& G, arma::mat& RestrictionMatrix, int& restrictions);
RcppExport SEXP _svars_LikelihoodST(SEXP parameterSEXP, SEXP TobSEXP, SEXP uSEXP, SEXP kSEXP, SEXP GSEXP, SEXP RestrictionMatrixSEXP, SEXP restrictionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< double& >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type RestrictionMatrix(RestrictionMatrixSEXP);
    Rcpp::traits::input_parameter< int& >::type restrictions(restrictionsSEXP);
    rcpp_result_gen = Rcpp::wrap(LikelihoodST(parameter, Tob, u, k, G, RestrictionMatrix, restrictions));
    return rcpp_result_gen;
END_RCPP
}
// nlmST
Rcpp::List nlmST(const arma::vec& S, double Tob, const arma::mat u, int k, const arma::vec transition, const arma::mat RestrictionMatrix, int restrictions);
RcppExport SEXP _svars_nlmST(SEXP SSEXP, SEXP TobSEXP, SEXP uSEXP, SEXP kSEXP, SEXP transitionSEXP, SEXP RestrictionMatrixSEXP, SEXP restrictionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type u(uSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type RestrictionMatrix(RestrictionMatrixSEXP);
    Rcpp::traits::input_parameter< int >::type restrictions(restrictionsSEXP);
    rcpp_result_gen = Rcpp::wrap(nlmST(S, Tob, u, k, transition, RestrictionMatrix, restrictions));
    return rcpp_result_gen;
END_RCPP
}
// mGLSst
arma::vec mGLSst(const arma::vec transition, const arma::mat& B, const arma::mat& Lambda, const arma::mat Z_t, int k, const arma::mat Y);
RcppExport SEXP _svars_mGLSst(SEXP transitionSEXP, SEXP BSEXP, SEXP LambdaSEXP, SEXP Z_tSEXP, SEXP kSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Z_t(Z_tSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(mGLSst(transition, B, Lambda, Z_t, k, Y));
    return rcpp_result_gen;
END_RCPP
}
// IterativeSmoothTransition
Rcpp::List IterativeSmoothTransition(const arma::vec& transition, const arma::mat& u, int& Tob, int& k, int& p, double& crit, int& maxIter, arma::mat& Z_t, arma::mat& Yloop, arma::mat& RestrictionMatrix, int& restrictions);
RcppExport SEXP _svars_IterativeSmoothTransition(SEXP transitionSEXP, SEXP uSEXP, SEXP TobSEXP, SEXP kSEXP, SEXP pSEXP, SEXP critSEXP, SEXP maxIterSEXP, SEXP Z_tSEXP, SEXP YloopSEXP, SEXP RestrictionMatrixSEXP, SEXP restrictionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< int& >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< int& >::type p(pSEXP);
    Rcpp::traits::input_parameter< double& >::type crit(critSEXP);
    Rcpp::traits::input_parameter< int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Z_t(Z_tSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Yloop(YloopSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type RestrictionMatrix(RestrictionMatrixSEXP);
    Rcpp::traits::input_parameter< int& >::type restrictions(restrictionsSEXP);
    rcpp_result_gen = Rcpp::wrap(IterativeSmoothTransition(transition, u, Tob, k, p, crit, maxIter, Z_t, Yloop, RestrictionMatrix, restrictions));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_svars_LikelihoodCV", (DL_FUNC) &_svars_LikelihoodCV, 8},
    {"_svars_IdentifyVolatilityNew", (DL_FUNC) &_svars_IdentifyVolatilityNew, 15},
    {"_svars_LikelihoodST", (DL_FUNC) &_svars_LikelihoodST, 7},
    {"_svars_nlmST", (DL_FUNC) &_svars_nlmST, 7},
    {"_svars_mGLSst", (DL_FUNC) &_svars_mGLSst, 6},
    {"_svars_IterativeSmoothTransition", (DL_FUNC) &_svars_IterativeSmoothTransition, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_svars(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
