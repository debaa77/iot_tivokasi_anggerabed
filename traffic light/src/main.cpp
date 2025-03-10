#include <Arduino.h>

int trafficlight1 = 32;
int trafficlight2 = 26;
int trafficlight3 = 27;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

pinMode(trafficlight1, OUTPUT);
pinMode(trafficlight2, OUTPUT);
pinMode(trafficlight3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(trafficlight1, HIGH);
delay(3000);
digitalWrite(trafficlight1,LOW);
digitalWrite(trafficlight2, HIGH);
delay(1000);
digitalWrite(trafficlight2,LOW);
digitalWrite(trafficlight3, HIGH);
delay(3000);
digitalWrite(trafficlight3,LOW);


  delay(10); // this speeds up the simulation
}
