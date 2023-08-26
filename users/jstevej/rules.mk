CAPS_WORD_ENABLE = yes
COMBO_ENABLE = yes
CONSOLE_ENABLE = yes
UNICODE_ENABLE = yes

SRC += my_layers.c print_info.c

ifdef RGBLIGHT_ENABLE
SRC += rgblight_name.c
endif

ifdef QUANTUM_PAINTER_ENABLE
QUANTUM_PAINTER_LVGL_INTEGRATION = yes
WPM_ENABLE = yes

SRC += ui.c

ifeq ($(JSTEVEJ_UI),casio)
SRC += ui_theme_casio.c \
       ui_theme_casio_off.c \
       ui_theme_casio_on_change_mode.c \
       ui_theme_casio_on_change_value.c \
       ui_theme_casio_on_layer_lnum.c \
       ui_theme_casio_on_layer_lsym.c \
       ui_theme_casio_on_layer_base.c \
       ui_theme_casio_on_layer_rsym.c \
       ui_theme_casio_on_layer_rnav.c \
       ui_theme_casio_on_layer_capsw.c \
       ui_theme_casio_on_mode_home.c \
       ui_theme_casio_on_mode_mode.c \
       ui_theme_casio_on_mode_hue.c \
       ui_theme_casio_on_mode_sat.c \
       ui_theme_casio_on_mode_val.c \
       ui_theme_casio_on_units_pct.c \
       ui_theme_casio_on_units_wpm.c \
       ui_theme_casio_on_units_256.c \
       dseg7_classic_mini_bold_italic_54.c \
       dseg14_classic_mini_bold_italic_28.c
else
SRC += ui_theme_plain.c
endif
endif

INTROSPECTION_KEYMAP_C = jstevej.c
