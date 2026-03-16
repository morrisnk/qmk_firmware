#pragma once
#include "morrisnk.h"

#define QWERTY  KC_QWERTY

#define KC_CUT  LGUI(KC_X)

// Non-sane shortcuts for software macros or keybindings
#define MACRO_1 ALL_T(KC_F12)
#define MACRO_2 ALL_T(KC_F13)
#define MACRO_3 ALL_T(KC_F14)
#define MACRO_4 ALL_T(KC_F15)

#define MACRO_5 ALL_T(KC_F16)
#define MACRO_6 ALL_T(KC_F17)
#define MACRO_7 ALL_T(KC_F18)
#define MACRO_8 ALL_T(KC_F19)


#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define OS_MACS OSL(_MACROS)
#define MO_CODE MO(_CODING)
#define MO_SYMB MO(_SYMBOLS)

#define CTL_ESC CTL_T(KC_ESC)
#define CTL_ENT CTL_T(KC_ENT)
#define SFT_ENT SFT_T(KC_ENT)
#define CMD_ESC GUI_T(KC_ESC)
#define CMD_ENT GUI_T(KC_ENT)

#define GUI_L LT(_GUI, KC_UP)
#define GUI_R LT(_GUI, KC_RCBR)
#define GUI_MAC_L LT(_GUI_MAC, KC_UP)
#define GUI_MAC_R LT(_GUI_MAC, KC_RCBR)
#define CTL_L CTL_T(LCTL(KC_S))
#define CTL_R CTL_T(KC_RCBR)
#define SYM_ENT LT(_SYMBOLS, KC_ENT)

//#define NAV_BSP LT(_NAV, KC_BSPC)
//#define NAV_SPC LT(_NAV, KC_SPC)

#define ALT_L ALT_T(LCTL(KC_S))
#define CTL_SAVE CTL_T(KC_F13)
#define ALT_R ALT_T(KC_LCBR)
#define WIN_L GUI_T(KC_RBRC)
#define WIN_R GUI_T(KC_LCBR)
#define CTL_1 LCTL(KC_1)

// Dashes (macOS)
#define KC_NDSH LALT(KC_MINS)
#define KC_MDSH S(LALT(KC_MINS))

#define KC_CAD LALT(LCTL(KC_DEL))
#define KC_TYPE LCTL(LSFT(KC_T))
#define KC_REFA LALT(LSFT(KC_R))
#define KC_GOTO LCTL(KC_P)

// Window manager keys
#define WM_FULL LALT(LGUI(KC_F))
#define WM_NEXT LCTL(LALT(LGUI(KC_RGHT)))
#define WM_PREV LCTL(LALT(LGUI(KC_LEFT)))
#define WM_NW   LCTL(LGUI(KC_LEFT))
#define WM_N    LALT(LGUI(KC_UP))
#define WM_NE   LCTL(LGUI(KC_RGHT))
#define WM_E    LALT(LGUI(KC_RGHT))
#define WM_SE   S(LCTL(LGUI(KC_RGHT)))
#define WM_S    LALT(LGUI(KC_DOWN))
#define WM_SW   S(LCTL(LGUI(KC_LEFT)))
#define WM_W    LALT(LGUI(KC_LEFT))
#define WM_CNTR LALT(LGUI(KC_C))
#define WM_UNDO LCTL(KC_Z)
#define WM_CUT  LCTL(KC_X)
#define WM_COPY LCTL(KC_C)
#define WM_PSTE LCTL(KC_V)

// Window manager keys (Mac)
#define WM_MAC_UNDO LGUI(KC_Z)
#define WM_MAC_CUT  LGUI(KC_X)
#define WM_MAC_COPY LGUI(KC_C)
#define WM_MAC_PSTE LGUI(KC_V)

// Unify backlight controls
#if defined(RGB_MATRIX_ENABLE) || defined(RGBLIGHT_ENABLE)
#define LIT_TOG RGB_TOG
#define LIT_DEC RGB_VAD
#define LIT_INC RGB_VAI
#else
#define LIT_TOG BL_TOGG
#define LIT_DEC BL_DEC
#define LIT_INC BL_INC
#endif

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define KC_PC_SAVE LCTL(KC_S)
#define KC_PC_FIND LCTL(KC_F)

#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

#define HA_OFFICE S(LALT(KC_1))

