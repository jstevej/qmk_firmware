#include "my_layers.h"

const char *my_layer_names[LY_NUM_LAYERS] = {
    "Base",
    "Left Symbol",
    "Right Symbol",
    "Left Number",
    "Right Navigation"
};

const char* my_layers_get_name(my_layer_t layer) {
    if (layer >= LY_NUM_LAYERS) return "Unknown";
    return my_layer_names[layer];
}
