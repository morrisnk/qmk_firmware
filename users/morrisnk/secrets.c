#include QMK_KEYBOARD_H
#include "morrisnk.h"

#if (__has_include("secrets.h") && !defined(NO_SECRETS))
#include "secrets.h"
#else
static const char * const secrets[] = {
  "test1",
  "test2",
  "test3",
  "test4",
  "test5"
};
#endif

bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_SECRET_1 ... KC_SECRET_5: // Secrets!  Externally defined strings, not stored in repo
      if (record->event.pressed) {
        clear_mods();
        clear_oneshot_mods();
        send_string_with_delay(secrets[keycode - KC_SECRET_1], TAP_CODE_DELAY);
      }
      return false;
      break;
  }
  return true;
}
