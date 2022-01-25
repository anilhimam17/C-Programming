int counter;
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(counter = 0; counter < 10; counter++)
  {
    Serial.print("The value of counter is: ");
    Serial.println(counter);
    Serial.print("The value of the array is: ");
    Serial.println(arr[counter]);
    delay(1000);
  }

  Serial.print("The length of the array was: ");
  Serial.println(sizeof(arr) / sizeof(int));
}
