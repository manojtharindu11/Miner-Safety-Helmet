#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 4);  // Set the I2C address and dimensions of your display

void setup() {
  lcd.begin();                    // Initialize the LCD
  lcd.backlight();                // Turn on the backlight
  lcd.setCursor(0, 1);            // Set the cursor to the beginning of the first line
  lcd.print("_____MINOR______");  // Print a message
  lcd.setCursor(-4, 2);           // Set the cursor to the beginning of the first line
  lcd.print("__SAFETY HELMET_");
  delay(3000);
  lcd.clear();
}

void loop() {
  int temperature, mq4, mq7;
  lcd.setCursor(0, 0);  // Set the cursor to the beginning of the second line
  lcd.print("_MINE CONDITION_");

  lcd.setCursor(0, 1);  // Set the cursor to the beginning of the second line
  lcd.print("Temperature: ");
  lcd.print(temperature);
  lcd.setCursor(-4, 2);  // Set the cursor to the beginning of the second line
  lcd.print("Methane    : ");
  lcd.print(mq4);
  lcd.setCursor(-4, 3);  // Set the cursor to the beginning of the second line
  lcd.print("CO         : ");
  lcd.print(mq7);

  delay(1000);  // Delay for 1 second
}
