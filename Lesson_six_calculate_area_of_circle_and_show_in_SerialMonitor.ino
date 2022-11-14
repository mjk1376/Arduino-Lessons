float radius,area;
String message = "what is the radius of your circle?   ";
String message_2 ="Your circle has area of : ";
float pi=3.14;
int delay_time=1000;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
// put your main code here, to run repeatedly:
delay(delay_time);
Serial.print(message);
while (Serial.available()==0){
}

radius = Serial.parseFloat();
area = pi*radius*radius;
Serial.print(message_2);
Serial.println(area);
}
