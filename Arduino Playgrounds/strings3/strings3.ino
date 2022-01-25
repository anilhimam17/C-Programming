void setup() {
  Serial.begin(9600);
}

void loop() {
  // Before Assignment
  String name1 = "Anil Himam";
  Serial.println(name1);
  delay(1000);

  /* An example display of all the important string functions */
  // Char ar n
  char n = name1.charAt(5);
  Serial.print("The charecter at the 4th position is: ");
  Serial.println(n);
  delay(1000);
}