// Macro strings
#define MY_VERSION QMK_KEYBOARD "/" QMK_KEYMAP "@" QMK_VERSION " (" QMK_BUILDDATE ")"
#define MY_MAKE "make " QMK_KEYBOARD ":" QMK_KEYMAP ":flash" SS_TAP(X_ENTER)

#define _________________QWERTY_L1_________________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_WIN_____________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B
#define _________________QWERTY_L3_MAC_____________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP


#define _________________COLEMAK_L1________________       KC_Q,    KC_W,    KC_F,    KC_P,    KC_G
#define _________________COLEMAK_L2________________       KC_A,    KC_R,    KC_S,    KC_T,    KC_D
#define _________________COLEMAK_L3_WIN____________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B
#define _________________COLEMAK_L3_MAC____________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________COLEMAK_R1________________       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define _________________COLEMAK_R2________________       KC_H,    KC_N,    KC_E,    KC_I,    KC_O
#define _________________COLEMAK_R3________________       KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

#define ______________COLEMAK_MOD_DH_L1____________       KC_Q,    KC_W,    KC_F,    KC_P,    KC_B
#define ______________COLEMAK_MOD_DH_L2____________       KC_A,    KC_R,    KC_S,    KC_T,    KC_G
#define ______________COLEMAK_MOD_DH_L3____________       KC_Z,    KC_X,    KC_C,    KC_D,    KC_V

#define ______________COLEMAK_MOD_DH_R1____________       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define ______________COLEMAK_MOD_DH_R2____________       KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
#define ______________COLEMAK_MOD_DH_R3____________       KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLASH


#define _________________DVORAK_L1_________________       KC_QUOT, KC_COMM, KC_DOT, KC_P,     KC_Y
#define _________________DVORAK_L2_________________       KC_A,    KC_O,    KC_E,   KC_U,     KC_I
#define _________________DVORAK_L3_________________       KC_SCLN, KC_Q,    KC_J,   KC_K,     KC_X

#define _________________DVORAK_R1_________________       KC_F,    KC_G,    KC_C,    KC_R,    KC_L
#define _________________DVORAK_R2_________________       KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH
#define _________________DVORAK_R3_________________       KC_B,    KC_M,    KC_W,    KC_V,    KC_Z


#define ________________DVORAK_AU_L1_______________       KC_QUOT, KC_COMM, KC_DOT, KC_P,     KC_Y
#define ________________DVORAK_AU_L2_______________       KC_O,    KC_A,    KC_E,   KC_I,     KC_U
#define ________________DVORAK_AU_L3_______________       KC_SCLN, KC_Q,    KC_J,   KC_K,     KC_X

#define ________________DVORAK_AU_R1_______________       KC_F,    KC_G,    KC_C,    KC_R,    KC_L
#define ________________DVORAK_AU_R2_______________       KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH
#define ________________DVORAK_AU_R3_______________       KC_B,    KC_M,    KC_W,    KC_V,    KC_Z

#define _________________WORKMAN_L1________________       KC_Q,    KC_D,    KC_R,   KC_W,     KC_B
#define _________________WORKMAN_L2________________       KC_A,    KC_S,    KC_H,   KC_T,     KC_G
#define _________________WORKMAN_L3________________       KC_Z,    KC_X,    KC_M,   KC_C,     KC_V

#define _________________WORKMAN_R1________________       KC_J,    KC_F,    KC_U,    KC_P,    KC_SCLN
#define _________________WORKMAN_R2________________       KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,    KC_QUOT
#define _________________WORKMAN_R3________________       KC_K,    KC_L,    KC_COMM, KC_DOT,  KC_SLSH


#define _________________NORMAN_L1_________________       KC_Q,    KC_W,    KC_D,    KC_F,    KC_K
#define _________________NORMAN_L2_________________       KC_A,    KC_S,    KC_E,    KC_T,    KC_G
#define _________________NORMAN_L3_________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________NORMAN_R1_________________       KC_J,    KC_U,    KC_R,    KC_L,    KC_SCLN
#define _________________NORMAN_R2_________________       KC_Y,    KC_N,    KC_I,    KC_O,    KC_U,    KC_QUOT
#define _________________NORMAN_R3_________________       KC_P,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define _________________MALTRON_L1________________       KC_Q,    KC_P,    KC_Y,    KC_C,    KC_B
#define _________________MALTRON_L2________________       KC_A,    KC_N,    KC_I,    KC_S,    KC_F
#define _________________MALTRON_L3________________       KC_SCLN, KC_SLSH, KC_J,    KC_G,    KC_COMM

