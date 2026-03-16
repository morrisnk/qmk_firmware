#pragma once
#include "morrisnk.h"

#if defined(KEYMAP_SAFE_RANGE)
#    define PLACEHOLDER_SAFE_RANGE KEYMAP_SAFE_RANGE
#else
#    define PLACEHOLDER_SAFE_RANGE SAFE_RANGE
#endif

enum tap_dance_keycodes {
    TD_POPC, // paren open paren close
    TD_LBRB, // left bracket right bracket
    TD_LCRC, // left curly brace right curly brace
    TD_LARF, // left alt, refactor
    TD_LSFT, // left shift
};

