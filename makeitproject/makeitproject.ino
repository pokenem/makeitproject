#define NUM_LEDS 25
#include "FastLED.h"
#define PIN 13
CRGB leds[NUM_LEDS];
byte counter;
void setup()
{
  FastLED.addLeds<WS2811, PIN, GRB>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
  FastLED.setBrightness(50);
  pinMode(13, OUTPUT);
  Serial.begin(9600); 
}
void loop()
{
  for (int i = 0; i < NUM_LEDS; i++ ) 
  {   
    Serial.read(int g,int r,int b);                 
    leds[i] = CHSV(g,r,b);              
  }       
  FastLED.show();
  delay(5);       
}
