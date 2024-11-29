#define  BUTTON_1 4

#define  BUTTON_2 7





void setup() {

  Serial.begin(9600);

  PinMode(BUTTON_1, INPUT);

  PinMode(BUTTON_2, INPUT);

}



void loop() {

  int bnt_1_value = digitalRead(BOTTON_1);

  int bnt_2_value = digitalRead(BOTTON_2);





  Serial.print(bnt_1_value);

  Serial.print(",");

  Serial.println(bnt_2_value);

  delay(10);

}


