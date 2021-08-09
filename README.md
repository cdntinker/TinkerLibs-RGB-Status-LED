# TinkerLibs-RGB-Status-LED

Use a ws2812 RGB LED as a status indicator.

Currently using the [AdaFruit library](https://github.com/adafruit/Adafruit_NeoPixel)...

[This project](https://github.com/ericgu/Fade) may have a clue or 2 for getting rid of the AdaFruit library.

## To enable & set up the LED:

    -D RGBStat                  ; Enables the library
    -D STATUS_LED_PIN=D5        ; Set the LED data pin (GPIO of your MCU)
    -D STATUS_LED_BRIGHT=100    ; Set brightness of the LED (0-255)

If you don't define STATUS_LED_PIN, it defaults to D4.
If you don't define STATUS_LED_BRIGHT, it defaults to 50.
