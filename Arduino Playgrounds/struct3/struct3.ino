typedef struct sensordata
{
  float outTemp;
  float inTemp;
  float humidity;
}bmp;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Decalring an array of structs
  bmp bmp1[2];

  // Populating the array of structures
  for (int i = 0; i < 2; i++)
  {
    Serial.print("Entering data for element: ");
    Serial.println(i);

    bmp1[i].outTemp = random(1, 50);
    Serial.println(bmp1[i].outTemp);
    delay(1000);
    
    bmp1[i].inTemp = random(1, 20);
    Serial.println(bmp1[i].inTemp);
    delay(1000);
    
    bmp1[i].humidity = random(1, 50);
    Serial.println(bmp1[i].humidity);
    delay(1000);
  }

  // Displaying the data
  for (int i = 0; i < 2; i++)
  {
    Serial.print("Displaying data for element: ");
    Serial.println(i);

    Serial.println(bmp1[i].outTemp);
    delay(1000);
    
    Serial.println(bmp1[i].inTemp);
    delay(1000);
    
    Serial.println(bmp1[i].humidity);
    delay(1000);
  }
  delay(60000);
}
