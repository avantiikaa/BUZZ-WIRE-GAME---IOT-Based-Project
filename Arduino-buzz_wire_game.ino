/*
  Buzz Wire Game
  Based on the principle described in your report:
  - Touching the wire completes the circuit and sounds the buzzer.
  - After 3 touches, player must restart.
  - Each player has 2 retries.
*/

const int buzzerPin = 8;
const int loopWirePin = 7;
const int startButtonPin = 6;

int touchCount = 0;
int retries = 2;
bool gameActive = false;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(loopWirePin, INPUT_PULLUP);
  pinMode(startButtonPin, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Buzz Wire Game Ready");
}

void loop() {
  if (digitalRead(startButtonPin) == LOW && !gameActive) {
    gameActive = true;
    touchCount = 0;
    Serial.println("Game Started!");
    delay(500);
  }

  if (gameActive) {
    if (digitalRead(loopWirePin) == LOW) {
      touchCount++;
      buzz();
      Serial.print("Touch detected! Total touches: ");
      Serial.println(touchCount);

      if (touchCount >= 3) {
        retries--;
        if (retries >= 0) {
          Serial.print("Restarting... Retries left: ");
          Serial.println(retries);
        } else {
          Serial.println("Game Over! No retries left.");
          gameActive = false;
        }
        delay(1000);
      }
    }
  }
}

void buzz() {
  digitalWrite(buzzerPin, HIGH);
  delay(500);
  digitalWrite(buzzerPin, LOW);
}
