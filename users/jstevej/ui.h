#pragma once

#include "my_layers.h"

void ui_init(void);
void ui_register_press(void);
void ui_register_rotate(bool clockwise);
void ui_update_housekeeping(void);
void ui_update_layer(my_layer_t layer);
