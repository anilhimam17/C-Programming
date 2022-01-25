void setup() {
  Serial.begin(9600);
}

void loop() {
  // String to make a copy off
  char *name1 = "Anil Himam";
  
  // Memory allocation for copying the string
  char *name2 = calloc(50, sizeof(char));
  
  // -----------------------------------------------
  
  // Iterative copy of the string
  int len = strlen(name1);
  for (int i = 0; i < len; i++)
  {
    // Copying the values directly to memory locations
    *(name2 + i) = *(name1 + i);
  }

  // Copied string and the original string
  for (int i = 0; i < len; i++)
  {
    Serial.print(*(name1 + i));
    Serial.print("\t");
    Serial.println(*(name2 + i));
    delay(1000);
  }

  free(name2);
}
