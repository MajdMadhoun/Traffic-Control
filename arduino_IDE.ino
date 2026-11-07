int red1 = 4;
int yellow1 = 5;
int green1 = 3;

int red2 = 11;
int yellow2 = 10;
int green2 = 9;

void setup() {
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);

  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
}

void loop() {

  digitalWrite(green1, HIGH);
  digitalWrite(red2, HIGH);

  digitalWrite(red1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow2, LOW);

  delay(3000);

  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);

  delay(1000);

  digitalWrite(yellow1, LOW);
  digitalWrite(red1, HIGH);

  digitalWrite(red2, LOW);
  digitalWrite(green2, HIGH);

  delay(3000);

  digitalWrite(green2, LOW);
  digitalWrite(yellow2, HIGH);

  delay(1000);

  digitalWrite(yellow2, LOW);
  digitalWrite(red2, HIGH);

  digitalWrite(red1, LOW);
  digitalWrite(green1, HIGH);

  delay(3000);
}