#define _________________MALTRON_R1________________       KC_V,    KC_M,    KC_U,    KC_Z,    KC_L
#define _________________MALTRON_R2________________       KC_D,    KC_T,    KC_D,    KC_O,    KC_R,    KC_QUOT
#define _________________MALTRON_R3________________       KC_DOT,  KC_W,    KC_K,    KC_MINS, KC_X


#define _________________EUCALYN_L1________________       KC_Q,    KC_W,    KC_COMM, KC_DOT,  KC_SCLN
#define _________________EUCALYN_L2________________       KC_A,    KC_O,    KC_E,    KC_I,    KC_U
#define _________________EUCALYN_L3________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_F

#define _________________EUCALYN_R1________________       KC_M,    KC_R,    KC_D,    KC_Y,    KC_P
#define _________________EUCALYN_R2________________       KC_G,    KC_T,    KC_K,    KC_S,    KC_N,    KC_QUOT
#define _________________EUCALYN_R3________________       KC_B,    KC_H,    KC_J,    KC_L,    KC_SLSH

// Qwerty-like
#define _____________CARPLAX_QFMLWY_L1_____________       KC_Q,    KC_F,    KC_M,    KC_L,    KC_W
#define _____________CARPLAX_QFMLWY_L2_____________       KC_D,    KC_S,    KC_T,    KC_N,    KC_R
#define _____________CARPLAX_QFMLWY_L3_____________       KC_Z,    KC_V,    KC_G,    KC_C,    KC_X

#define _____________CARPLAX_QFMLWY_R1_____________       KC_Y,    KC_U,    KC_O,    KC_B,    KC_J
#define _____________CARPLAX_QFMLWY_R2_____________       KC_I,    KC_A,    KC_E,    KC_H,    KC_SCLN, KC_QUOT
#define _____________CARPLAX_QFMLWY_R3_____________       KC_P,    KC_K,    KC_COMM, KC_DOT,  KC_SLSH

// Colemak like
#define _____________CARPLAX_QGMLWB_L1_____________       KC_Q,    KC_G,    KC_M,    KC_L,    KC_W
#define _____________CARPLAX_QGMLWB_L2_____________       KC_D,    KC_S,    KC_T,    KC_N,    KC_R
#define _____________CARPLAX_QGMLWB_L3_____________       KC_Z,    KC_X,    KC_C,    KC_F,    KC_J

#define _____________CARPLAX_QGMLWB_R1_____________       KC_B,    KC_Y,    KC_U,    KC_V,    KC_SCLN
#define _____________CARPLAX_QGMLWB_R2_____________       KC_I,    KC_A,    KC_E,    KC_O,    KC_H,    KC_QUOT
#define _____________CARPLAX_QGMLWB_R3_____________       KC_K,    KC_P,    KC_COMM, KC_DOT,  KC_SLSH

// colemak like, zxcv fixed
#define _____________CARPLAX_QGMLWY_L1_____________       KC_Q,    KC_G,    KC_M,    KC_L,    KC_W
#define _____________CARPLAX_QGMLWY_L2_____________       KC_D,    KC_S,    KC_T,    KC_N,    KC_R
#define _____________CARPLAX_QGMLWY_L3_____________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_J

#define _____________CARPLAX_QGMLWY_R1_____________       KC_Y,    KC_F,    KC_U,    KC_B,    KC_SCLN
#define _____________CARPLAX_QGMLWY_R2_____________       KC_I,    KC_A,    KC_E,    KC_O,    KC_H,    KC_QUOT
#define _____________CARPLAX_QGMLWY_R3_____________       KC_K,    KC_P,    KC_COMM, KC_DOT,  KC_SLSH

// teeheehee
#define _____________CARPLAX_TNWCLR_L1_____________       KC_T,    KC_N,    KC_W,    KC_C,    KC_L
#define _____________CARPLAX_TNWCLR_L2_____________       KC_S,    KC_K,    KC_J,    KC_X,    KC_G
#define _____________CARPLAX_TNWCLR_L3_____________       KC_E,    KC_O,    KC_D,    KC_I,    KC_A

