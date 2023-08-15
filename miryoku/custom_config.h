// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_EXTRA_COLEMAKDH
/* #define MIRYOKU_NAV_VI */
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

#define MIRYOKU_LAYOUTMAPPING_HILLSIDE52(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX  K00     K01          K02  K03               K04                                            K05  K06               K07  K08           K09          XXX  \
XXX  K10     K11          K12  K13               K14                                            K15  K16               K17  K18           K19          XXX  \
XXX  K20     K21          K22  K23               K24  U_HML(RCMD, LG(PIPE))              U_RAY  K25  K26               K27  K28           K29          XXX  \
XXX  U_ZOOM  &kp LA(TAB)  K32  U_HMR(LCMD, F11)  K33  K34                                K35    K36  U_HMR(RALT, F12)  K37  &kp LG(LBKT)  &kp LG(RBKT) XXX  \

