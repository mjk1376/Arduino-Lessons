int Read_Pin=A3;
int delay_time=1000;
int Readed_Value;
float Voltage;
String message="Your Output voltage is equal to :   ";

void setup() {
  // put your setup code here, to run once:
pinMode(Read_Pin,INPUT);
Serial.begin(9600);

}

void loop() {
// put your main code here, to run repeatedly:
Serial.print(message);
Readed_Value = analogRead(Read_Pin);
Voltage = (5./1023.)*Readed_Value;
Serial.println(Voltage);
delay(delay_time);
}
