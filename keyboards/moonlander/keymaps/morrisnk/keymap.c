#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#include "morrisnk.h"

// clang-format off
#define LAYOUT_moonlander_wrapper(...) LAYOUT_moonlander(__VA_ARGS__)

#define LAYOUT_moonlander_base( \
    KL1, KR1, \
    K01, K02, K03, K04, K05, KL2, KR2, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, KL3, KR3, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
    K30, K31, K32, K33, K34 \
    ) \
    LAYOUT_moonlander_wrapper( \
        KC_GRV,  ________________NUMBER_LEFT________________,     KL1,     KR1, ________________NUMBER_RIGHT_______________,     KC_MINS, \
        KC_TAB,      K01,     K02,     K03,     K04,     K05,     KL2,     KR2,     K06,     K07,     K08,     K09,     K0A,     KC_EQL, \
        CTL_ESC,     K11,     K12,     K13,     K14,     K15,     KL3,     KR3,     K16,     K17,     K18,     K19,     K1A,     KC_QUOT, \
        TD(TD_LSFT), K21,     K22,     K23,     K24,     K25,                       K26,     K27,     K28,     K29,     K2A,     KC_RSFT, \
        K30,         K31,     K32,     K33,     K34,     MO_CODE,                   OS_MACS, KC_SLSH, KC_BSLS, KC_LEFT, KC_DOWN, KC_RGHT, \
                                       KC_BSPC, KC_DEL,  SYM_ENT,                   MO_SYMB, KC_ENT,  KC_SPC \
    )

