// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ApproxMean
double ApproxMean(arma::vec Y, arma::vec s, arma::vec lam, int J);
RcppExport SEXP _BayesReversePLLH_ApproxMean(SEXP YSEXP, SEXP sSEXP, SEXP lamSEXP, SEXP JSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type s(sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< int >::type J(JSEXP);
    rcpp_result_gen = Rcpp::wrap(ApproxMean(Y, s, lam, J));
    return rcpp_result_gen;
END_RCPP
}
// SurvPLLH
arma::vec SurvPLLH(arma::vec Y, arma::vec s, arma::vec lam, int J);
RcppExport SEXP _BayesReversePLLH_SurvPLLH(SEXP YSEXP, SEXP sSEXP, SEXP lamSEXP, SEXP JSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type s(sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< int >::type J(JSEXP);
    rcpp_result_gen = Rcpp::wrap(SurvPLLH(Y, s, lam, J));
    return rcpp_result_gen;
END_RCPP
}
// BayesPiecewiseLinearLogHazardTrt
List BayesPiecewiseLinearLogHazardTrt(arma::vec Y, arma::vec I1, arma::vec Trt, double Poi, int B);
RcppExport SEXP _BayesReversePLLH_BayesPiecewiseLinearLogHazardTrt(SEXP YSEXP, SEXP I1SEXP, SEXP TrtSEXP, SEXP PoiSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type I1(I1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Trt(TrtSEXP);
    Rcpp::traits::input_parameter< double >::type Poi(PoiSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(BayesPiecewiseLinearLogHazardTrt(Y, I1, Trt, Poi, B));
    return rcpp_result_gen;
END_RCPP
}
// BayesPiecewiseHazardTrt
List BayesPiecewiseHazardTrt(arma::vec Y, arma::vec I1, arma::vec Trt, double Poi, int B);
RcppExport SEXP _BayesReversePLLH_BayesPiecewiseHazardTrt(SEXP YSEXP, SEXP I1SEXP, SEXP TrtSEXP, SEXP PoiSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type I1(I1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Trt(TrtSEXP);
    Rcpp::traits::input_parameter< double >::type Poi(PoiSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(BayesPiecewiseHazardTrt(Y, I1, Trt, Poi, B));
    return rcpp_result_gen;
END_RCPP
}
// BayesPiecewiseHazardCOV
List BayesPiecewiseHazardCOV(arma::vec Y, arma::vec I1, arma::mat COV, double Poi, int B);
RcppExport SEXP _BayesReversePLLH_BayesPiecewiseHazardCOV(SEXP YSEXP, SEXP I1SEXP, SEXP COVSEXP, SEXP PoiSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type I1(I1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type COV(COVSEXP);
    Rcpp::traits::input_parameter< double >::type Poi(PoiSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(BayesPiecewiseHazardCOV(Y, I1, COV, Poi, B));
    return rcpp_result_gen;
END_RCPP
}
// BayesPiecewiseLinearLogHazardCOV
List BayesPiecewiseLinearLogHazardCOV(arma::vec Y, arma::vec I1, arma::mat COV, double Poi, int B);
RcppExport SEXP _BayesReversePLLH_BayesPiecewiseLinearLogHazardCOV(SEXP YSEXP, SEXP I1SEXP, SEXP COVSEXP, SEXP PoiSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type I1(I1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type COV(COVSEXP);
    Rcpp::traits::input_parameter< double >::type Poi(PoiSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(BayesPiecewiseLinearLogHazardCOV(Y, I1, COV, Poi, B));
    return rcpp_result_gen;
END_RCPP
}
// BayesPiecewiseHazard
List BayesPiecewiseHazard(arma::vec Y, arma::vec I1, double Poi, int B);
RcppExport SEXP _BayesReversePLLH_BayesPiecewiseHazard(SEXP YSEXP, SEXP I1SEXP, SEXP PoiSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type I1(I1SEXP);
    Rcpp::traits::input_parameter< double >::type Poi(PoiSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(BayesPiecewiseHazard(Y, I1, Poi, B));
    return rcpp_result_gen;
END_RCPP
}
// BayesPiecewiseLinearLogHazard
List BayesPiecewiseLinearLogHazard(arma::vec Y, arma::vec I1, double Poi, int B);
RcppExport SEXP _BayesReversePLLH_BayesPiecewiseLinearLogHazard(SEXP YSEXP, SEXP I1SEXP, SEXP PoiSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type I1(I1SEXP);
    Rcpp::traits::input_parameter< double >::type Poi(PoiSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(BayesPiecewiseLinearLogHazard(Y, I1, Poi, B));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BayesReversePLLH_ApproxMean", (DL_FUNC) &_BayesReversePLLH_ApproxMean, 4},
    {"_BayesReversePLLH_SurvPLLH", (DL_FUNC) &_BayesReversePLLH_SurvPLLH, 4},
    {"_BayesReversePLLH_BayesPiecewiseLinearLogHazardTrt", (DL_FUNC) &_BayesReversePLLH_BayesPiecewiseLinearLogHazardTrt, 5},
    {"_BayesReversePLLH_BayesPiecewiseHazardTrt", (DL_FUNC) &_BayesReversePLLH_BayesPiecewiseHazardTrt, 5},
    {"_BayesReversePLLH_BayesPiecewiseHazardCOV", (DL_FUNC) &_BayesReversePLLH_BayesPiecewiseHazardCOV, 5},
    {"_BayesReversePLLH_BayesPiecewiseLinearLogHazardCOV", (DL_FUNC) &_BayesReversePLLH_BayesPiecewiseLinearLogHazardCOV, 5},
    {"_BayesReversePLLH_BayesPiecewiseHazard", (DL_FUNC) &_BayesReversePLLH_BayesPiecewiseHazard, 4},
    {"_BayesReversePLLH_BayesPiecewiseLinearLogHazard", (DL_FUNC) &_BayesReversePLLH_BayesPiecewiseLinearLogHazard, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_BayesReversePLLH(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
