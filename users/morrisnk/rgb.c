#include "rgb.h"

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [_QWERTY] =     { BLUE, BLUE, GOLD, BLUE, BLUE,     // C1
                      BLUE, WHITE, WHITE, WHITE, BLUE,  // C2
                      BLUE, WHITE, WHITE, WHITE, BLUE,  // C3
                      BLUE, WHITE, WHITE, WHITE, BLUE,  // C4
                      BLUE, WHITE, WHITE, WHITE, BLUE,  // C5
                      BLUE, WHITE, WHITE, WHITE,        // C6

                      BLUE, BLUE, BLUE,                 // C7
                      BLUE, BLUE, RED, RED,             // TL

                      BLUE, BLUE, BLUE, BLUE, GREEN,    // C14
                      BLUE, WHITE, BLUE, GREEN, GREEN,  // C13
                      BLUE, WHITE, WHITE, BLUE, GREEN,  // C12
                      BLUE, WHITE, WHITE, BLUE, BLUE,   // C11
                      BLUE, WHITE, WHITE, WHITE, BLUE,  // C10
                      BLUE, WHITE, WHITE, WHITE,        // C9

                      BLUE, BLUE, BLUE,                 // C8
                      BLUE, BLUE, RED, RED },           // TR

    [_QWERTY_MAC] = { GREEN, GREEN, GOLD, GREEN, GREEN,
                      GREEN, WHITE, WHITE, WHITE, GREEN,
                      GREEN, WHITE, WHITE, WHITE, GREEN,
                      GREEN, WHITE, WHITE, WHITE, GREEN,
                      GREEN, WHITE, WHITE, WHITE, GREEN,
                      GREEN, WHITE, WHITE, WHITE, GREEN,
                      GREEN, GREEN, GREEN,

                      GREEN, RED, RED,

                      GREEN, GREEN, GREEN, GREEN, BLUE,
                      GREEN, WHITE, GREEN, BLUE, BLUE,
                      GREEN, WHITE, WHITE, GREEN, BLUE,
                      GREEN, WHITE, WHITE, GREEN, GREEN,
                      GREEN, WHITE, WHITE, WHITE, GREEN,
                      GREEN, WHITE, WHITE, WHITE,

                      GREEN, GREEN, GREEN,
                      GREEN, GREEN, RED, RED },

    [_SYMBOLS] =    { WHITE, WHITE, GOLD, WHITE, RED,
                      YELLOW, YELLOW, WHITE, WHITE, WHITE,
                      YELLOW, YELLOW, WHITE, WHITE, RED,
                      YELLOW, YELLOW, WHITE, WHITE, GREEN,
                      YELLOW, YELLOW, WHITE, WHITE, BLUE,
                      YELLOW, YELLOW, WHITE, WHITE,

                      YELLOW, YELLOW, WHITE,
                      WHITE, WHITE, WHITE, WHITE,

                      WHITE, WHITE, WHITE, WHITE, WHITE,
                      BLUE, BLUE, BLUE, BLUE, BLUE,
                      BLUE, GREEN, GREEN, GREEN, BLUE,
                      BLUE, GREEN, GREEN, GREEN, GREEN,
                      WHITE, GREEN, GREEN, GREEN, GREEN,
                      WHITE, WHITE, WHITE, WHITE,

                      WHITE, WHITE, WHITE,
                      WHITE, WHITE, WHITE, WHITE },

    [_MACROS] =     { BLACK, BLACK, BLACK, BLACK, BLACK,
                      TURQUOISE, BLACK, BLACK, BLACK, BLACK,
                      TURQUOISE, BLACK, BLACK, BLACK, BLACK,
                      TURQUOISE, BLACK, BLACK, BLACK, BLACK,
                      TURQUOISE, BLACK, BLACK, BLACK, BLACK,
                      BLACK, BLACK, BLACK, BLACK,

                      BLACK, BLACK, TURQUOISE,
                      BLACK, RED, RED, RED,

                      RED, BLACK, BLACK, BLACK, BLACK,
                      BLACK, BLACK, BLACK, BLACK, BLACK,
                      BLACK, BLACK, BLACK, BLACK, BLACK,
                      BLACK, BLACK, BLACK, BLACK, BLACK,
                      BLACK, BLACK, BLACK, BLACK, BLACK,
                      BLACK, BLACK, BLACK, BLACK,

                      BLACK, BLACK, BLACK,
                      BLACK, BLACK, BLACK, BLACK },
};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case _QWERTY:
      set_layer_color(_QWERTY);
      break;
    case _QWERTY_MAC:
      set_layer_color(_QWERTY_MAC);
      break;
    case _SYMBOLS:
      set_layer_color(_SYMBOLS);
      break;
    case _MACROS:
      set_layer_color(_MACROS);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}