#define LAYOUT_base_wrapper(...) LAYOUT_moonlander_base(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /* Base layer (Qwerty) Windows
    *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    *                 │  `~ │  1  │  2  │  3  │  4  │  5  │ Cut ││ ( ) │  6  │  7  │  8  │  9  │  0  │  -_ │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │ Tab │  Q  │  W  │  E  │  R  │  T  │Paste││ [ ] │  Y  │  U  │  I  │  O  │  P  │  =+ │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *  Tap for Esc -- │Ctrl │  A  │  S  │  D  │  F  │  G  │Copy ││ { } |  H  │  J  │  K  │  L  │  ;: │  '" │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┘└─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │Shift│  Z  │  X  │  C  │  V  │  B  │            |  N  │  M  │  ,< │  .> │  /? │SHIFT│
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┘            └─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │     │CRTL │ GUI │ ALT │                        │  ←  │  ↓  │  ↑  │  →  │ \|  │
    *                 └─────┴─────┴─────┴─────┴─────┘                        └─────┴─────┴─────┴─────┴─────┘
    *                                         ┌───────────┐            ┌───────────┐
    *                                         │  CODING   │            │  MACROS   │
    *                                         ├─────┬─────┼─────┐┌─────┼─────┬─────┤
    *                                         │BKSPC│ DEL │SYMBO││SYMBO│ENTER│SPACE│
    *                                         └─────┴─────┴─────┘└─────┴─────┴─────┘
    */
  [_QWERTY] = LAYOUT_base_wrapper(
                                                 KC_PC_CUT,   TD(TD_POPC),
    _________________QWERTY_L1_________________, KC_PC_PASTE, TD(TD_LBRB), _________________QWERTY_R1_________________,
    _________________QWERTY_L2_________________, KC_PC_COPY,  TD(TD_LCRC), _________________QWERTY_R2_________________,
    _________________QWERTY_L3_WIN_____________,                           _________________QWERTY_R3_________________,
    _________________WINDOWS_MODS______________
  ),

   /* Base layer (Qwerty) MacOS
    *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    *                 │  `~ │  1  │  2  │  3  │  4  │  5  │ Cut ││ ( ) │  6  │  7  │  8  │  9  │  0  │  -_ │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │ Tab │  Q  │  W  │  E  │  R  │  T  │Paste││ [ ] │  Y  │  U  │  I  │  O  │  P  │  =+ │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *  Tap for Esc -- │Ctrl │  A  │  S  │  D  │  F  │  G  │Copy ││ { } |  H  │  J  │  K  │  L  │  ;: │  '" │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┘└─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │Shift│  Z  │  X  │  C  │  V  │  B  │            |  N  │  M  │  ,< │  .> │  /? │SHIFT│
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┘            └─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │Hyper│ MEH │CTRL │ ALT │ GUI │                        │ \|  │  ←  │  ↓  │  ↑  │  →  │
    *                 └─────┴─────┴─────┴─────┴─────┘                        └─────┴─────┴─────┴─────┴─────┘
    *                                         ┌───────────┐            ┌───────────┐
    *                                         │  CODING   │            │  MACROS   │
    *                                         ├─────┬─────┼─────┐┌─────┼─────┬─────┤
    *                                         │BKSPC│ DEL │SYMBO││SYMBO│ENTER│SPACE│
    *                                         └─────┴─────┴─────┘└─────┴─────┴─────┘
    */
  [_QWERTY_MAC] = LAYOUT_base_wrapper(
                                                 KC_MAC_CUT,   TD(TD_POPC),
    _________________QWERTY_L1_________________, KC_MAC_PASTE, TD(TD_LBRB), _________________QWERTY_R1_________________,
    _________________QWERTY_L2_________________, KC_MAC_COPY,  TD(TD_LCRC), _________________QWERTY_R2_________________,
    _________________QWERTY_L3_MAC_____________,                            _________________QWERTY_R3_________________,
    _________________MAC_MODS__________________
  ),

   /* Base layer (Colemak) Windows
    *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    *                 │  `~ │  1  │  2  │  3  │  4  │  5  │ Cut ││ ( ) │  6  │  7  │  8  │  9  │  0  │  -_ │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │ Tab │  Q  │  W  │  F  │  P  │  G  │Paste││ [ ] │  J  │  L  │  U  │  Y  │  ;: │  =+ │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *  Tap for Esc -- │Ctrl │  A  │  R  │  S  │  T  │  D  │Copy ││ { } |  H  │  N  │  E  │  I  │  O  │  '" │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┘└─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │Shift│  Z  │  X  │  C  │  V  │  B  │            |  K  │  M  │  ,< │  .> │  /? │SHIFT│
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┘            └─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │     │CTRL │ GUI │ ALT │                        │ \|  │  ←  │  ↓  │  ↑  │  →  │
    *                 └─────┴─────┴─────┴─────┴─────┘                        └─────┴─────┴─────┴─────┴─────┘
    *                                         ┌───────────┐            ┌───────────┐
    *                                         │  CODING   │            │  MACROS   │
    *                                         ├─────┬─────┼─────┐┌─────┼─────┬─────┤
    *                                         │BKSPC│ DEL │SYMBO││SYMBO│ENTER│SPACE│
    *                                         └─────┴─────┴─────┘└─────┴─────┴─────┘
    */
  [_COLEMAK] = LAYOUT_base_wrapper(
                                                 KC_PC_CUT,   TD(TD_POPC),
    _________________COLEMAK_L1________________, KC_PC_PASTE, TD(TD_LBRB), _________________COLEMAK_R1________________,
    _________________COLEMAK_L2________________, KC_PC_COPY,  TD(TD_LCRC), _________________COLEMAK_R2________________,
    _________________COLEMAK_L3_WIN____________,                           _________________COLEMAK_R3________________,
    _________________WINDOWS_MODS______________
  ),

   /* Base layer (Colemak) MacOS
    *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    *                 │  `~ │  1  │  2  │  3  │  4  │  5  │ Cut ││ ( ) │  6  │  7  │  8  │  9  │  0  │  -_ │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │ Tab │  Q  │  W  │  F  │  P  │  G  │Paste││ [ ] │  J  │  L  │  U  │  Y  │  ;: │  =+ │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *  Tap for Esc -- │Ctrl │  A  │  R  │  S  │  T  │  D  │Copy ││ { } |  H  │  N  │  E  │  I  │  O  │  '" │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┘└─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │Shift│  Z  │  X  │  C  │  V  │  B  │            |  K  │  M  │  ,< │  .> │  /? │SHIFT│
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┘            └─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │Hyper│ MEH │CTRL │ ALT │ GUI │                        │ \|  │  ←  │  ↓  │  ↑  │  →  │
    *                 └─────┴─────┴─────┴─────┴─────┘                        └─────┴─────┴─────┴─────┴─────┘
    *                                         ┌───────────┐            ┌───────────┐
    *                                         │  CODING   │            │  MACROS   │
    *                                         ├─────┬─────┼─────┐┌─────┼─────┬─────┤
    *                                         │BKSPC│ DEL │SYMBO││SYMBO│ENTER│SPACE│
    *                                         └─────┴─────┴─────┘└─────┴─────┴─────┘
    */
  [_COLEMAK_MAC] = LAYOUT_base_wrapper(
                                                 KC_MAC_CUT,   TD(TD_POPC),
    _________________COLEMAK_L1________________, KC_MAC_PASTE, TD(TD_LBRB), _________________COLEMAK_R1________________,
    _________________COLEMAK_L2________________, KC_MAC_COPY,  TD(TD_LCRC), _________________COLEMAK_R2________________,
    _________________COLEMAK_L3_MAC____________,                            _________________COLEMAK_R3________________,
    _________________MAC_MODS__________________
  ),

   /* Symbols layer
    *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    *                 │     │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  ││     │     │     │  /  │  *  │  -  │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 ││     │  ↑  │  7  │  8  │  9  │  +  │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │ Esc │     │     │     │     │     │     ││     |  ↓  │  4  │  5  │  6  │  +  │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┘└─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │     │     │     │     │     │            |     │  1  │  2  │  3  │Enter│     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┘            └─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │RGBPA│     │ RED │ GRN │ BLU │                        │  0  │  0  │  .  │Enter│     │
    *                 └─────┴─────┴─────┴─────┴─────┘                        └─────┴─────┴─────┴─────┴─────┘
    *                                         ┌───────────┐            ┌───────────┐
    *                                         │ ANIMATION │            │ LIGHT TOG │
    *                                         ├─────┬─────┼─────┐┌─────┼─────┬─────┤
    *                                         │RGB- │RGB+ │     ││     │HUE- │HUE+ │
    *                                         └─────┴─────┴─────┘└─────┴─────┴─────┘
    */
  [_SYMBOLS] = LAYOUT_moonlander_wrapper(
    KC_NO,     _________________FUNC_R1___________________,    KC_NO,          KC_NO,          KC_NO,          KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_NO,
    KC_NO,     _________________FUNC_R2___________________,    KC_NO,          KC_UP,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_NO,
    KC_ESCAPE, ___________________NOOP____________________,    KC_NO,          KC_DOWN,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_NO,
    ___________________NOOP____________________,                               KC_NO,          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_NO,
    _________________RGB_LEFT__________________,   RGB_MOD,    RGB_TOG,        KC_KP_0,        KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_NO,
    RGB_VAD,   RGB_VAI,        KC_TRANSPARENT,                 KC_TRANSPARENT, RGB_HUD,        RGB_HUI
  ),

   /* Media layer
    *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    *                 │     │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  ││     │     │     │  /  │  *  │  -  │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 ││     │  ↑  │  7  │  8  │  9  │  +  │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │ Esc │     │     │     │     │     │     ││     |  ↓  │  4  │  5  │  6  │  +  │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┘└─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │     │     │     │     │     │            |     │  1  │  2  │  3  │Enter│     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┘            └─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │RGBPA│     │ RED │ GRN │ BLU │                        │  0  │  0  │  .  │Enter│     │
    *                 └─────┴─────┴─────┴─────┴─────┘                        └─────┴─────┴─────┴─────┴─────┘
    *                                         ┌───────────┐            ┌───────────┐
    *                                         │ ANIMATION │            │ LIGHT TOG │
    *                                         ├─────┬─────┼─────┐┌─────┼─────┬─────┤
    *                                         │RGB- │RGB+ │     ││     │HUE- │HUE+ │
    *                                         └─────┴─────┴─────┘└─────┴─────┴─────┘
    */
  [_MEDIA] = LAYOUT_moonlander_wrapper(
    AU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,
    MU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    MU_MOD,         KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK
  ),

   /* Coding layer
    *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    *                 │     │     │     │     │     │     │Searc││     │     │     │     │     │     │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │     │     │     │     │     │Refac││     │     │     │     │     │     │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │     │     │     │     │     │Usage││     |     │     │     │     │     │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┘└─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │     │     │     │     │     │            |     │     │     │     │     │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┘            └─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │     │     │     │     │                        │     │     │     │     │     │
    *                 └─────┴─────┴─────┴─────┴─────┘                        └─────┴─────┴─────┴─────┴─────┘
    *                                         ┌───────────┐            ┌───────────┐
    *                                         │           │            │           │
    *                                         ├─────┬─────┼─────┐┌─────┼─────┬─────┤
    *                                         │     │     │     ││     │     │     │
    *                                         └─────┴─────┴─────┘└─────┴─────┴─────┘
    */
  [_CODING] = LAYOUT_moonlander_wrapper(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, VSCODE_SEARCH,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, VSCODE_REFACTOR,                              KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, VSCODE_USAGES,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

   /* Macro layer
    *                 ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
    *                 │     │KVM_1│KVM_2│KVM_3│KVM_4│     │     ││     │     │     │     │     │     │Reset│
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │     │     │     │     │     │     ││     │     │     │     │     │     │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │     │     │     │     │     │     ││     |     │     │     │     │     │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┘└─────┼─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │     │     │     │     │     │            |     │     │     │     │     │     │
    *                 ├─────┼─────┼─────┼─────┼─────┼─────┘            └─────┼─────┼─────┼─────┼─────┼─────┤
    *                 │     │     │     │     │     │                        │     │     │     │     │     │
    *                 └─────┴─────┴─────┴─────┴─────┘                        └─────┴─────┴─────┴─────┴─────┘
    *                                         ┌───────────┐            ┌───────────┐
    *                                         │           │            │           │
    *                                         ├─────┬─────┼─────┐┌─────┼─────┬─────┤
    *                                         │     │Vault│Sec1 ││Sec2 │Vault│     │
    *                                         └─────┴─────┴─────┘└─────┴─────┴─────┘
    */
  [_MACROS] = LAYOUT_moonlander_wrapper(
    KC_TRANSPARENT, KVM_1,          KVM_2,          KVM_3,          KVM_4,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HA_OFFICE,                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, VAULT_WARDEN,   KC_SECRET_1,                                                                    KC_SECRET_2,    VAULT_WARDEN,   KC_TRANSPARENT
  ),
};
