
int pushButton = 2;

int ledizquierdo = 3;
int ledmedioizquierdo = 4;
int ledsuperiorizquierdo = 5;
int ledmedio = 6;
int ledderecho = 7;
int ledmedioderecho = 8;
int ledsuperiorderecho = 9;

int state = 0;
long randomNumber;

void setup() {

  pinMode(ledizquierdo , OUTPUT);
  pinMode(ledmedioizquierdo , OUTPUT);
  pinMode(ledsuperiorizquierdo , OUTPUT);
  pinMode(ledmedio , OUTPUT);
  pinMode(ledderecho , OUTPUT);
  pinMode(ledmedioderecho , OUTPUT);
  pinMode(ledsuperiorderecho , OUTPUT);

  pinMode(pushButton, INPUT);
  randomSeed(analogRead(0)); //generar numeros aleatorios diferentes, desde el valor 0

  Serial.begin(9600);
}

void loop() {

  if ( digitalRead (pushButton) == LOW && state == 0) {
    state = 1;
    randomNumber = random (1, 7);
    delay (200);
    Serial.println(randomNumber);

    if (randomNumber == 6) {
      digitalWrite (ledizquierdo, HIGH);
      digitalWrite (ledmedioizquierdo, HIGH);
      digitalWrite (ledsuperiorizquierdo, HIGH);
      digitalWrite (ledderecho, HIGH);
      digitalWrite (ledmedioderecho, HIGH);
      digitalWrite (ledsuperiorderecho, HIGH);
    }

    if (randomNumber == 5) {
      digitalWrite (ledizquierdo, HIGH);
      digitalWrite (ledsuperiorizquierdo, HIGH);
      digitalWrite (ledderecho, HIGH);
      digitalWrite (ledmedio, HIGH);
      digitalWrite (ledsuperiorderecho, HIGH);
    }
    if (randomNumber == 4) {
      digitalWrite (ledizquierdo, HIGH);
      digitalWrite (ledsuperiorizquierdo, HIGH);
      digitalWrite (ledderecho, HIGH);
      digitalWrite (ledsuperiorderecho, HIGH);
    }

    if (randomNumber == 3) {
      digitalWrite (ledizquierdo, HIGH);
      digitalWrite (ledmedio, HIGH);
      digitalWrite (ledsuperiorderecho, HIGH);
    }

    if (randomNumber == 2) {
      digitalWrite (ledizquierdo, HIGH);
      digitalWrite (ledsuperiorderecho, HIGH);
    }
    if (randomNumber == 1) {
      digitalWrite (ledmedio, HIGH);
    }

    delay (200);

    digitalWrite (ledizquierdo, LOW);
    digitalWrite (ledmedioizquierdo, LOW);
    digitalWrite (ledsuperiorizquierdo, LOW);
    digitalWrite (ledderecho, LOW);
    digitalWrite (ledmedio, LOW);
    digitalWrite (ledmedioderecho, LOW);
    digitalWrite (ledsuperiorderecho, LOW);
    state = 0;

  }
}
