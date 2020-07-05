int pwmPin = 9;         // Pin controlado por PWM 
const int sensorPin = A0;
int  pwm;
int valorAnalogo;
void setup(){
Serial.begin(9600);
  } 
void loop() { 
  valorAnalogo = analogRead(sensorPin);
  pwm = map(valorAnalogo, 0, 1023, 0, 255);
  Serial.println(pwm);
// Serial.println(valorAnalogo);
  analogWrite(pwmPin,pwm);
}
 
