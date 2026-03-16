#pragma once
#include "morrisnk.h"

#if defined(KEYMAP_SAFE_RANGE)
#    define PLACEHOLDER_SAFE_RANGE KEYMAP_SAFE_RANGE
#else
#    define PLACEHOLDER_SAFE_RANGE SAFE_RANGE
#endif

enum userspace_keycodes {
    KC_ARROW = PLACEHOLDER_SAFE_RANGE, // `->`
    KC_MAKE,       // Runs the keyboard's make command
    KC_QWERTY,     // Default Layer -> QWERTY
    KC_COLEMAK,    // Default Layer -> COLEMAK
    KC_VRSN,       // Print QMK Firmware and board info
    RGB_IDL,       // Toggle RGB Idle animations
    RGB_TGL,       // Toggle RGB Layer Indication
    RGB_SLD,
    HSV_0_255_255,
    HSV_86_255_128,
    HSV_172_255_255,
    ECLIPSE_SEARCH,
    ECLIPSE_REFACTOR,
    ECLIPSE_TYPES,
    KVM_1,
    KVM_2,
    KVM_3,
    KVM_4,
    INTELLIJ_SEARCH,
    INTELLIJ_REFACTOR,
    INTELLIJ_USAGES,
    KC_SECRET_1,
    KC_SECRET_2,
    KC_SECRET_3,
    KC_SECRET_4,
    KC_SECRET_5,
    VAULT_WARDEN,
    VAULT_WARDEN_MAC,
    VSCODE_SEARCH,
    VSCODE_REFACTOR,
    VSCODE_USAGES,
    NEW_SAFE_RANGE // use NEW_SAFE_RANGE for keymap specific codes
};

bool process_record_keymap(uint16_t keycode, keyrecord_t *record);
