#pragma once
#include "morrisnk.h"

#define BLUE      {152,255,255}
#define GOLD      {29,255,255}
#define WHITE     {0,0,255}
#define RED       {0,245,245}
#define GREEN     {74,255,255}
#define YELLOW    {41,255,255}
#define BLACK     {0,0,0}
#define TURQUOISE {131,255,255}

void keyboard_post_init_user(void);
void set_layer_color(int layer);
void rgb_matrix_indicators_user(void);
