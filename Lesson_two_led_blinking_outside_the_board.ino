int Pin=12;
int delay_time=1000;

void setup() {
// put your setup code here, to run once:
pinMode(Pin,OUTPUT);

}

void loop() {
// put your main code here, to run repeatedly:

digitalWrite(Pin,HIGH);
delay(delay_time);
digitalWrite(Pin,LOW);
delay(delay_time);
}
