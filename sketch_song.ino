#define RED_PIN 5

#define GREEN_PIN 6

#define BLUE_PIN 11



void setup() {

  Serial.begin(9600); // 시리얼 통신 시작

  pinMode(RED_PIN, OUTPUT);

  pinMode(GREEN_PIN, OUTPUT);

  pinMode(BLUE_PIN, OUTPUT);

}



void loop() {

  if (Serial.available() > 0) {

    char command = Serial.read(); // PC에서 받은 명령어 읽기



    if (command == 'r') { // 빨간색

      setColor(255, 0, 0);

    } else if (command == 'g') { // 초록색

      setColor(0, 255, 0);

    } else if (command == 'b') { // 파란색

      setColor(0, 0, 255);

    }

      else if (command == 'y') { // 노란색

      setColor(128, 128, 0);

    }

      else if (command == 'p') { // 보라색

      setColor(128, 0, 128);

    }

      else if (command == 'c') { // 청록색

      setColor(0, 128, 128);

    }

     else if (command == 'o') { // 끄기

      setColor(0, 0, 0);

    } 

  }

}



void setColor(int red, int green, int blue) {

  analogWrite(RED_PIN, red);

  analogWrite(GREEN_PIN, green);

  analogWrite(BLUE_PIN, blue);

}

