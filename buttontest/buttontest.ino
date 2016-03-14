

#define BUTTON_PIN 4

int currentState;
int debounceState;


void setup() {
  
  Serial.begin(9600);
  
  pinMode(BUTTON_PIN, INPUT);
  
  Serial.println(1);
  
}

void loop() {
  
  currentState = digitalRead(BUTTON_PIN);
  delay(10);
  debounceState = digitalRead(BUTTON_PIN);
 
  if ( currentState == debounceState ) {
   if ( currentState == HIGH ) {
    Serial.println(1);
   } else {
    Serial.println(0);
   } 
  }
}
  
  
  
  
