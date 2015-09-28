// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dgamma_c
NumericVector dgamma_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtySurv_dgamma_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(dgamma_c(x, theta));
    return __result;
END_RCPP
}
// deriv_dgamma_c
NumericVector deriv_dgamma_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtySurv_deriv_dgamma_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_dgamma_c(x, theta));
    return __result;
END_RCPP
}
// lt_dgamma_c
double lt_dgamma_c(int m, double s, double theta);
RcppExport SEXP frailtySurv_lt_dgamma_c(SEXP mSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(lt_dgamma_c(m, s, theta));
    return __result;
END_RCPP
}
// deriv_lt_dgamma_c
double deriv_lt_dgamma_c(int m, double s, double theta);
RcppExport SEXP frailtySurv_deriv_lt_dgamma_c(SEXP mSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_lt_dgamma_c(m, s, theta));
    return __result;
END_RCPP
}
// deriv_deriv_lt_dgamma_c
double deriv_deriv_lt_dgamma_c(int m, double s, double theta);
RcppExport SEXP frailtySurv_deriv_deriv_lt_dgamma_c(SEXP mSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_deriv_lt_dgamma_c(m, s, theta));
    return __result;
END_RCPP
}
// lt_dlognormal_c
double lt_dlognormal_c(int m, double s, double theta);
RcppExport SEXP frailtySurv_lt_dlognormal_c(SEXP mSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(lt_dlognormal_c(m, s, theta));
    return __result;
END_RCPP
}
// dlognormal_c
NumericVector dlognormal_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtySurv_dlognormal_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(dlognormal_c(x, theta));
    return __result;
END_RCPP
}
// deriv_dlognormal_c
NumericVector deriv_dlognormal_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtySurv_deriv_dlognormal_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_dlognormal_c(x, theta));
    return __result;
END_RCPP
}
// deriv_deriv_dlognormal_c
NumericVector deriv_deriv_dlognormal_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtySurv_deriv_deriv_dlognormal_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_deriv_dlognormal_c(x, theta));
    return __result;
END_RCPP
}
// lt_dinvgauss_c
double lt_dinvgauss_c(int m, double s, double theta);
RcppExport SEXP frailtySurv_lt_dinvgauss_c(SEXP mSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(lt_dinvgauss_c(m, s, theta));
    return __result;
END_RCPP
}
// dinvgauss_c
NumericVector dinvgauss_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtySurv_dinvgauss_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(dinvgauss_c(x, theta));
    return __result;
END_RCPP
}
// deriv_dinvgauss_c
NumericVector deriv_dinvgauss_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtySurv_deriv_dinvgauss_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_dinvgauss_c(x, theta));
    return __result;
END_RCPP
}
// deriv_deriv_dinvgauss_c
NumericVector deriv_deriv_dinvgauss_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtySurv_deriv_deriv_dinvgauss_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_deriv_dinvgauss_c(x, theta));
    return __result;
