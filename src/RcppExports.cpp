// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// backward
NumericVector backward(NumericVector transitionMatrix, NumericVector emissionArray, IntegerVector obsArray);
RcppExport SEXP seqHMM_backward(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        NumericVector __result = backward(transitionMatrix, emissionArray, obsArray);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// backwardMC
NumericVector backwardMC(NumericVector transitionMatrix, NumericVector emissionArray, IntegerVector obsArray);
RcppExport SEXP seqHMM_backwardMC(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        NumericVector __result = backwardMC(transitionMatrix, emissionArray, obsArray);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// EM
List EM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, int nSymbols, int itermax = 100, double tol = 1e-8, int trace = 0);
RcppExport SEXP seqHMM_EM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP nSymbolsSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        Rcpp::traits::input_parameter< int >::type nSymbols(nSymbolsSEXP );
        Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP );
        Rcpp::traits::input_parameter< double >::type tol(tolSEXP );
        Rcpp::traits::input_parameter< int >::type trace(traceSEXP );
        List __result = EM(transitionMatrix, emissionArray, initialProbs, obsArray, nSymbols, itermax, tol, trace);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// EMMC
List EMMC(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, IntegerVector nSymbols, int itermax = 100, double tol = 1e-8, int trace = 0);
RcppExport SEXP seqHMM_EMMC(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP nSymbolsSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type nSymbols(nSymbolsSEXP );
        Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP );
        Rcpp::traits::input_parameter< double >::type tol(tolSEXP );
        Rcpp::traits::input_parameter< int >::type trace(traceSEXP );
        List __result = EMMC(transitionMatrix, emissionArray, initialProbs, obsArray, nSymbols, itermax, tol, trace);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// forward
NumericVector forward(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_forward(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        NumericVector __result = forward(transitionMatrix, emissionArray, initialProbs, obsArray);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// forwardMC
NumericVector forwardMC(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_forwardMC(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        NumericVector __result = forwardMC(transitionMatrix, emissionArray, initialProbs, obsArray);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// gradient
NumericVector gradient(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericVector rowSumsA, NumericVector rowSumsB, double sumInit, IntegerVector transNZ, IntegerVector emissNZ, IntegerVector initNZ, NumericVector expPsi);
RcppExport SEXP seqHMM_gradient(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP rowSumsASEXP, SEXP rowSumsBSEXP, SEXP sumInitSEXP, SEXP transNZSEXP, SEXP emissNZSEXP, SEXP initNZSEXP, SEXP expPsiSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type rowSumsA(rowSumsASEXP );
        Rcpp::traits::input_parameter< NumericVector >::type rowSumsB(rowSumsBSEXP );
        Rcpp::traits::input_parameter< double >::type sumInit(sumInitSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type transNZ(transNZSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type emissNZ(emissNZSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type initNZ(initNZSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type expPsi(expPsiSEXP );
        NumericVector __result = gradient(transitionMatrix, emissionArray, initialProbs, obsArray, rowSumsA, rowSumsB, sumInit, transNZ, emissNZ, initNZ, expPsi);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// gradientMC
NumericVector gradientMC(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericVector rowSumsA, NumericVector rowSumsB_, double sumInit, IntegerVector transNZ, IntegerVector emissNZ, IntegerVector initNZ, NumericVector expPsi);
RcppExport SEXP seqHMM_gradientMC(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP rowSumsASEXP, SEXP rowSumsB_SEXP, SEXP sumInitSEXP, SEXP transNZSEXP, SEXP emissNZSEXP, SEXP initNZSEXP, SEXP expPsiSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type rowSumsA(rowSumsASEXP );
        Rcpp::traits::input_parameter< NumericVector >::type rowSumsB_(rowSumsB_SEXP );
        Rcpp::traits::input_parameter< double >::type sumInit(sumInitSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type transNZ(transNZSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type emissNZ(emissNZSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type initNZ(initNZSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type expPsi(expPsiSEXP );
        NumericVector __result = gradientMC(transitionMatrix, emissionArray, initialProbs, obsArray, rowSumsA, rowSumsB_, sumInit, transNZ, emissNZ, initNZ, expPsi);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// logLikHMM
double logLikHMM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_logLikHMM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        double __result = logLikHMM(transitionMatrix, emissionArray, initialProbs, obsArray);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// logLikMCHMM
double logLikMCHMM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_logLikMCHMM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        double __result = logLikMCHMM(transitionMatrix, emissionArray, initialProbs, obsArray);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// logLikMixHMM
double logLikMixHMM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates);
RcppExport SEXP seqHMM_logLikMixHMM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP );
        double __result = logLikMixHMM(transitionMatrix, emissionArray, initialProbs, obsArray, coefs, X_, numberOfStates);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// logLikMixMCHMM
double logLikMixMCHMM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates);
RcppExport SEXP seqHMM_logLikMixMCHMM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP );
        double __result = logLikMixMCHMM(transitionMatrix, emissionArray, initialProbs, obsArray, coefs, X_, numberOfStates);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// viterbi
List viterbi(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_viterbi(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        List __result = viterbi(transitionMatrix, emissionArray, initialProbs, obsArray);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// viterbiMC
List viterbiMC(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_viterbiMC(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        List __result = viterbiMC(transitionMatrix, emissionArray, initialProbs, obsArray);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// viterbiMix
List viterbiMix(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates);
RcppExport SEXP seqHMM_viterbiMix(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP );
        List __result = viterbiMix(transitionMatrix, emissionArray, initialProbs, obsArray, coefs, X_, numberOfStates);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// viterbiMixMC
List viterbiMixMC(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates);
RcppExport SEXP seqHMM_viterbiMixMC(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP );
        List __result = viterbiMixMC(transitionMatrix, emissionArray, initialProbs, obsArray, coefs, X_, numberOfStates);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
