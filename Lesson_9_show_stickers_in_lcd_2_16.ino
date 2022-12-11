#include <LiquidCrystal.h>

byte smile[8] ={
  B00000,
  B00000,
  B01010,
  B00000,
  B10001,
  B01110,
  B00000,
  B00000,
};

byte neutral[8] ={
  B00000,
  B00000,
  B01010,
  B00000,
  B00000,
  B01110,
  B00000,
  B00000,
};
LiquidCrystal lcd(8 ,9,10,11,12,13);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.createChar(7,smile);
lcd.createChar(8,neutral);
}

void loop() {
  // put your main code here, to run repeatedly:

lcd.setCursor(0,0);
lcd.write(7);
lcd.setCursor(0,1);
lcd.write(8);
}
