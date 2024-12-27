// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once



#define U_MT_Z(MOD, TAP) &u_mt_z MOD TAP
#define U_MT(MOD, TAP) &u_mt MOD TAP
#define U_HML(MOD, TAP) &u_hml MOD TAP
#define U_HMR(MOD, TAP) &u_hmr MOD TAP
#define U_BAK_FWD_PIPE &u_back_fwd
#define U_LT(LAYER, TAP) &u_lt LAYER TAP
#define U_LTNUM(LAYER, TAP) &u_ltnum LAYER TAP

#define U_SMART_NUM &smart_num U_NUM 0
#define U_CLN_FUN &cln_fun U_FUN 0
#define U_SMART_SPACE_NAV &smart_space_nav U_NAV 0
#define U_SMART_TAB_MOUSE &smart_tab_mouse U_MOUSE 0
#define U_SMART_ENTER_NUM &smart_enter_num U_NUM 0
#define U_SMART_BKSPACE_SYM &smart_bkspace_sym U_SYM 0

#define U_ALT_F12 &alt_f12

#define U_COPY_SWAP(MOD, TAP) &copy_swap MOD TAP
#define ESC_SWITCH_COPY &esc_switch_copy RG(LC(LALT)) 0
#define GUI_RAY_SWITCH &gui_ray_switch LGUI 0

// #define U_WORDS &nc_word
#define U_RAY &u_ray
#define U_BP &u_back_pipe
#define U_FP &u_fwd_pipe
#define U_RAY_DANCE(MOD, TAP) &ray_dance_wrap MOD 0
#define U_RAY_WRAP(MOD, TAP) &ray_wrap MOD TAP
#define U_BP_WRAP(MOD) &bp_wrap MOD 0
#define U_FP_WRAP(MOD) &fp_wrap MOD 0
#define U_ESC_CAPS_WRAP(MOD, TAP) &esc_caps_wrap MOD 0
#define U_ZOOM &u_zoom
#define U_SHFT_SPC_NAV(MOD, TAP) &s_spc 0 0 
#define U_SHFT_ESC_MEDIA(MOD, TAP) &shift_esc MOD 0
#define U_HT2(MOD, TAP) &ht2 MOD TAP
// #define U_NST(MOD, TAP) &nst 0 TAP
// #define SPNAV(MOD, TAP) &spnav 0 0

#define U_SHFT_CAPS(MOD, TAP) &shft_caps_word MOD TAP
#define U_SHFT_NUM(MOD) &shft_num_word MOD 0
#define U_COL_SEMI &col_semi
#define U_ESC_CANCEL &esc_cancel
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
#define CLN_FN(LAYER, TAP) &clnasFN LAYER TAP

// #define ASN_Q &asn_q LS(Q) 0
// #define ASN_W &asn_w LS(W) 0
// #define ASN_E &asn_e LS(E) 0
// #define ASN_R &asn_r LS(R) 0
// #define ASN_T &asn_t LS(T) 0
// #define ASN_Y &asn_y LS(Y) 0
// #define ASN_U &asn_u LS(U) 0
// #define ASN_I &asn_i LS(I) 0
// #define ASN_O &asn_o LS(O) 0
// #define ASN_P &asn_p LS(P) 0

#define ASN_Q &asn N1 Q
#define ASN_W &asn N7 W
#define ASN_E &asn N8 E
#define ASN_R &asn N9 R
#define ASN_T &asn N5 T
#define ASN_Y &asn N6 Y
#define ASN_U &asn N7 U
#define ASN_I &asn N8 I
#define ASN_O &asn N9 O
#define ASN_P &asn N0 P
#define ASN_X &asn N1 X
#define ASN_C &asn N2 C
#define ASN_V &asn N3 V
#define ASN_T &asn N5 T
#define ASN_F &asn N6 F


#define U_SWAPR &swapper
#define U_PAR &parens
#define U_LEFT &u_left
#define U_RIGHT &u_right

#define U_H_H &u_h_h
#define U_O_O &u_o_o
#define U_T_T &u_t_t
#define U_P_P &u_p_p
#define U_N_N &u_n_n
#define U_S_S &u_s_s

