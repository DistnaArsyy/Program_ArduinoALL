int buttonPin = 2; // Pin yang terhubung dengan tombol
int ledPin = 4;   // Pin yang terhubung dengan LED
int ledOn = false; // Status LED

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int statusbutton = digitalRead(buttonPin);
  if (statusbutton == LOW) {
    //delay(100); 
    if (!ledOn) {
      ledOn = true;
      digitalWrite(ledPin, HIGH);
    } else {
      ledOn = false;
      digitalWrite(ledPin, LOW);
    }
    while (digitalRead(buttonPin) == LOW) {
    }
  }
}
