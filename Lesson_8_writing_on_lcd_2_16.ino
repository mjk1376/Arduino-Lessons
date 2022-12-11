#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,10,11,12,13);
// VSS -> GND , VDD -> 5v , Vo -> Second Pin Of Potentiameter , Rs -> 8 , Rw -> GND , E -> 9 , A -> 5v , k -> GND , D4,D5,D6,D7 -> 10,11,12,13
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.print("Arduino");
delay(2000);
lcd.setCursor(2,1);
lcd.print("LCD Tutorial");
delay(3000);
lcd.clear();
}
