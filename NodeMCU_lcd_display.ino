#include <LiquidCrystal.h>
const int rs = D0, en = D1, d4 = D2, d5 = D3, d6 = D4, d7 = D5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  Serial.begin(9600);
  Serial.println("Hello World!");
  lcd.begin(16, 2);
   lcd.print("hello, world!");
  delay(1000);
}
void loop() {

  Serial.println("Hello World!");
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(150);
  }
  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(150);
  }
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(150);
  }
  delay(1000);
}
