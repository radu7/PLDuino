#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <PLDuino.h>
#include <PLDTouch.h>
Adafruit_ILI9341 tft = Adafruit_ILI9341(PLDuino::LCD_CS, PLDuino::LCD_DC);

void setup()
{
  PLDuino::init();
  PLDuino::enableLCD();
  tft.begin();
  tft.setRotation(3);
  tft.fillScreen(ILI9341_CYAN);
  tft.setTextColor(ILI9341_RED);
  tft.setTextSize(4);
  tft.println("RTC ERROR");
}

void loop()
{
}