END_RCPP
}
// lt_dpvf_coef
double lt_dpvf_coef(int p, int j, double alpha);
RcppExport SEXP frailtySurv_lt_dpvf_coef(SEXP pSEXP, SEXP jSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(lt_dpvf_coef(p, j, alpha));
    return __result;
END_RCPP
}
// deriv_lt_dpvf_coef
double deriv_lt_dpvf_coef(int p, int j, double alpha);
RcppExport SEXP frailtySurv_deriv_lt_dpvf_coef(SEXP pSEXP, SEXP jSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(deriv_lt_dpvf_coef(p, j, alpha));
    return __result;
END_RCPP
}
// deriv_deriv_lt_dpvf_coef
double deriv_deriv_lt_dpvf_coef(int m, int j, double alpha);
RcppExport SEXP frailtySurv_deriv_deriv_lt_dpvf_coef(SEXP mSEXP, SEXP jSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(deriv_deriv_lt_dpvf_coef(m, j, alpha));
    return __result;
END_RCPP
}
// dpvf_c
NumericVector dpvf_c(NumericVector x, NumericVector alpha);
RcppExport SEXP frailtySurv_dpvf_c(SEXP xSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(dpvf_c(x, alpha));
    return __result;
END_RCPP
}
// lt_dpvf_c
double lt_dpvf_c(int m, double s, double alpha);
RcppExport SEXP frailtySurv_lt_dpvf_c(SEXP mSEXP, SEXP sSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(lt_dpvf_c(m, s, alpha));
    return __result;
END_RCPP
}
// deriv_lt_dpvf_c
double deriv_lt_dpvf_c(int m, double s, double alpha);
RcppExport SEXP frailtySurv_deriv_lt_dpvf_c(SEXP mSEXP, SEXP sSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(deriv_lt_dpvf_c(m, s, alpha));
    return __result;
END_RCPP
}
// deriv_deriv_lt_dpvf_c
double deriv_deriv_lt_dpvf_c(int m, double s, double alpha);
RcppExport SEXP frailtySurv_deriv_deriv_lt_dpvf_c(SEXP mSEXP, SEXP sSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(deriv_deriv_lt_dpvf_c(m, s, alpha));
    return __result;
END_RCPP
}
// dposstab_c
NumericVector dposstab_c(NumericVector x, NumericVector alpha);
RcppExport SEXP frailtySurv_dposstab_c(SEXP xSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(dposstab_c(x, alpha));
    return __result;
END_RCPP
}
// lt_dposstab_c
double lt_dposstab_c(int m, double s, double alpha);
RcppExport SEXP frailtySurv_lt_dposstab_c(SEXP mSEXP, SEXP sSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(lt_dposstab_c(m, s, alpha));
    return __result;
END_RCPP
}
// zeta
double zeta(double s);
RcppExport SEXP frailtySurv_zeta(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    __result = Rcpp::wrap(zeta(s));
    return __result;
END_RCPP
}
// phi_c
double phi_c(int k, int N_dot, double H_dot, double theta, String frailty, double abstol, double reltol, int maxit);
RcppExport SEXP frailtySurv_phi_c(SEXP kSEXP, SEXP N_dotSEXP, SEXP H_dotSEXP, SEXP thetaSEXP, SEXP frailtySEXP, SEXP abstolSEXP, SEXP reltolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< double >::type H_dot(H_dotSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    __result = Rcpp::wrap(phi_c(k, N_dot, H_dot, theta, frailty, abstol, reltol, maxit));
    return __result;
END_RCPP
}
// phi_prime_c
double phi_prime_c(int k, int N_dot, double H_dot, double theta, String frailty, int deriv_idx, double abstol, double reltol, int maxit);
RcppExport SEXP frailtySurv_phi_prime_c(SEXP kSEXP, SEXP N_dotSEXP, SEXP H_dotSEXP, SEXP thetaSEXP, SEXP frailtySEXP, SEXP deriv_idxSEXP, SEXP abstolSEXP, SEXP reltolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< double >::type H_dot(H_dotSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    Rcpp::traits::input_parameter< int >::type deriv_idx(deriv_idxSEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    __result = Rcpp::wrap(phi_prime_c(k, N_dot, H_dot, theta, frailty, deriv_idx, abstol, reltol, maxit));
    return __result;
END_RCPP
}
// phi_prime_prime_c
double phi_prime_prime_c(int k, int N_dot, double H_dot, double theta, String frailty, int deriv_idx_1, int deriv_idx_2, double abstol, double reltol, int maxit);
RcppExport SEXP frailtySurv_phi_prime_prime_c(SEXP kSEXP, SEXP N_dotSEXP, SEXP H_dotSEXP, SEXP thetaSEXP, SEXP frailtySEXP, SEXP deriv_idx_1SEXP, SEXP deriv_idx_2SEXP, SEXP abstolSEXP, SEXP reltolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< double >::type H_dot(H_dotSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    Rcpp::traits::input_parameter< int >::type deriv_idx_1(deriv_idx_1SEXP);
    Rcpp::traits::input_parameter< int >::type deriv_idx_2(deriv_idx_2SEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    __result = Rcpp::wrap(phi_prime_prime_c(k, N_dot, H_dot, theta, frailty, deriv_idx_1, deriv_idx_2, abstol, reltol, maxit));
    return __result;
END_RCPP
}
// bh
List bh(NumericVector d_, List R_star, List K_, List Y_, List N_, List N_dot, NumericVector beta, NumericVector theta, String frailty, NumericVector weights, double abstol, double reltol, int maxit);
RcppExport SEXP frailtySurv_bh(SEXP d_SEXP, SEXP R_starSEXP, SEXP K_SEXP, SEXP Y_SEXP, SEXP N_SEXP, SEXP N_dotSEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP frailtySEXP, SEXP weightsSEXP, SEXP abstolSEXP, SEXP reltolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type d_(d_SEXP);
    Rcpp::traits::input_parameter< List >::type R_star(R_starSEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type Y_(Y_SEXP);
    Rcpp::traits::input_parameter< List >::type N_(N_SEXP);
    Rcpp::traits::input_parameter< List >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    __result = Rcpp::wrap(bh(d_, R_star, K_, Y_, N_, N_dot, beta, theta, frailty, weights, abstol, reltol, maxit));
    return __result;
END_RCPP
}
// loglikelihood
NumericVector loglikelihood(List X_, List K_, List I_, List phi_1_, NumericVector lambda, NumericVector beta);
RcppExport SEXP frailtySurv_loglikelihood(SEXP X_SEXP, SEXP K_SEXP, SEXP I_SEXP, SEXP phi_1_SEXP, SEXP lambdaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type I_(I_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_1_(phi_1_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    __result = Rcpp::wrap(loglikelihood(X_, K_, I_, phi_1_, lambda, beta));
    return __result;
END_RCPP
}
// xi_beta
NumericVector xi_beta(List X_, List I_, List H_, List psi_, int r);
RcppExport SEXP frailtySurv_xi_beta(SEXP X_SEXP, SEXP I_SEXP, SEXP H_SEXP, SEXP psi_SEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type I_(I_SEXP);
    Rcpp::traits::input_parameter< List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< List >::type psi_(psi_SEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    __result = Rcpp::wrap(xi_beta(X_, I_, H_, psi_, r));
    return __result;
END_RCPP
}
// xi_theta
NumericVector xi_theta(List phi_1_, List phi_prime_1_, int r);
RcppExport SEXP frailtySurv_xi_theta(SEXP phi_1_SEXP, SEXP phi_prime_1_SEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type phi_1_(phi_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_prime_1_(phi_prime_1_SEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    __result = Rcpp::wrap(xi_theta(phi_1_, phi_prime_1_, r));
    return __result;
END_RCPP
}
// phi_k
List phi_k(int s, List N_dot_, List H_dot_, NumericVector theta, String frailty, double abstol, double reltol, int maxit);
RcppExport SEXP frailtySurv_phi_k(SEXP sSEXP, SEXP N_dot_SEXP, SEXP H_dot_SEXP, SEXP thetaSEXP, SEXP frailtySEXP, SEXP abstolSEXP, SEXP reltolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< List >::type N_dot_(N_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type H_dot_(H_dot_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    __result = Rcpp::wrap(phi_k(s, N_dot_, H_dot_, theta, frailty, abstol, reltol, maxit));
    return __result;
END_RCPP
}
// phi_prime_k
List phi_prime_k(int s, int theta_idx, List N_dot_, List H_dot_, NumericVector theta, String frailty, double abstol, double reltol, int maxit);
RcppExport SEXP frailtySurv_phi_prime_k(SEXP sSEXP, SEXP theta_idxSEXP, SEXP N_dot_SEXP, SEXP H_dot_SEXP, SEXP thetaSEXP, SEXP frailtySEXP, SEXP abstolSEXP, SEXP reltolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< int >::type theta_idx(theta_idxSEXP);
    Rcpp::traits::input_parameter< List >::type N_dot_(N_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type H_dot_(H_dot_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    __result = Rcpp::wrap(phi_prime_k(s, theta_idx, N_dot_, H_dot_, theta, frailty, abstol, reltol, maxit));
    return __result;
END_RCPP
}
// phi_prime_prime_k
List phi_prime_prime_k(int s, int theta_idx_1, int theta_idx_2, List N_dot_, List H_dot_, NumericVector theta, String frailty, int kstart, double abstol, double reltol, int maxit);
RcppExport SEXP frailtySurv_phi_prime_prime_k(SEXP sSEXP, SEXP theta_idx_1SEXP, SEXP theta_idx_2SEXP, SEXP N_dot_SEXP, SEXP H_dot_SEXP, SEXP thetaSEXP, SEXP frailtySEXP, SEXP kstartSEXP, SEXP abstolSEXP, SEXP reltolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< int >::type theta_idx_1(theta_idx_1SEXP);
    Rcpp::traits::input_parameter< int >::type theta_idx_2(theta_idx_2SEXP);
    Rcpp::traits::input_parameter< List >::type N_dot_(N_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type H_dot_(H_dot_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    Rcpp::traits::input_parameter< int >::type kstart(kstartSEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    __result = Rcpp::wrap(phi_prime_prime_k(s, theta_idx_1, theta_idx_2, N_dot_, H_dot_, theta, frailty, kstart, abstol, reltol, maxit));
    return __result;
END_RCPP
}
// dH_dbeta
List dH_dbeta(int s, NumericVector d_, List X_, List K_, List R_, List R_dot_, List R_star, List phi_1_, List phi_2_, List phi_3_, NumericVector Lambda, NumericVector lambda, NumericVector beta, NumericVector theta, String frailty);
RcppExport SEXP frailtySurv_dH_dbeta(SEXP sSEXP, SEXP d_SEXP, SEXP X_SEXP, SEXP K_SEXP, SEXP R_SEXP, SEXP R_dot_SEXP, SEXP R_starSEXP, SEXP phi_1_SEXP, SEXP phi_2_SEXP, SEXP phi_3_SEXP, SEXP LambdaSEXP, SEXP lambdaSEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type d_(d_SEXP);
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type R_(R_SEXP);
    Rcpp::traits::input_parameter< List >::type R_dot_(R_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type R_star(R_starSEXP);
    Rcpp::traits::input_parameter< List >::type phi_1_(phi_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_2_(phi_2_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_3_(phi_3_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(dH_dbeta(s, d_, X_, K_, R_, R_dot_, R_star, phi_1_, phi_2_, phi_3_, Lambda, lambda, beta, theta, frailty));
    return __result;
END_RCPP
}
// dH_dtheta
List dH_dtheta(NumericVector d_, List X_, List K_, List R_, List R_dot_, List R_star, List phi_1_, List phi_2_, List phi_3_, List phi_prime_1_, List phi_prime_2_, NumericVector Lambda, NumericVector lambda, NumericVector beta);
RcppExport SEXP frailtySurv_dH_dtheta(SEXP d_SEXP, SEXP X_SEXP, SEXP K_SEXP, SEXP R_SEXP, SEXP R_dot_SEXP, SEXP R_starSEXP, SEXP phi_1_SEXP, SEXP phi_2_SEXP, SEXP phi_3_SEXP, SEXP phi_prime_1_SEXP, SEXP phi_prime_2_SEXP, SEXP LambdaSEXP, SEXP lambdaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type d_(d_SEXP);
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type R_(R_SEXP);
    Rcpp::traits::input_parameter< List >::type R_dot_(R_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type R_star(R_starSEXP);
    Rcpp::traits::input_parameter< List >::type phi_1_(phi_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_2_(phi_2_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_3_(phi_3_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_prime_1_(phi_prime_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_prime_2_(phi_prime_2_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    __result = Rcpp::wrap(dH_dtheta(d_, X_, K_, R_, R_dot_, R_star, phi_1_, phi_2_, phi_3_, phi_prime_1_, phi_prime_2_, Lambda, lambda, beta));
    return __result;
END_RCPP
}
// jacobian_beta_beta
double jacobian_beta_beta(int l, List X_, List K_, List H_, List phi_1_, List phi_2_, List phi_3_, List dH_dbeta_, List dH_dot_dbeta_);
RcppExport SEXP frailtySurv_jacobian_beta_beta(SEXP lSEXP, SEXP X_SEXP, SEXP K_SEXP, SEXP H_SEXP, SEXP phi_1_SEXP, SEXP phi_2_SEXP, SEXP phi_3_SEXP, SEXP dH_dbeta_SEXP, SEXP dH_dot_dbeta_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_1_(phi_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_2_(phi_2_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_3_(phi_3_SEXP);
    Rcpp::traits::input_parameter< List >::type dH_dbeta_(dH_dbeta_SEXP);
    Rcpp::traits::input_parameter< List >::type dH_dot_dbeta_(dH_dot_dbeta_SEXP);
    __result = Rcpp::wrap(jacobian_beta_beta(l, X_, K_, H_, phi_1_, phi_2_, phi_3_, dH_dbeta_, dH_dot_dbeta_));
    return __result;
END_RCPP
}
// jacobian_beta_theta
double jacobian_beta_theta(int l, List X_, List K_, List H_, List phi_1_, List phi_2_, List phi_3_, List phi_prime_1_, List phi_prime_2_, List dH_dtheta_, List dH_dot_dtheta_);
RcppExport SEXP frailtySurv_jacobian_beta_theta(SEXP lSEXP, SEXP X_SEXP, SEXP K_SEXP, SEXP H_SEXP, SEXP phi_1_SEXP, SEXP phi_2_SEXP, SEXP phi_3_SEXP, SEXP phi_prime_1_SEXP, SEXP phi_prime_2_SEXP, SEXP dH_dtheta_SEXP, SEXP dH_dot_dtheta_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_1_(phi_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_2_(phi_2_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_3_(phi_3_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_prime_1_(phi_prime_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_prime_2_(phi_prime_2_SEXP);
    Rcpp::traits::input_parameter< List >::type dH_dtheta_(dH_dtheta_SEXP);
    Rcpp::traits::input_parameter< List >::type dH_dot_dtheta_(dH_dot_dtheta_SEXP);
    __result = Rcpp::wrap(jacobian_beta_theta(l, X_, K_, H_, phi_1_, phi_2_, phi_3_, phi_prime_1_, phi_prime_2_, dH_dtheta_, dH_dot_dtheta_));
    return __result;
END_RCPP
}
// jacobian_theta_beta
double jacobian_theta_beta(List phi_1_, List phi_2_, List phi_prime_1_, List phi_prime_2_, List dH_dot_dbeta_);
RcppExport SEXP frailtySurv_jacobian_theta_beta(SEXP phi_1_SEXP, SEXP phi_2_SEXP, SEXP phi_prime_1_SEXP, SEXP phi_prime_2_SEXP, SEXP dH_dot_dbeta_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type phi_1_(phi_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_2_(phi_2_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_prime_1_(phi_prime_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_prime_2_(phi_prime_2_SEXP);
    Rcpp::traits::input_parameter< List >::type dH_dot_dbeta_(dH_dot_dbeta_SEXP);
    __result = Rcpp::wrap(jacobian_theta_beta(phi_1_, phi_2_, phi_prime_1_, phi_prime_2_, dH_dot_dbeta_));
    return __result;
END_RCPP
}
// jacobian_theta_theta
double jacobian_theta_theta(List phi_1_, List phi_2_, List phi_prime_1_, List phi_prime_2_, List phi_prime_prime_1_, List dH_dot_dtheta_);
RcppExport SEXP frailtySurv_jacobian_theta_theta(SEXP phi_1_SEXP, SEXP phi_2_SEXP, SEXP phi_prime_1_SEXP, SEXP phi_prime_2_SEXP, SEXP phi_prime_prime_1_SEXP, SEXP dH_dot_dtheta_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type phi_1_(phi_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_2_(phi_2_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_prime_1_(phi_prime_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_prime_2_(phi_prime_2_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_prime_prime_1_(phi_prime_prime_1_SEXP);
    Rcpp::traits::input_parameter< List >::type dH_dot_dtheta_(dH_dot_dtheta_SEXP);
    __result = Rcpp::wrap(jacobian_theta_theta(phi_1_, phi_2_, phi_prime_1_, phi_prime_2_, phi_prime_prime_1_, dH_dot_dtheta_));
    return __result;
END_RCPP
}
// Q_beta
List Q_beta(List X_, List K_, List H_, List R_star, List phi_1_, List phi_2_, List phi_3_, int r);
RcppExport SEXP frailtySurv_Q_beta(SEXP X_SEXP, SEXP K_SEXP, SEXP H_SEXP, SEXP R_starSEXP, SEXP phi_1_SEXP, SEXP phi_2_SEXP, SEXP phi_3_SEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< List >::type R_star(R_starSEXP);
    Rcpp::traits::input_parameter< List >::type phi_1_(phi_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_2_(phi_2_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_3_(phi_3_SEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    __result = Rcpp::wrap(Q_beta(X_, K_, H_, R_star, phi_1_, phi_2_, phi_3_, r));
    return __result;
END_RCPP
}
// Q_theta
List Q_theta(List H_, List R_star, List phi_1_, List phi_2_, List phi_prime_1_, List phi_prime_2_);
RcppExport SEXP frailtySurv_Q_theta(SEXP H_SEXP, SEXP R_starSEXP, SEXP phi_1_SEXP, SEXP phi_2_SEXP, SEXP phi_prime_1_SEXP, SEXP phi_prime_2_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< List >::type R_star(R_starSEXP);
    Rcpp::traits::input_parameter< List >::type phi_1_(phi_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_2_(phi_2_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_prime_1_(phi_prime_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_prime_2_(phi_prime_2_SEXP);
    __result = Rcpp::wrap(Q_theta(H_, R_star, phi_1_, phi_2_, phi_prime_1_, phi_prime_2_));
    return __result;
END_RCPP
}
// Ycal
NumericVector Ycal(List X_, List R_star, List Y_, List psi_, NumericVector beta);
RcppExport SEXP frailtySurv_Ycal(SEXP X_SEXP, SEXP R_starSEXP, SEXP Y_SEXP, SEXP psi_SEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type R_star(R_starSEXP);
    Rcpp::traits::input_parameter< List >::type Y_(Y_SEXP);
    Rcpp::traits::input_parameter< List >::type psi_(psi_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    __result = Rcpp::wrap(Ycal(X_, R_star, Y_, psi_, beta));
    return __result;
END_RCPP
}
// eta
List eta(List phi_1_, List phi_2_, List phi_3_);
RcppExport SEXP frailtySurv_eta(SEXP phi_1_SEXP, SEXP phi_2_SEXP, SEXP phi_3_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type phi_1_(phi_1_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_2_(phi_2_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_3_(phi_3_SEXP);
    __result = Rcpp::wrap(eta(phi_1_, phi_2_, phi_3_));
    return __result;
END_RCPP
}
// Upsilon
NumericVector Upsilon(List X_, List R_star, List K_, List R_dot_, List eta_, NumericVector Ycal_, NumericVector beta);
RcppExport SEXP frailtySurv_Upsilon(SEXP X_SEXP, SEXP R_starSEXP, SEXP K_SEXP, SEXP R_dot_SEXP, SEXP eta_SEXP, SEXP Ycal_SEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type R_star(R_starSEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type R_dot_(R_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type eta_(eta_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Ycal_(Ycal_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    __result = Rcpp::wrap(Upsilon(X_, R_star, K_, R_dot_, eta_, Ycal_, beta));
    return __result;
END_RCPP
}
// Omega
List Omega(List X_, List R_star, List N_, List R_dot_, List eta_, NumericVector Ycal_, NumericVector beta);
RcppExport SEXP frailtySurv_Omega(SEXP X_SEXP, SEXP R_starSEXP, SEXP N_SEXP, SEXP R_dot_SEXP, SEXP eta_SEXP, SEXP Ycal_SEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type R_star(R_starSEXP);
    Rcpp::traits::input_parameter< List >::type N_(N_SEXP);
    Rcpp::traits::input_parameter< List >::type R_dot_(R_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type eta_(eta_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Ycal_(Ycal_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    __result = Rcpp::wrap(Omega(X_, R_star, N_, R_dot_, eta_, Ycal_, beta));
    return __result;
END_RCPP
}
// p_hat
NumericVector p_hat(List I_, NumericVector Upsilon_, List Omega_, List N_tilde_);
RcppExport SEXP frailtySurv_p_hat(SEXP I_SEXP, SEXP Upsilon_SEXP, SEXP Omega_SEXP, SEXP N_tilde_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type I_(I_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Upsilon_(Upsilon_SEXP);
    Rcpp::traits::input_parameter< List >::type Omega_(Omega_SEXP);
    Rcpp::traits::input_parameter< List >::type N_tilde_(N_tilde_SEXP);
    __result = Rcpp::wrap(p_hat(I_, Upsilon_, Omega_, N_tilde_));
    return __result;
END_RCPP
}
// pi_r
NumericVector pi_r(List Q_, List N_tilde_, NumericVector p_hat);
RcppExport SEXP frailtySurv_pi_r(SEXP Q_SEXP, SEXP N_tilde_SEXP, SEXP p_hatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type Q_(Q_SEXP);
    Rcpp::traits::input_parameter< List >::type N_tilde_(N_tilde_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p_hat(p_hatSEXP);
    __result = Rcpp::wrap(pi_r(Q_, N_tilde_, p_hat));
    return __result;
END_RCPP
}
// G_rl
double G_rl(NumericVector pi_r, NumericVector pi_l, NumericVector p_hat, NumericVector Ycal_, List N_);
RcppExport SEXP frailtySurv_G_rl(SEXP pi_rSEXP, SEXP pi_lSEXP, SEXP p_hatSEXP, SEXP Ycal_SEXP, SEXP N_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type pi_r(pi_rSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi_l(pi_lSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p_hat(p_hatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Ycal_(Ycal_SEXP);
    Rcpp::traits::input_parameter< List >::type N_(N_SEXP);
    __result = Rcpp::wrap(G_rl(pi_r, pi_l, p_hat, Ycal_, N_));
    return __result;
END_RCPP
}
// M_hat
List M_hat(List X_, List R_star, List N_, List Y_, List psi_, NumericVector beta, NumericVector Lambda);
RcppExport SEXP frailtySurv_M_hat(SEXP X_SEXP, SEXP R_starSEXP, SEXP N_SEXP, SEXP Y_SEXP, SEXP psi_SEXP, SEXP betaSEXP, SEXP LambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type R_star(R_starSEXP);
    Rcpp::traits::input_parameter< List >::type N_(N_SEXP);
    Rcpp::traits::input_parameter< List >::type Y_(Y_SEXP);
    Rcpp::traits::input_parameter< List >::type psi_(psi_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Lambda(LambdaSEXP);
    __result = Rcpp::wrap(M_hat(X_, R_star, N_, Y_, psi_, beta, Lambda));
    return __result;
END_RCPP
}
// u_star
NumericMatrix u_star(List pi_, NumericVector p_hat, NumericVector Ycal_, List M_hat_);
RcppExport SEXP frailtySurv_u_star(SEXP pi_SEXP, SEXP p_hatSEXP, SEXP Ycal_SEXP, SEXP M_hat_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type pi_(pi_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p_hat(p_hatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Ycal_(Ycal_SEXP);
    Rcpp::traits::input_parameter< List >::type M_hat_(M_hat_SEXP);
    __result = Rcpp::wrap(u_star(pi_, p_hat, Ycal_, M_hat_));
    return __result;
END_RCPP
}
