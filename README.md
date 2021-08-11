# TinkerLibs-RGB-Status-LED

Use a ws2812 RGB LED as a status indicator.

## Dependencies

This library uses [TinkerLibs-DEBUG](https://github.com/cdntinker/TinkerLibs-DEBUG)

Currently using the [Adafruit NeoPixel](https://github.com/adafruit/Adafruit_NeoPixel) library which is major overkill...

## To enable & set up the LED:

    -D RGBStat                  ; Enables the library
    -D STATUS_LED_PIN=D5        ; Set the LED data GPIO pin
                                ; Either actual GPIO # or Arduino designator...
                                ; Defaults to D5 if undefined
    -D STATUS_LED_BRIGHT=100    ; Set brightness of the LED (0-255)
                                ; Defaults to 50 if undefined
                                
(These are platformio.ini `build_flags` entries, but could be done as `#define`s)

## The Functions

### void setup_RGB_StatusLED();

Initializes the LED.

### void RGB_StatusLED(int R, int G, int B);

Sets the colour (R, G, B) of the LED.

## Further thoughts

No reason this couldn't be expanded to do more than one Status LED.  (They ARE addressable...)

Someone, somewhere has to have published some simple (& properly documented) code to talk to a ws2812 (or string of them) that doesn't include 800,000 lines of un-needed complexity.  Nearly all of what the Adafruit library does is not needed to simply manage a pixel.
