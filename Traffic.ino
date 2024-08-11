#define RED_LED_PIN 8
#define YELLOW_LED_PIN 9
#define GREEN_LED_PIN 10

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(RED_LED_PIN, HIGH);
  delay(5000);
  digitalWrite(RED_LED_PIN, LOW);

  digitalWrite(YELLOW_LED_PIN, HIGH);
  delay(2000);
  digitalWrite(YELLOW_LED_PIN, LOW);

  digitalWrite(GREEN_LED_PIN, HIGH);
  delay(5000);
  digitalWrite(GREEN_LED_PIN, LOW);
}
