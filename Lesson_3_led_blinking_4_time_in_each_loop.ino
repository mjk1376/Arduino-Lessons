int pin1=8;
int pin2=12;
int pin3=13;
int delay_time1=500;
int delay_time2=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=1;i<5;i++)
{
digitalWrite(pin1,HIGH);
delay(delay_time1);
digitalWrite(pin1,LOW);
delay(delay_time2);
}
for(int i=1;i<5;i++)
{
digitalWrite(pin2,HIGH);
delay(delay_time1);
digitalWrite(pin2,LOW);
delay(delay_time2);
}
for(int i=1;i<5;i++)
{
digitalWrite(pin3,HIGH);
delay(delay_time1);
digitalWrite(pin3,LOW);
delay(delay_time2);
}

}
