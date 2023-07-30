// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
/* #include "../zmk-nodefree-config/helper.h" */
/* #include "../zmk-nodefree-config/keypos_def/keypos_52keys_hillside.h" */


/* #define KEYS_L LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LB5 // left-hand keys */
/* #define KEYS_R RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RB5 // right-hand keys */
/* #define THUMBS LH3 LH2 LH1 LH0 RH0 RH1 RH2 RH3                                      // thumb keys */



#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_NAV_VI
#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define MIRYOKU_CLIPBOARD_MAC

#define XXX &none
#undef COMBO_HOOK
#define COMBO_HOOK global-quick-tap-ms = <100>;
#define QUICK_TAP_MS 175

#define COMBO_TERM_FAST 20
#define COMBO_TERM_SLOW 45


&pinctrl {
    spi0_default: spi0_default {
        group1 {
            psels = <NRF_PSEL(SPIM_SCK, 1, 2)>,
                <NRF_PSEL(SPIM_MOSI, 1, 7)>,
                <NRF_PSEL(SPIM_MISO, 0, 19)>; /* GPIO0 19 is not broken on a nice!nano.*/
        };
    };
    spi0_sleep: spi0_sleep {
        group1 {
            psels = <NRF_PSEL(SPIM_SCK, 1, 2)>,
                <NRF_PSEL(SPIM_MOSI, 1, 7)>,
                <NRF_PSEL(SPIM_MISO, 0, 19)>; /* GPIO0 19 is not broken on a nice!nano.*/
            low-power-enable;
        };
    };
};

&nice_view_spi {
  cs-gpios = <&pro_micro 0 GPIO_ACTIVE_HIGH>;
};

nice_view_spi: &spi0 {
    compatible = "nordic,nrf-spim";
    pinctrl-0 = <&spi0_default>;
    pinctrl-1 = <&spi0_sleep>;
    pinctrl-names = "default", "sleep";
    cs-gpios = <&gpio1 1 GPIO_ACTIVE_HIGH>;
};


// nodefree configs
/* ZMK_BEHAVIOR(shift_space, hold_tap, */
/*     tapping-term-ms = <280>; */
/*     quick-tap-ms = <175>;                // repeat on tap-into-hold */
/*     global-quick-tap;         // requires PR #1387 */
/*     bindings = <&sk>, <&kp>; */
/* ) */

/* ZMK_BEHAVIOR(rcmd_back_fwd, hold_tap, */
/*     tapping-term-ms = <280>; */
/*     quick-tap-ms = <175>;                // repeat on tap-into-hold */
/*     global-quick-tap;         // requires PR #1387 */
/*     bindings = <&kp>, <&back_fwd>; */
/* ) */

/* ZMK_BEHAVIOR(hml, hold_tap, */
/*     flavor = "balanced"; */
/*     tapping-term-ms = <280>; */
/*     quick-tap-ms = <175>;                // repeat on tap-into-hold */
/*     global-quick-tap-ms = <150>;         // requires PR #1387 */
/*     bindings = <&kp>, <&kp>; */
/*     hold-trigger-key-positions = <KEYS_R THUMBS>; */
/*     hold-trigger-on-release;             // delay positional check until key-release */
/* ) */

/* /1* right-hand HRMs *1/ */
/* ZMK_BEHAVIOR(hmr, hold_tap, */
/*     flavor = "balanced"; */
/*     tapping-term-ms = <280>; */
/*     quick-tap-ms = <175>;                // repeat on tap-into-hold */
/*     global-quick-tap-ms = <150>;         // requires PR #1387 */
/*     bindings = <&kp>, <&kp>; */
/*     hold-trigger-key-positions = <KEYS_L THUMBS>; */
/*     hold-trigger-on-release;             // delay positional check until key-release */
/* ) */
#define MIRYOKU_LAYOUTMAPPING_HILLSIDE52(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
&kp ESC  K00  K01  K02  K03  K04                                                         K05  K06           K07  K08  K09  &kp BSPC  \
&kp LCTRL         K10  K11  K12  K13  K14                                                         K15  K16           K17  K18  K19  &kp SEMI  \
&kp LSHFT        K20  K21  K22  K23  K24  &kp  &hml RCMD &back_fwd              &kp LS(LG(SPACE))  K25  K26           K27  K28  K29  &kp RSHFT  \
&kp LG(F6)  &kp LS(LG(A))     &kp LA(C)  &kp F11   K32  K33                    K34     K35  K36                K37  &kp F12  &kp LG(LBKT) &kp LGUI &kp LG(RBKT) \

