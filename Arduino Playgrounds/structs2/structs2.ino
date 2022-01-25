struct sensordata
{
  float outTemp;
  float inTemp;
  float humidity;
  float pressure;
}bmp1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("This is all the data wrt to bmp1");
  bmp1.outTemp = random(1, 50);
  Serial.print("The outdoor temp was: ");
  Serial.println(bmp1.outTemp);
  Serial.println("\n");
  delay(1000);

  bmp1.inTemp = random(1, 50);
  Serial.print("The indoor temp was: ");
  Serial.println(bmp1.inTemp);
  Serial.println("\n");
  delay(1000);

  bmp1.humidity = random(1, 50);
  Serial.print("The humidity temp was: ");
  Serial.println(bmp1.humidity);
  Serial.println("\n");
  delay(1000);

  bmp1.pressure = random(1, 50);
  Serial.print("The pressure temp was: ");
  Serial.println(bmp1.pressure);
  Serial.println("\n");
  delay(1000);

  // Creating BMP2
  struct sensordata bmp2;
  bmp2 = bmp1;

  Serial.println("This is all the data wrt to bmp2");
  //bmp2.outTemp = random(1, 50);
  Serial.print("The outdoor temp was: ");
  Serial.println(bmp2.outTemp);
  Serial.println("\n");
  delay(1000);

  //bmp2.inTemp = random(1, 50);
  Serial.print("The indoor temp was: ");
  Serial.println(bmp2.inTemp);
  Serial.println("\n");
  delay(1000);

  //bmp2.humidity = random(1, 50);
  Serial.print("The humidity temp was: ");
  Serial.println(bmp2.humidity);
  Serial.println("\n");
  delay(1000);

  //bmp2.pressure = random(1, 50);
  Serial.print("The pressure temp was: ");
  Serial.println(bmp2.pressure);
  Serial.println("\n");
  delay(1000);
}
