#include <Tinker_DEBUG.h>
extern char DEBUGtxt[];

void RGB_StatusLED(int R, int G, int B);

///////////////////////////////////////////////////////////////////////////////////////////

/* Status LED */
#include <Adafruit_NeoPixel.h> // For status LED
#define STATUS_LED_PIN D4
#if RGBStat == 1
int Brightness = 50;
#else
int Brightness = RGBStat;
#endif

Adafruit_NeoPixel pixels(1, STATUS_LED_PIN, NEO_GRB + NEO_KHZ800);

void setup_RGB_StatusLED()
{
  sprintf(DEBUGtxt, "RGB Status LED on GPIO%d", STATUS_LED_PIN);
  DEBUG_Init(DEBUGtxt);

  pixels.begin();
  // pixels.clear();
  pixels.setBrightness(Brightness);
  pixels.show();
}

void RGB_StatusLED(int R, int G, int B)
{
  pixels.setPixelColor(0, pixels.Color(R, G, B));
  pixels.show();
}