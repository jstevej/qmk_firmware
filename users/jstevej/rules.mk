CAPS_WORD_ENABLE = yes
COMBO_ENABLE = yes
CONSOLE_ENABLE = yes
UNICODE_ENABLE = yes

SRC += print_info.c

ifdef RGBLIGHT_ENABLE
SRC += rgblight_name.c
endif

ifdef QUANTUM_PAINTER_ENABLE
#SRC += ui.c
SRC += source_sans_pro_18.qff.c
QUANTUM_PAINTER_LVGL_INTEGRATION = yes
endif

INTROSPECTION_KEYMAP_C = jstevej.c
