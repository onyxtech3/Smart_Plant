#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int senzorPin = A0;

const int valoareAer = 600;  
const int valoareApa = 250;  

void setup() {
  lcd.init();
  lcd.backlight();
  
  lcd.print("System ON!");
  delay(1500);
}

void loop() {
  int valoareSenzor = analogRead(senzorPin);
  int umiditate = map(valoareSenzor, valoareAer, valoareApa, 0, 100);
  umiditate = constrain(umiditate, 0, 100);
  
  lcd.setCursor(0, 0);
  lcd.print("Humidity: ");
  lcd.print(umiditate);
  lcd.print("%   ");
  
  lcd.setCursor(0, 1);
  if (umiditate <= 25) {
    lcd.print("STATUS: DRY");
  } 
  else if (umiditate > 25 && umiditate <= 50) {
    lcd.print("STATUS: THIRSTY");
  } 
  else if (umiditate > 50 && umiditate <= 80) {
    lcd.print("STATUS: OK");
  } 
  else {
    lcd.print("STATUS: TOO WET");
  }
  
  delay(1000);
}
