// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once



#define U_MT(MOD, TAP) &u_mt MOD TAP
#define U_HML(MOD, TAP) &u_hml MOD TAP
#define U_HMR(MOD, TAP) &u_hmr MOD TAP
#define U_BAK_FWD_PIPE &u_back_fwd
#define U_LT(LAYER, TAP) &u_lt LAYER TAP
#define U_LTNUM(LAYER, TAP) &u_ltnum LAYER TAP
#define U_RAY &u_ray
#define U_RAY_WRAP(MOD) &ray_wrap MOD 0
#define U_BF_WRAP(MOD) &bf_wrap MOD 0
#define U_ESC_CAPS_WRAP(MOD, TAP) &esc_caps_wrap MOD 0
#define U_ZOOM &u_zoom
#define U_SHFT_SPC_NAV(MOD, TAP) &s_spc 0 0 
#define U_SHFT_ESC_MEDIA(MOD, TAP) &shift_esc MOD 0
#define U_HT2(MOD, TAP) &ht2 MOD TAP
#define U_NST(MOD, TAP) &nst 0 TAP
#define SPNAV(MOD, TAP) &spnav 0 0


#define U_SHFT_CAPS(MOD) &shft_caps_word MOD 0
#define U_SHFT_NUM(MOD) &shft_num_word MOD 0
#define U_COL_SEMI &col_semi

#define U_SNS(MOD, TAP) &s_n_s MOD TAP 

#define AS(keycode) &as LS(keycode) keycode
#define HRA(MOD, TAP) &hrasA MOD TAP
#define HRS(MOD, TAP) &hrasS MOD TAP
#define HRD(MOD, TAP) &hrasD MOD TAP
#define HRF(MOD, TAP) &hrasF MOD TAP
#define HRJ(MOD, TAP) &hrasJ MOD TAP
#define HRK(MOD, TAP) &hrasK MOD TAP
#define HRL(MOD, TAP) &hrasL MOD TAP
#define HRSQT(MOD, TAP) &hrasSQT MOD TAP

#define ASN_Q &asn_q LS(Q) TAP
#define ASN_W &asn_w LS(W) TAP
#define ASN_E &asn_e LS(E) TAP
#define ASN_R &asn_r LS(R) TAP
#define ASN_T &asn_t LS(T) TAP
#define ASN_Y &asn_y LS(Y) TAP
#define ASN_U &asn_u LS(U) TAP
#define ASN_I &asn_i LS(I) TAP
#define ASN_O &asn_o LS(O) TAP
#define ASN_P &asn_p LS(P) TAP

