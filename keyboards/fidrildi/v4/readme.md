# Fidrildi 4

![Fidrildi 4 Picture](https://i.imgur.com/TODO.jpeg)

Fidrildi is a 34-key, ortholinear, butteryfly-shaped, unibody split keyboard inspired by [Reviung](https://github.com/gtips/reviung), [Corne](https://github.com/foostan/crkbd), and others.

* Keyboard Maintainer: [Steve Joiner](https://github.com/jstevej)
* Hardware Supported:
  * Fidrildi 4
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make fidrildi/v4:default

Flashing example for this keyboard:

    make fidrildi/v4:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Quickly double-tap the reset button on the back of the PCB. This assumes you are using a [0xcb Helios](https://github.com/0xCB-dev/0xCB-Helios) as your MCU.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
