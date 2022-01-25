typedef struct sensordata
{
  float outTemp;
  float inTemp;
  float humidity;
  float pressure;
}bmp;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Creating variable of weather datatype
  bmp bmp1;
  bmp1.outTemp = random(1, 50);
  bmp1.inTemp = random(1, 24);
  bmp1.humidity = random(1, 50);
  bmp1.pressure = random(0, 1);

  Serial.print("The outdoor temp was: ");
  Serial.println(bmp1.outTemp);
  delay(1000);

  Serial.print("The indoor temp was: ");
  Serial.println(bmp1.inTemp);
  delay(1000);

  Serial.print("The humidity was: ");
  Serial.println(bmp1.humidity);
  delay(1000);

  Serial.print("The pressure was: ");
  Serial.println(bmp1.pressure);
  delay(1000);
}
