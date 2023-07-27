// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_NAV_VI
#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define MIRYOKU_CLIPBOARD_MAC

#define XXX &none

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

// Direct custom layer access
/* #define MIRYOKU_LAYOUTMAPPING_TECHNIKABLE(\ */
/* K00, K01, K02, K03, K04,                         K05, K06, K07, K08, K09, \ */
/* K10, K11, K12, K13, K14,                         K15, K16, K17, K18, K19, \ */
/* K20, K21, K22, K23, K24,                         K25, K26, K27, K28, K29, \ */
/* N30, N31, K32, K33, K34,                         K35, K36, K37, N38, N39 \ */
/* ) \ */
/* K00  K01  K02  K03  K04  XXX  &to U_GAME K05  K06  K07  K08  K09 \ */
/* K10  K11  K12  K13  K14  XXX  XXX        K15  K16  K17  K18  K19 \ */
/* K20  K21  K22  K23  K24  XXX  &to U_DONE K25  K26  K27  K28  K29 \ */
/*           K32  K33  K34  XXX  &to U_BASE K35  K36  K37 */

// nodefree configs
ZMK_BEHAVIOR(shift_space, hold_tap,
    tapping-term-ms = <280>;
    quick-tap-ms = <175>;                // repeat on tap-into-hold
    global-quick-tap;         // requires PR #1387
    bindings = <&sk>, <&kp>;
)

ZMK_BEHAVIOR(rcmd_back_fwd, hold_tap,
    tapping-term-ms = <280>;
    quick-tap-ms = <175>;                // repeat on tap-into-hold
    global-quick-tap;         // requires PR #1387
    bindings = <&kp>, <&back_fwd>;
)

ZMK_BEHAVIOR(esc_tilde, tap_dance,
    tapping-term-ms = <250>;
    bindings = <&kp ESC>, <&kp GRAVE>, <&kp TILDE>;
)

/* ZMK_BEHAVIOR(left_word, tap_dance, */
/*     tapping-term-ms = <300>; */
/*     bindings = <&kp LEFT>, <&kp LA(LEFT)>, <&kp LG(LEFT)>; */
/* ) */

/* ZMK_BEHAVIOR(right_word, tap_dance, */
/*     tapping-term-ms = <300>; */
/*     bindings = <&kp RIGHT>, <&kp LA(RIGHT)>, <&kp LG(RIGHT)>; */
/* ) */

/* ZMK_BEHAVIOR(down_word, tap_dance, */
/*     tapping-term-ms = <300>; */
/*     bindings = <&kp DOWN>, <&kp LA(DOWN)>; */
/* ) */

/* ZMK_BEHAVIOR(up_word, tap_dance, */
/*     tapping-term-ms = <300>; */
/*     bindings = <&kp UP>, <&kp LA(UP)>; */
/* ) */

ZMK_BEHAVIOR(tap_dance_0, tap_dance,
    tapping-term-ms = <300>;
    bindings =  <&kp F12>, <&kp LG(LBKT)>, <&kp LG(PIPE)>;
)

ZMK_BEHAVIOR(back_fwd, tap_dance,
    tapping-term-ms = <175>;
    bindings = <&kp LG(LBKT)>, <&kp LG(RBKT)>;
)

#define MIRYOKU_LAYOUTMAPPING_HILLSIDE52(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
&esc_tilde  K00  K01  K02  K03  K04                                                         K05  K06           K07  K08  K09  XXX  \
XXX         K10  K11  K12  K13  K14                                                         K15  K16           K17  K18  K19  XXX  \
XXX         K20  K21  K22  K23  K24  &rcmd_back_fwd RCMD 0               &kp LS(LG(SPACE))  K25  K26           K27  K28  K29  XXX  \
XXX         XXX  XXX       XXX  K32  U_LT(U_NAV, &shift_space)                    K34     U_LT(U_NUM, BSPC)  U_LT(U_SYM, RET)                K37  &tap_dance_0  XXX  XXX  XXX  \

