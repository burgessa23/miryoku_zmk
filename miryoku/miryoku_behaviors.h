// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once



#define U_MT(MOD, TAP) &u_mt MOD TAP
#define U_HML(MOD, TAP) &u_hml MOD TAP
#define U_HMR(MOD, TAP) &u_hmr MOD TAP
#define U_BAK_FWD_PIPE &u_back_fwd
#define U_LT(LAYER, TAP) &u_lt LAYER TAP
#define U_RAY &u_ray
#define U_RAY_WRAP(MOD, TAP) &ray_wrap MOD 0
#define U_ESC_CAPS_WRAP(MOD, TAP) &esc_caps_wrap MOD 0
#define U_ZOOM &u_zoom
#define U_SHFT_SPC_NAV(MOD, TAP) &s_spc 0 0 
#define U_SHFT_ESC_MEDIA(MOD, TAP) &shift_esc MOD 0
#define U_HT2(MOD, TAP) &ht2 MOD TAP
#define U_NST(MOD, TAP) &nst 0 TAP
#define AS(keycode) &as LS(keycode) keycode
#define SPNAV(MOD, TAP) &spnav 0 0


#define U_MED_CAPS_WORD(MOD, TAP) &med_caps_word MOD 0


#define U_SNS(MOD, TAP) &s_n_s MOD TAP 


#define HRM(letter, mod, tapping_time) \
    hras##letter: hras##letter { \
        compatible = "zmk,behavior-hold-tap"; \
        label = ZMK_MACRO_STRINGIFY(HOME_ROW_AS_##letter); \
        #binding-cells = <2>; \
        flavor = "balanced"; \
        tapping-term-ms = <tapping_time>; \
        quick-tap-ms = <175>; \
        bindings = <&kp>, <&kp>; \
        retro-tap; \
        retro-tap-behavior = "KEY_PRESS"; \
        retro-tap-param1 = <LS(letter)>; \
    }; 


#define HRA &hrasA LGUI A
#define HRS &hrasS LALT S
#define HRD &hrasD LCTL D
#define HRF &hrasF LSHIFT F
#define HRJ &hrasJ LSHIFT J
#define HRK &hrasK LCTL K
#define HRL &hrasL LALT L
#define HRSQT &hrasSQT LGUI SQT
