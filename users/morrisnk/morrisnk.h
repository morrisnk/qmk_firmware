#pragma once
#include QMK_KEYBOARD_H

#include "wrappers.h"
#include "tapdance.h"
#include "process_records.h"
#include "rgb.h"

/************************* Userspace Layers *************************
 *    Keymaps can define additional layers by making the first case
 * equal to `LAYER_SAFE_RANGE`
 ********************************************************************/
enum userspace_layers {
    _QWERTY,
    _QWERTY_MAC,
    _COLEMAK,
    _COLEMAK_MAC,
    _SYMBOLS,
    _MEDIA,
    _CODING,
    _MACROS,
};
