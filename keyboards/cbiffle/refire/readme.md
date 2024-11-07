# reFIRE

*QMK upgrade for the CMStorm Quickfire Rapid keyboard.*

* Keyboard Maintainer: [Cliff L. Biffle](https://github.com/cbiffle)
* Hardware Supported: reFIRE board installed in a Quickfire Rapid keyboard.
* Hardware Availability: https://www.tindie.com/products/owl/refire-qmk-for-quickfire-rapid/

Make example for this keyboard (after setting up your build environment):

    make cbiffle/refire:default

Flashing example for this keyboard:

    make cbiffle/refire:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the ESC key and plug in the keyboard
* **Keycode in layout**: Press Fn+ESC at any time.
* **Physical reset button**: Short the marked pads on the reFIRE PCB to
  hard-reset. (A pair of tweezers works great for this.)
