// Blink Counter
int ledPin = 7;
int counter = 0;

void setup() {
  // Initialising the output pin to low
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  // Initialising the serial communications
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  counter++;
  Serial.println("Blink");

  digitalWrite(ledPin, LOW);
  delay(500);
}