#define _____________CARPLAX_TNWCLR_R1_____________       KC_R,    KC_B,    KC_F,    KC_M,    KC_H
#define _____________CARPLAX_TNWCLR_R2_____________       KC_P,    KC_Q,    KC_Z,    KC_V,    KC_SCLN, KC_QUOT
#define _____________CARPLAX_TNWCLR_R3_____________       KC_U,    KC_Y,    KC_COMM, KC_DOT,  KC_SLSH


#define _________________WHITE_R1__________________       KC_V,    KC_Y,    KC_D,    KC_COMM, KC_QUOT
#define _________________WHITE_R2__________________       KC_A,    KC_T,    KC_H,    KC_E,    KC_B
#define _________________WHITE_R3__________________       KC_P,    KC_K,    KC_G,    KC_W,    KC_Q

#define _________________WHITE_L1__________________       KC_INT1, KC_J,    KC_M,    KC_L,    KC_U
#define _________________WHITE_L2__________________       KC_MINS, KC_C,    KC_S,    KC_N,    KC_O,    KC_I
#define _________________WHITE_L3__________________       KC_X,    KC_R,    KC_F,    KC_DOT,  KC_Z


#define _________________HALMAK_L1_________________       KC_W,    KC_L,    KC_R,    KC_B,    KC_Z
#define _________________HALMAK_L2_________________       KC_S,    KC_H,    KC_N,    KC_T,    KC_COMM
#define _________________HALMAK_L3_________________       KC_F,    KC_M,    KC_V,    KC_V,    KC_SLASH

#define _________________HALMAK_R1_________________       KC_SCLN, KC_Q,    KC_U,    KC_D,    KC_J
#define _________________HALMAK_R2_________________       KC_DOT,  KC_A,    KC_E,    KC_O,    KC_I,    KC_QUOTE
#define _________________HALMAK_R3_________________       KC_G,    KC_P,    KC_X,    KC_K,    KC_Y


#define __________________ISRT_L1__________________       KC_W,    KC_C,    KC_L,    KC_M,    KC_K
#define __________________ISRT_L2__________________       KC_I,    KC_S,    KC_R,    KC_T,    KC_G
#define __________________ISRT_L3__________________       KC_Q,    KC_V,    KC_W,    KC_D,    KC_J

#define __________________ISRT_R1__________________       KC_Z,    KC_F,    KC_U,    KC_COMM, KC_QUOTE
#define __________________ISRT_R2__________________       KC_P,    KC_N,    KC_E,    KC_A,    KC_O,    KC_SCLN
#define __________________ISRT_R3__________________       KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X


#define __________________SOUL_L1__________________       KC_Q,    KC_W,    KC_L,    KC_D,    KC_P
#define __________________SOUL_L2__________________       KC_A,    KC_S,    KC_R,    KC_T,    KC_G
#define __________________SOUL_L3__________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_J

#define __________________SOUL_R1__________________       KC_K,    KC_M,    KC_U,    KC_Y,    KC_SCLN
#define __________________SOUL_R2__________________       KC_F,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOTE
#define __________________SOUL_R3__________________       KC_B,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH


#define __________________NIRO_L1__________________       KC_Q,    KC_W,    KC_U,    KC_D,    KC_P
#define __________________NIRO_L2__________________       KC_A,    KC_S,    KC_E,    KC_T,    KC_G
#define __________________NIRO_L3__________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define __________________NIRO_R1__________________       KC_J,    KC_F,    KC_Y,    KC_L,    KC_SCLN
#define __________________NIRO_R2__________________       KC_H,    KC_N,    KC_I,    KC_R,    KC_O,    KC_QUOTE
#define __________________NIRO_R3__________________       KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define _________________ASSET_L1__________________       KC_Q,    KC_W,    KC_J,    KC_F,    KC_G
#define _________________ASSET_L2__________________       KC_A,    KC_S,    KC_E,    KC_T,    KC_D
#define _________________ASSET_L3__________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________ASSET_R1__________________       KC_Y,    KC_P,    KC_U,    KC_L,    KC_SCLN
#define _________________ASSET_R2__________________       KC_H,    KC_N,    KC_I,    KC_O,    KC_R,    KC_QUOTE
#define _________________ASSET_R3__________________       KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define _________________MTGAP_L1__________________       KC_Y,    KC_P,    KC_O,    KC_U,    KC_J
#define _________________MTGAP_L2__________________       KC_I,    KC_N,    KC_E,    KC_A,    KC_COMM
#define _________________MTGAP_L3__________________       KC_Q,    KC_Z,    KC_SLSH, KC_DOT,  KC_SCLN

