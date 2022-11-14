int LED_Pin=9;
int High_Brightness=255;
int Low_Brightness=20;
int delay_time=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(LED_Pin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(LED_Pin,High_Brightness);
delay(delay_time);

analogWrite(LED_Pin,Low_Brightness);
delay(delay_time);
}
