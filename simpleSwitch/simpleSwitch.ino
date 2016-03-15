
#define LED_PIN     3
#define BUTTON_PIN  4

int currentState;
int debounceState;
int ledState = 0;
int switchState = 0;

void setup() {

  Serial.begin(9600);
  
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  currentState = digitalRead(BUTTON_PIN);
  delay(10);
  debounceState = digitalRead(BUTTON_PIN);
  
  if ( currentState == debounceState) {

    if ( currentState != switchState ) {
      
      if (currentState == LOW) {
        // Button just released
      } else {
        if (ledState == 0) {
          digitalWrite(LED_PIN, HIGH);
          ledState = 1;
          Serial.println(1);
        } else {
          digitalWrite(LED_PIN, LOW);
          ledState = 0;
          Serial.println(0);
        }
      }
      switchState = currentState;
    }
  }
}
  
