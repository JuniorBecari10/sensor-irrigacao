#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define SENSOR_PIN 2
#define RELE_PIN   3

#define ENDERECO 0x3F
#define COLUNAS  16
#define LINHAS   2

#define DELAY 1000

LiquidCrystal_I2C lcd(ENDERECO, COLUNAS, LINHAS);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();

  pinMode(RELE_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);

  digitalWrite(RELE_PIN, HIGH);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);

  bool irrigar = digitalRead(SENSOR_PIN);

  if (irrigar) {
    digitalWrite(RELE_PIN, LOW);
    lcd.print("Terra: Seca");
  }

  else {
    digitalWrite(RELE_PIN, HIGH);
    lcd.print("Terra: Umida");
  }
  
  delay(DELAY);
}
