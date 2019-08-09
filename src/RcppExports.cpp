// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// somic
List somic(DataFrame soc_data, double mic_vmax, double mic_km, double kdissolution, double kdepoly, double kdeath_and_exudates, double kdesorb, double ksorb, double kmicrobial_uptake, double cue_0, double mcue, double mclay, double clay, double thickness, double sat, double max_tsmd, bool use_atsmd, double init_spm_14c_age, double init_ipm_14c_age, double init_doc_14c_age, double init_mb_14c_age, double init_mac_14c_age, double init_soc_14c_age);
RcppExport SEXP _SOMic_somic(SEXP soc_dataSEXP, SEXP mic_vmaxSEXP, SEXP mic_kmSEXP, SEXP kdissolutionSEXP, SEXP kdepolySEXP, SEXP kdeath_and_exudatesSEXP, SEXP kdesorbSEXP, SEXP ksorbSEXP, SEXP kmicrobial_uptakeSEXP, SEXP cue_0SEXP, SEXP mcueSEXP, SEXP mclaySEXP, SEXP claySEXP, SEXP thicknessSEXP, SEXP satSEXP, SEXP max_tsmdSEXP, SEXP use_atsmdSEXP, SEXP init_spm_14c_ageSEXP, SEXP init_ipm_14c_ageSEXP, SEXP init_doc_14c_ageSEXP, SEXP init_mb_14c_ageSEXP, SEXP init_mac_14c_ageSEXP, SEXP init_soc_14c_ageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type soc_data(soc_dataSEXP);
    Rcpp::traits::input_parameter< double >::type mic_vmax(mic_vmaxSEXP);
    Rcpp::traits::input_parameter< double >::type mic_km(mic_kmSEXP);
    Rcpp::traits::input_parameter< double >::type kdissolution(kdissolutionSEXP);
    Rcpp::traits::input_parameter< double >::type kdepoly(kdepolySEXP);
    Rcpp::traits::input_parameter< double >::type kdeath_and_exudates(kdeath_and_exudatesSEXP);
    Rcpp::traits::input_parameter< double >::type kdesorb(kdesorbSEXP);
    Rcpp::traits::input_parameter< double >::type ksorb(ksorbSEXP);
    Rcpp::traits::input_parameter< double >::type kmicrobial_uptake(kmicrobial_uptakeSEXP);
    Rcpp::traits::input_parameter< double >::type cue_0(cue_0SEXP);
    Rcpp::traits::input_parameter< double >::type mcue(mcueSEXP);
    Rcpp::traits::input_parameter< double >::type mclay(mclaySEXP);
    Rcpp::traits::input_parameter< double >::type clay(claySEXP);
    Rcpp::traits::input_parameter< double >::type thickness(thicknessSEXP);
    Rcpp::traits::input_parameter< double >::type sat(satSEXP);
    Rcpp::traits::input_parameter< double >::type max_tsmd(max_tsmdSEXP);
    Rcpp::traits::input_parameter< bool >::type use_atsmd(use_atsmdSEXP);
    Rcpp::traits::input_parameter< double >::type init_spm_14c_age(init_spm_14c_ageSEXP);
    Rcpp::traits::input_parameter< double >::type init_ipm_14c_age(init_ipm_14c_ageSEXP);
    Rcpp::traits::input_parameter< double >::type init_doc_14c_age(init_doc_14c_ageSEXP);
    Rcpp::traits::input_parameter< double >::type init_mb_14c_age(init_mb_14c_ageSEXP);
    Rcpp::traits::input_parameter< double >::type init_mac_14c_age(init_mac_14c_ageSEXP);
    Rcpp::traits::input_parameter< double >::type init_soc_14c_age(init_soc_14c_ageSEXP);
    rcpp_result_gen = Rcpp::wrap(somic(soc_data, mic_vmax, mic_km, kdissolution, kdepoly, kdeath_and_exudates, kdesorb, ksorb, kmicrobial_uptake, cue_0, mcue, mclay, clay, thickness, sat, max_tsmd, use_atsmd, init_spm_14c_age, init_ipm_14c_age, init_doc_14c_age, init_mb_14c_age, init_mac_14c_age, init_soc_14c_age));
    return rcpp_result_gen;
END_RCPP
}
// RothC
List RothC(DataFrame soc_data, double max_tsmd, double iom, double clay, double sat, bool use_atsmd);
RcppExport SEXP _SOMic_RothC(SEXP soc_dataSEXP, SEXP max_tsmdSEXP, SEXP iomSEXP, SEXP claySEXP, SEXP satSEXP, SEXP use_atsmdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type soc_data(soc_dataSEXP);
    Rcpp::traits::input_parameter< double >::type max_tsmd(max_tsmdSEXP);
    Rcpp::traits::input_parameter< double >::type iom(iomSEXP);
    Rcpp::traits::input_parameter< double >::type clay(claySEXP);
    Rcpp::traits::input_parameter< double >::type sat(satSEXP);
    Rcpp::traits::input_parameter< bool >::type use_atsmd(use_atsmdSEXP);
    rcpp_result_gen = Rcpp::wrap(RothC(soc_data, max_tsmd, iom, clay, sat, use_atsmd));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SOMic_somic", (DL_FUNC) &_SOMic_somic, 23},
    {"_SOMic_RothC", (DL_FUNC) &_SOMic_RothC, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_SOMic(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
