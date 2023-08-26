#pragma once

typedef enum {
    LY_BASE,
    LY_LSYM,
    LY_RSYM,
    LY_LNUM,
    LY_RNAV,
    LY_NUM_LAYERS
} my_layer_t;

const char* my_layers_get_name(my_layer_t layer);
