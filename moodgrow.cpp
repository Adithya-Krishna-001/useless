#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"


SoftwareSerial mySerial(10, 11); 
DFRobotDFPlayerMini myDFPlayer;

const int moisturePin = A0;
const int lightPin = A1;

int moistureThresholdLow = 400; 
int lightThresholdLow = 300;    

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer Mini not detected!");
    while (true);
  }
  
  Serial.println("MoodGrow Initialized");
  myDFPlayer.volume(20); 
}

void loop() {
  int moistureValue = analogRead(moisturePin);
  int lightValue = analogRead(lightPin);

  Serial.print("Moisture: "); Serial.print(moistureValue);
  Serial.print("  Light: "); Serial.println(lightValue);

  
  if (moistureValue < moistureThresholdLow) {
    
    myDFPlayer.play(1); 
  }
  else if (lightValue < lightThresholdLow) {
    
    myDFPlayer.play(2); 
  }
  else {

    myDFPlayer.play(3); 
  }

  delay(10000); 
}