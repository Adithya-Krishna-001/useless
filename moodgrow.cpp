#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

// Pin setup for DFPlayer Mini
SoftwareSerial mySerial(10, 11); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

// Sensor pins
const int moisturePin = A0;
const int lightPin = A1;

// Threshold values (tweak for your plant & environment)
int moistureThresholdLow = 400; // lower means dry
int lightThresholdLow = 300;    // lower means dark

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer Mini not detected!");
    while (true);
  }
  
  Serial.println("MoodGrow Initialized");
  myDFPlayer.volume(20); // Volume 0–30
}

void loop() {
  int moistureValue = analogRead(moisturePin);
  int lightValue = analogRead(lightPin);

  Serial.print("Moisture: "); Serial.print(moistureValue);
  Serial.print("  Light: "); Serial.println(lightValue);

  // Decide mood based on conditions
  if (moistureValue < moistureThresholdLow) {
    // Dry soil - Sad tune
    myDFPlayer.play(1); // Track 001.mp3 on SD card
  }
  else if (lightValue < lightThresholdLow) {
    // Low light - Calm/slow tune
    myDFPlayer.play(2); // Track 002.mp3
  }
  else {
    // Good conditions - Happy tune
    myDFPlayer.play(3); // Track 003.mp3
  }

  delay(10000); // Play every 10 seconds (adjust as needed)
}