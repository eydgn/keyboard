# Dactyl Minidox

![DactylMinidox](https://i.imgur.com/PqjgeRfh.jpg)

My custom 36 key split dactyl keyboard. Based on [Dactyl Minidox](https://github.com/qmk/qmk_firmware/tree/master/keyboards/handwired/dactyl_minidox).

- Keyboard Maintainer: [eeay0](https://github.com/eeay0)
- Hardware Supported: Pro Micro controller, or clone of
- Guides I've used:
  - [Dactyl Minidox Build Guide](https://www.dlford.io/keyboard-build-guide-per-key-rgb-leds/)
  - [Dactyl Manuform Build Guide](https://medium.com/swlh/complete-idiot-guide-for-building-a-dactyl-manuform-keyboard-53454845b065)
  - [CMD - Dactyl Manuform Build](https://www.youtube.com/watch?v=CxNKWNKBLMs&t=1019s)

Make example for this keyboard (after setting up your build environment):

    make handwired/dactyl_minidox:default

Flashing example for this keyboard:

    make handwired/dactyl_minidox:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

- **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
- **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
- **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
