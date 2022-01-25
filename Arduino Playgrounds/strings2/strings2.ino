void setup() {
  Serial.begin(9600);
}

void loop() {
  char *name1 = "Anil Himam";
  char *name2 = calloc(50, sizeof(char));

  // Copying the string
  strcpy(name2, name1);

  // Printing the string
  int len = strlen(name2);
  for (int i = 0; i < len; i++)
  {
    Serial.print(*(name1 + i));
    Serial.print("\t");
    Serial.println(*(name2 + i));
    delay(1000);
  }
}
