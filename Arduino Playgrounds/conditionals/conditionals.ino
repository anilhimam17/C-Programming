char name1[20] = "Anil Himam";
char name2[20] = "Anil Himam";

void setup() {
  // Initialising the serial interface
  Serial.begin(9600);
}

void loop() {
  // Comparing the strings
  if (name1 == name2)
  {
    Serial.println("What Arduino is smarter than C");
  }

  else
  {
    Serial.println("Nah it was a big fat joke");
  }
}
