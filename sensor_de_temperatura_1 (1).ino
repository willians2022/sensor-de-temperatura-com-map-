#include <Wire.h>
#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

void setup() {
  lcd.begin(16, 2);
  lcd.setBacklight(1);
  Serial.begin(9600);
}

void loop() {

  // Leitura com map()
  int temperatura = map(analogRead(A0), 0, 1023, -49, 450);

  String status;

  // Condições
  if (temperatura >= 15 && temperatura <= 17) {
    status = "Esfriando";
  }
  else if (temperatura == 18) {
    status = "Frio";
  }
  else if (temperatura == 19) {
    status = "Ambiente";
  }
  else if (temperatura >= 20 && temperatura <= 22) {
    status = "Refrescante";
  }
  else if (temperatura >= 23 && temperatura <= 30) {
    status = "Calor";
  }
  else if (temperatura > 30) {
    status = "Muito calor";
  }
  else {
    status = "Muito Frio ";
  }

  // Serial
  Serial.print("Temp: ");
  Serial.println(temperatura);

  // Display
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperatura);
  lcd.print("C   ");

  lcd.setCursor(0, 1);
  lcd.print(status);
  lcd.print("        ");

  delay(2000);
}