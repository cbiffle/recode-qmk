# reCODE v2 rev C (univesral)

*QMK upgrade for the WASD CODE v2B keyboard.*

* Keyboard Maintainer: [Cliff L. Biffle](https://github.com/cbiffle)
* Hardware Supported: reCODE board installed in a WASD CODE v2B
* Hardware Availability: https://www.tindie.com/products/owl/recode-programmable-upgrade-for-wasd-code-v2/

Make example for this keyboard (after setting up your build environment):

    make cbiffle/recode_revc:default

Flashing example for this keyboard:

    make cbiffle/recode_revc:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the ESC key and plug in the keyboard
* **Keycode in layout**: If you have converted Menu into a Fn key using DIP
  switch 6, press Fn+Esc at any time.
* **Physical reset button**: Short the marked pads on the reCODE PCB to
  hard-reset. (A pair of tweezers works great for this.)
