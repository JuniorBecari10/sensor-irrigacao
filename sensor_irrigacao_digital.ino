#include <Adafruit_LiquidCrystal.h>

#define RELE_PIN 3
#define DELAY    1000

Adafruit_LiquidCrystal lcd(0);

void setup()
{
  pinMode(RELE_PIN, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, INPUT);
  
  lcd.begin(16, 2);
  lcd.setBacklight(1);
}

void loop()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  
  digitalWrite(A0, HIGH);
  bool irrigar = analogRead(A1) < 400;
  
  if (irrigar) {
  	digitalWrite(RELE_PIN, HIGH);
    lcd.print("Terra: Seca");
  }
  
  else {
    digitalWrite(RELE_PIN, LOW);
    lcd.print("Terra: Umida");
  }
  
  delay(DELAY);
}