#define _________________MTGAP_R1__________________       KC_K,    KC_D,    KC_L,    KC_C,    KC_W
#define _________________MTGAP_R2__________________       KC_M,    KC_H,    KC_T,    KC_S,    KC_R,    KC_QUOTE
#define _________________MTGAP_R3__________________       KC_B,    KC_F,    KC_G,    KC_V,    KC_X


#define _________________MINIMAK_L1________________       KC_Q,    KC_W,    KC_D,    KC_R,    KC_K
#define _________________MINIMAK_L2________________       KC_A,    KC_S,    KC_T,    KC_F,    KC_G
#define _________________MINIMAK_L3________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________MINIMAK_R1________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________MINIMAK_R2________________       KC_H,    KC_J,    KC_E,    KC_L,    KC_SCLN, KC_QUOT
#define _________________MINIMAK_R3________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define ________________MINIMAK_8_L1_______________       KC_Q,    KC_W,    KC_D,    KC_R,    KC_K
#define ________________MINIMAK_8_L2_______________       KC_A,    KC_S,    KC_T,    KC_F,    KC_G
#define ________________MINIMAK_8_L3_______________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define ________________MINIMAK_8_R1_______________       KC_Y,    KC_U,    KC_I,    KC_L,    KC_P
#define ________________MINIMAK_8_R2_______________       KC_H,    KC_N,    KC_E,    KC_O,    KC_SCLN, KC_QUOT
#define ________________MINIMAK_8_R3_______________       KC_J,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define _______________MINIMAK_12_L1_______________       KC_Q,    KC_W,    KC_D,    KC_F,    KC_K
#define _______________MINIMAK_12_L2_______________       KC_A,    KC_S,    KC_T,    KC_R,    KC_G
#define _______________MINIMAK_12_L3_______________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _______________MINIMAK_12_R1_______________       KC_Y,    KC_U,    KC_I,    KC_L,    KC_SCLN
#define _______________MINIMAK_12_R2_______________       KC_H,    KC_N,    KC_E,    KC_O,    KC_P,    KC_QUOT
#define _______________MINIMAK_12_R3_______________       KC_J,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _________________FUNC_R1___________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6
#define _________________FUNC_R2___________________       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12

#define ___________________BLANK___________________       _______, _______, _______, _______, _______
#define ___________________NOOP____________________       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
#define _________________RGB_LEFT__________________       RGB_SLD, KC_NO, HSV_0_255_255, HSV_86_255_128, HSV_172_255_255

#define _________________WINDOWS_MODS______________       CTL_SAVE, CTL_1, KC_LCTL, KC_LGUI, KC_LALT
#define _________________MAC_MODS__________________       KC_HYPR, CTL_1,  KC_LCTL, KC_LALT, KC_LGUI

#define _________________LOWER_L1__________________       KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define _________________LOWER_L2__________________       _________________FUNC_LEFT_________________
#define _________________LOWER_L3__________________       _________________FUNC_RIGHT________________

#define _________________LOWER_R1__________________       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define _________________LOWER_R2__________________       _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR
#define _________________LOWER_R3__________________       _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END



#define _________________RAISE_L1__________________       ________________NUMBER_LEFT________________
#define _________________RAISE_L2__________________       ___________________BLANK___________________
#define _________________RAISE_L3__________________       ___________________BLANK___________________

#define _________________RAISE_R1__________________       ________________NUMBER_RIGHT_______________
#define _________________RAISE_R2__________________       _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC
#define _________________RAISE_R3__________________       _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT



#define _________________ADJUST_L1_________________       RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG
#define _________________ADJUST_L2_________________       MU_TOG , CK_TOGG, AU_ON,   AU_OFF,  CG_NORM
#define _________________ADJUST_L3_________________       RGB_RMOD,RGB_HUD,RGB_SAD, RGB_VAD, KC_RGB_T

#define _________________ADJUST_R1_________________       KC_SEC1, KC_SEC2, KC_SEC3, KC_SEC4, KC_SEC5
#define _________________ADJUST_R2_________________       CG_SWAP, DEFLYR1, DEFLYR2, DEFLYR3, DEFLYR4
#define _________________ADJUST_R3_________________       MG_NKRO, KC_MUTE, KC_VOLD, KC_VOLU, KC_MNXT

// clang-format on
