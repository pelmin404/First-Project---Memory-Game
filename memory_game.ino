const int red = 2;
const int yellow = 4;
const int green = 6;
const int blue = 8;
const int redButton = 3;
const int yellowButton = 5;
const int greenButton = 7;
const int blueButton = 9;
int sequence[10];
int buttonSequence[10];
int level = 1;
int index;

void setup() {
  randomSeed(analogRead(A0));
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(redButton, INPUT);
  pinMode(yellowButton, INPUT);
  pinMode(greenButton, INPUT);
  pinMode(blueButton, INPUT);
  pinMode(13, OUTPUT);
  for (int x = 0; x < 10; x++) {
    sequence[x] = random(1, 5);
  }
  delay(3000);
}

void loop() {
  for (int x = 0; x < level; x++) {
    index = sequence[x];
    if (index == 1) {
      digitalWrite(red, HIGH);
      tone(13, 500);
      delay(250);
      digitalWrite(red, LOW);
      noTone(13);
      delay(100);
    }
    else if (index == 2) {
      digitalWrite(yellow, HIGH);
      tone(13, 1000);
      delay(250);
      digitalWrite(yellow, LOW);
      noTone(13);
      delay(100);
    }
    else if (index == 3) {
      digitalWrite(green, HIGH);
      tone(13, 1500);
      delay(250);
      digitalWrite(green, LOW);
      noTone(13);
      delay(100);
    }
    else if (index == 4) {
      digitalWrite(blue, HIGH);
      tone(13, 2000);
      delay(250);
      digitalWrite(blue, LOW);
      noTone(13);
      delay(100);
    }
  }
  for (int x = 0; x < level; x++) {
    buttonSequence[x] = button();
    if (buttonSequence[x] != sequence[x]) {
      digitalWrite(red, HIGH);
      digitalWrite(yellow, HIGH);
      digitalWrite(green, HIGH);
      digitalWrite(blue, HIGH);
      tone(13, 100);
      delay(2000);
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      noTone(13);
      level = 0;
      for (int x = 0; x < 10; x++) {
      sequence[x] = random(1, 5);
      }
      return;
    }
  }

  delay(1000);
  level++;
  if (level == 11) {
    digitalWrite(red, HIGH);
    tone(13, 500);
    delay(250);
    digitalWrite(yellow, HIGH);
    tone(13, 1000);
    delay(250);
    digitalWrite(green, HIGH);
    tone(13, 1500);
    delay(250);
    digitalWrite(blue, HIGH);
    tone(13, 2000);
    delay(250);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    delay(250);
    digitalWrite(red, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
    tone(13, 3000);
    delay(100);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    noTone(13);
    delay(100);
    digitalWrite(red, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
    tone(13, 3000);
    delay(100);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    noTone(13);
    delay(100);
    digitalWrite(red, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
    tone(13, 3000);
    delay(100);
    noTone(13);
    while (digitalRead(red) == HIGH || digitalRead(yellow) == HIGH || digitalRead(green) == HIGH || digitalRead(blue) == HIGH) {
      while (digitalRead(redButton) == HIGH) {
        digitalWrite(red, LOW);
        tone(13, 500);
      }
      while (digitalRead(yellowButton) == HIGH) {
        digitalWrite(yellow, LOW);
        tone(13, 1000);
      }
      while (digitalRead(greenButton) == HIGH) {
        digitalWrite(green, LOW);
        tone(13, 1500);
      }
      while (digitalRead(blueButton) == HIGH) {
        digitalWrite(blue, LOW);
        tone(13, 2000);
      }
    }
    level = 0;
    for (int x = 0; x < 10; x++) {
    sequence[x] = random(1, 5);
    }
    delay(1000);
  }
}

int button() {
  while (digitalRead(redButton) == LOW && digitalRead(yellowButton) == LOW && digitalRead(greenButton) == LOW && digitalRead(blueButton) == LOW) {
  }
  if (digitalRead(redButton) == HIGH) {
    while (digitalRead(redButton) == HIGH) {
      digitalWrite(red, HIGH);
      tone(13, 500);
    }
    digitalWrite(red, LOW);
    noTone(13);
    return 1;
  }
  else {
  }
  if (digitalRead(yellowButton) == HIGH) {
    while (digitalRead(yellowButton) == HIGH) {
      digitalWrite(yellow, HIGH);
      tone(13, 1000);
    }
    digitalWrite(yellow, LOW);
    noTone(13);
    return 2;
  }
  else {
  }
  if (digitalRead(greenButton) == HIGH) {
    while (digitalRead(greenButton) == HIGH) {
      digitalWrite(green, HIGH);
      tone(13, 1500);
    }
    digitalWrite(green, LOW);
    noTone(13);
    return 3;
  }
  else {
  }
  if (digitalRead(blueButton) == HIGH) {
    while (digitalRead(blueButton) == HIGH) {
      digitalWrite(blue, HIGH);
      tone(13, 2000);
    }
    digitalWrite(blue, LOW);
    noTone(13);
    return 4;
  }
  else {
  }
}