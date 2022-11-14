int redLED=8;
int whiteLED=12;
int yellowLED=13;
int delay_time=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(whiteLED,OUTPUT);
pinMode(yellowLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED,LOW);
digitalWrite(whiteLED,LOW);
digitalWrite(yellowLED,LOW);
delay(delay_time);
  
digitalWrite(redLED,HIGH);
digitalWrite(whiteLED,LOW);
digitalWrite(yellowLED,LOW);
delay(delay_time);

digitalWrite(redLED,LOW);
digitalWrite(whiteLED,HIGH);
digitalWrite(yellowLED,LOW);
delay(delay_time);

digitalWrite(redLED,HIGH);
digitalWrite(whiteLED,HIGH);
digitalWrite(yellowLED,LOW);
delay(delay_time);

digitalWrite(redLED,LOW);
digitalWrite(whiteLED,LOW);
digitalWrite(yellowLED,HIGH);
delay(delay_time);

digitalWrite(redLED,HIGH);
digitalWrite(whiteLED,LOW);
digitalWrite(yellowLED,HIGH);
delay(delay_time);

digitalWrite(redLED,LOW);
digitalWrite(whiteLED,HIGH);
digitalWrite(yellowLED,HIGH);
delay(delay_time);

digitalWrite(redLED,HIGH);
digitalWrite(whiteLED,HIGH);
digitalWrite(yellowLED,HIGH);
delay(delay_time);

}
