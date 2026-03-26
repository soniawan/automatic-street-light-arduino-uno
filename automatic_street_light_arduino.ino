// Initial Variable
const int pinLDR   = A0; 
const int pinRelay = 9;  
int lightNumber = 0;

void setup() {
  pinMode(pinRelay, OUTPUT);
  Serial.begin(9600);
  Serial.println("Automatic Street Light");
}

void loop() {
  // Read sensor
  lightNumber = analogRead(pinLDR);
  
  // Show light number in Serial Monitor
  Serial.print("Light Number: ");
  Serial.println(lightNumber);

  // If Relay ON then Light ON
  if (lightNumber < 700) { 
    digitalWrite(pinRelay, HIGH);
    Serial.println("Status: Bright (Light OFF)");
  } else {
    digitalWrite(pinRelay, LOW);
    Serial.println("Status: Dark (Light ON)");
  }

  delay(300); // // Delay between sensor readings
}