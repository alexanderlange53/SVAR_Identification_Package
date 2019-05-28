// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// LikelihoodCV
double LikelihoodCV(arma::vec& S, double& Tob, double& TB, arma::mat& SigmaHat1, int& k, arma::mat& SigmaHat2, arma::mat& RestrictionMatrix, int& restrictions);
RcppExport SEXP _svars_LikelihoodCV(SEXP SSEXP, SEXP TobSEXP, SEXP TBSEXP, SEXP SigmaHat1SEXP, SEXP kSEXP, SEXP SigmaHat2SEXP, SEXP RestrictionMatrixSEXP, SEXP restrictionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type S(SSEXP);
    Rcpp::traits::input_parameter< double& >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< double& >::type TB(TBSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type SigmaHat1(SigmaHat1SEXP);
    Rcpp::traits::input_parameter< int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type SigmaHat2(SigmaHat2SEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type RestrictionMatrix(RestrictionMatrixSEXP);
    Rcpp::traits::input_parameter< int& >::type restrictions(restrictionsSEXP);
    rcpp_result_gen = Rcpp::wrap(LikelihoodCV(S, Tob, TB, SigmaHat1, k, SigmaHat2, RestrictionMatrix, restrictions));
    return rcpp_result_gen;
END_RCPP
}
// nlmCV
Rcpp::List nlmCV(const arma::vec& S, double Tob, double TB, const arma::mat SigmaHat1, int k, const arma::mat SigmaHat2, arma::mat RestrictionMatrix, int restrictions);
RcppExport SEXP _svars_nlmCV(SEXP SSEXP, SEXP TobSEXP, SEXP TBSEXP, SEXP SigmaHat1SEXP, SEXP kSEXP, SEXP SigmaHat2SEXP, SEXP RestrictionMatrixSEXP, SEXP restrictionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< double >::type TB(TBSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type SigmaHat1(SigmaHat1SEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type SigmaHat2(SigmaHat2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type RestrictionMatrix(RestrictionMatrixSEXP);
    Rcpp::traits::input_parameter< int >::type restrictions(restrictionsSEXP);
    rcpp_result_gen = Rcpp::wrap(nlmCV(S, Tob, TB, SigmaHat1, k, SigmaHat2, RestrictionMatrix, restrictions));
    return rcpp_result_gen;
END_RCPP
}
// IdentifyVolatility
Rcpp::List IdentifyVolatility(int crit, const arma::mat& u, double TB, int p, int k, arma::mat RestrictionMatrix, int restrictions, double Tob, arma::mat SigmaHat1, arma::mat SigmaHat2, arma::mat Zt, arma::mat y, int maxIter);
RcppExport SEXP _svars_IdentifyVolatility(SEXP critSEXP, SEXP uSEXP, SEXP TBSEXP, SEXP pSEXP, SEXP kSEXP, SEXP RestrictionMatrixSEXP, SEXP restrictionsSEXP, SEXP TobSEXP, SEXP SigmaHat1SEXP, SEXP SigmaHat2SEXP, SEXP ZtSEXP, SEXP ySEXP, SEXP maxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type crit(critSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< double >::type TB(TBSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type RestrictionMatrix(RestrictionMatrixSEXP);
    Rcpp::traits::input_parameter< int >::type restrictions(restrictionsSEXP);
    Rcpp::traits::input_parameter< double >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type SigmaHat1(SigmaHat1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type SigmaHat2(SigmaHat2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Zt(ZtSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(IdentifyVolatility(crit, u, TB, p, k, RestrictionMatrix, restrictions, Tob, SigmaHat1, SigmaHat2, Zt, y, maxIter));
    return rcpp_result_gen;
END_RCPP
}
// LikelihoodGARCHu
double LikelihoodGARCHu(const arma::vec& parameter, arma::vec& est, double& Sigma1, int& Tob);
RcppExport SEXP _svars_LikelihoodGARCHu(SEXP parameterSEXP, SEXP estSEXP, SEXP Sigma1SEXP, SEXP TobSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type est(estSEXP);
    Rcpp::traits::input_parameter< double& >::type Sigma1(Sigma1SEXP);
    Rcpp::traits::input_parameter< int& >::type Tob(TobSEXP);
    rcpp_result_gen = Rcpp::wrap(LikelihoodGARCHu(parameter, est, Sigma1, Tob));
    return rcpp_result_gen;
END_RCPP
}
// nlmGARCHu
Rcpp::List nlmGARCHu(const arma::vec parameter, const arma::vec est, double Sigma1, int Tob);
RcppExport SEXP _svars_nlmGARCHu(SEXP parameterSEXP, SEXP estSEXP, SEXP Sigma1SEXP, SEXP TobSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type est(estSEXP);
    Rcpp::traits::input_parameter< double >::type Sigma1(Sigma1SEXP);
    Rcpp::traits::input_parameter< int >::type Tob(TobSEXP);
    rcpp_result_gen = Rcpp::wrap(nlmGARCHu(parameter, est, Sigma1, Tob));
    return rcpp_result_gen;
END_RCPP
}
// SigmaGARCHuniv
arma::vec SigmaGARCHuniv(const arma::vec& param, int Tob, double& SigmaE, const arma::vec est);
RcppExport SEXP _svars_SigmaGARCHuniv(SEXP paramSEXP, SEXP TobSEXP, SEXP SigmaESEXP, SEXP estSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< int >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< double& >::type SigmaE(SigmaESEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type est(estSEXP);
    rcpp_result_gen = Rcpp::wrap(SigmaGARCHuniv(param, Tob, SigmaE, est));
    return rcpp_result_gen;
END_RCPP
}
// GarchStart
Rcpp::List GarchStart(int& StartIter, int& k, arma::mat& ste, int& Tob);
RcppExport SEXP _svars_GarchStart(SEXP StartIterSEXP, SEXP kSEXP, SEXP steSEXP, SEXP TobSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int& >::type StartIter(StartIterSEXP);
    Rcpp::traits::input_parameter< int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type ste(steSEXP);
    Rcpp::traits::input_parameter< int& >::type Tob(TobSEXP);
    rcpp_result_gen = Rcpp::wrap(GarchStart(StartIter, k, ste, Tob));
    return rcpp_result_gen;
END_RCPP
}
// likelihoodGARCHm
double likelihoodGARCHm(arma::vec& parameter, arma::mat& SigmaE, int& Tob, int& k, arma::mat& u, arma::mat& RestrictionMatrix, int& restrictions);
RcppExport SEXP _svars_likelihoodGARCHm(SEXP parameterSEXP, SEXP SigmaESEXP, SEXP TobSEXP, SEXP kSEXP, SEXP uSEXP, SEXP RestrictionMatrixSEXP, SEXP restrictionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type SigmaE(SigmaESEXP);
    Rcpp::traits::input_parameter< int& >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type RestrictionMatrix(RestrictionMatrixSEXP);
    Rcpp::traits::input_parameter< int& >::type restrictions(restrictionsSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihoodGARCHm(parameter, SigmaE, Tob, k, u, RestrictionMatrix, restrictions));
    return rcpp_result_gen;
END_RCPP
}
// LikelihoodNGMLStage2
double LikelihoodNGMLStage2(const arma::vec& theta, const arma::mat& u, int Tob, int& k, arma::mat& RestrictionMatrix, int& restrictions);
RcppExport SEXP _svars_LikelihoodNGMLStage2(SEXP thetaSEXP, SEXP uSEXP, SEXP TobSEXP, SEXP kSEXP, SEXP RestrictionMatrixSEXP, SEXP restrictionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< int >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type RestrictionMatrix(RestrictionMatrixSEXP);
    Rcpp::traits::input_parameter< int& >::type restrictions(restrictionsSEXP);
    rcpp_result_gen = Rcpp::wrap(LikelihoodNGMLStage2(theta, u, Tob, k, RestrictionMatrix, restrictions));
    return rcpp_result_gen;
END_RCPP
}
// LikelihoodNGMLStage3
double LikelihoodNGMLStage3(arma::vec& A, arma::mat& Z_t, const arma::mat& Y, const arma::mat& B_stand_est, arma::vec& sigma_est, arma::vec& d_freedom, int& k, int& Tob);
RcppExport SEXP _svars_LikelihoodNGMLStage3(SEXP ASEXP, SEXP Z_tSEXP, SEXP YSEXP, SEXP B_stand_estSEXP, SEXP sigma_estSEXP, SEXP d_freedomSEXP, SEXP kSEXP, SEXP TobSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Z_t(Z_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B_stand_est(B_stand_estSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type sigma_est(sigma_estSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type d_freedom(d_freedomSEXP);
    Rcpp::traits::input_parameter< int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< int& >::type Tob(TobSEXP);
    rcpp_result_gen = Rcpp::wrap(LikelihoodNGMLStage3(A, Z_t, Y, B_stand_est, sigma_est, d_freedom, k, Tob));
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
    {"_svars_nlmCV", (DL_FUNC) &_svars_nlmCV, 8},
    {"_svars_IdentifyVolatility", (DL_FUNC) &_svars_IdentifyVolatility, 13},
    {"_svars_LikelihoodGARCHu", (DL_FUNC) &_svars_LikelihoodGARCHu, 4},
    {"_svars_nlmGARCHu", (DL_FUNC) &_svars_nlmGARCHu, 4},
    {"_svars_SigmaGARCHuniv", (DL_FUNC) &_svars_SigmaGARCHuniv, 4},
    {"_svars_GarchStart", (DL_FUNC) &_svars_GarchStart, 4},
    {"_svars_likelihoodGARCHm", (DL_FUNC) &_svars_likelihoodGARCHm, 7},
    {"_svars_LikelihoodNGMLStage2", (DL_FUNC) &_svars_LikelihoodNGMLStage2, 6},
    {"_svars_LikelihoodNGMLStage3", (DL_FUNC) &_svars_LikelihoodNGMLStage3, 8},
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
