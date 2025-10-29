const int SoilSensor = A0;
const int RainSensor = A1;

const int rainThreshold = 600; // analog threshold for heavy rain
const int soilThreshold = 800; // analog threshold for saturated soil

void setup() {
  Serial.begin(9600);
}

void loop() {
  int soilValue = analogRead(SoilSensor);
  int rainValue = analogRead(RainSensor);

  // Print sensor values, each reading on its own line
  Serial.print("SoilSensor: "); Serial.println(soilValue);
  Serial.print("RainSensor: "); Serial.println(rainValue);

  // Print alert on next line if threshold crossed
  if (rainValue < rainThreshold && soilValue < soilThreshold) {
    Serial.println("ALERT: FLASH FLOOD THRESHOLD CROSSED!");
  }

  Serial.println(); // Extra blank line for separation between readings
  delay(1000);
}
