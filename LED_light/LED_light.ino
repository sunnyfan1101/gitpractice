#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() 
{
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello?");
  delay(1000);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("DUMDUM");
  delay(1000);
  lcd.clear();
  for(int i=0;i<16;i++)
  {
    lcd.setCursor(i,1);
    lcd.print("I love corn");
    delay(100);
    lcd.clear();
  }
  delay(1000);
}
