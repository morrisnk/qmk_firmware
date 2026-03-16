#include "process_records.h"

__attribute__ ((weak)) bool process_record_secrets(uint16_t keycode, keyrecord_t *record) { return true; }

/**
 * @brief Keycode handler for keymaps
 *
 * This handles the keycodes at the keymap level, useful for keyboard specific customization
 */
__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) { return true; }

/**
 * @brief Main user keycode handler
 *
 * This handles all of the keycodes for the user, including calling feature handlers.
 *
 * @param keycode Keycode from matrix
 * @param record keyrecord_t data structure
 * @return true Continue processing keycode and send to host
 * @return false Stop process keycode and do not send to host
 */
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (process_record_keymap(keycode, record)) {
        static uint8_t mods = 0;
        // static uint8_t layer = 0;
        mods = get_mods();
        switch (keycode) {
        case ECLIPSE_SEARCH:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_G))));
            }
            break;
        case ECLIPSE_REFACTOR:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_R))));
            }
            break;
        case ECLIPSE_TYPES:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_T))));
            }
            break;
        case INTELLIJ_REFACTOR:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_TAP(X_F6)));
            }
            break;
        case INTELLIJ_USAGES:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_F7)));
            }
            break;
        case INTELLIJ_SEARCH:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_LCTL(SS_TAP(X_F))));
            }
            break;
        case KVM_1:
            if (record->event.pressed) {
                tap_code(KC_RCTL);
                wait_ms(100);
                register_code(KC_RCTL);
                wait_ms(100);
                tap_code(KC_1);
                unregister_code(KC_RCTL);
                clear_keyboard();
                layer_move(_QWERTY);
            }
            break;
        case KVM_2:
            if (record->event.pressed) {
                tap_code(KC_RCTL);
                wait_ms(100);
                register_code(KC_RCTL);
                wait_ms(100);
                tap_code(KC_2);
                unregister_code(KC_RCTL);
                clear_keyboard();
                layer_move(_QWERTY);
            }
            break;
        case KVM_3:
            if (record->event.pressed) {
                tap_code(KC_RCTL);
                wait_ms(100);
                register_code(KC_RCTL);
                wait_ms(100);
                tap_code(KC_3);
                unregister_code(KC_RCTL);
                clear_keyboard();
                layer_move(_QWERTY_MAC);
            }
            break;
        case KVM_4:
            if (record->event.pressed) {
                tap_code(KC_RCTL);
                wait_ms(100);
                register_code(KC_RCTL);
                wait_ms(100);
                tap_code(KC_4);
                unregister_code(KC_RCTL);
                clear_keyboard();
                layer_move(_QWERTY);
            }
            break;
        case CTL_SAVE:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                    tap_code16(LCTL(KC_S));
                }
                return false;
            }
            break;
        case VAULT_WARDEN:
            if (record->event.pressed) {
                if (layer_state_is(_QWERTY_MAC)) {
                    SEND_STRING(SS_LSFT(SS_LGUI(SS_TAP(X_L))));
                } else {
                    SEND_STRING(SS_LSFT(SS_LCTL(SS_TAP(X_L))));
                }
            }
            break;
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
        case HSV_0_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(0,255,255);
            }
            return false;
        case HSV_86_255_128:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(86,255,128);
            }
            return false;
        case HSV_172_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(172,255,255);
            }
            return false;
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
            break;
        case KC_COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
            }
            return false;
            break;
        case KC_ARROW:
            if (record->event.pressed) {
                clear_mods();
                if (mods & MOD_MASK_SHIFT) {
                    SEND_STRING("=>");
                } else {
                    SEND_STRING("->");
                }
                set_mods(mods);
            }
            return false;
            break;
        case KC_MAKE:
            if (!record->event.pressed) {
#ifndef MAKE_BOOTLOADER
                uint8_t temp_mod = mod_config(get_mods());
                uint8_t temp_osm = mod_config(get_oneshot_mods());
                clear_mods();
                clear_oneshot_mods();
#endif
                send_string_with_delay_P(PSTR("qmk"), TAP_CODE_DELAY);
#ifndef MAKE_BOOTLOADER
                if ((temp_mod | temp_osm) & MOD_MASK_SHIFT)
#endif
                {
                    send_string_with_delay_P(PSTR(" flash "), TAP_CODE_DELAY);
#ifndef MAKE_BOOTLOADER
                } else {
                    send_string_with_delay_P(PSTR(" compile "), TAP_CODE_DELAY);
#endif
                }
                send_string_with_delay_P(PSTR("-kb " QMK_KEYBOARD " -km " QMK_KEYMAP), TAP_CODE_DELAY);
                send_string_with_delay_P(PSTR(SS_TAP(X_ENTER)), TAP_CODE_DELAY);
            }
            return false;
            break;
        case VSCODE_REFACTOR:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_F2));
            }
            break;
        case VSCODE_USAGES:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_TAP(X_F12)));
            }
            break;
        case VSCODE_SEARCH:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_LCTL(SS_TAP(X_F))));
            }
            break;
        }
    }
    return process_record_keymap(keycode, record) && process_record_secrets(keycode, record);;
}
