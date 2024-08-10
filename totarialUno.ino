#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); // Format -> (Address,Width,Height )
int teks =0;


void setup()
{
    lcd.init();     // initialize the lcd
    lcd.backlight(); // untuk menghidupkan lampu lcd -> lebih baik memakai fitur ini.
     lcd.print("Awan Automation");
     delay(2000);
} 
void loop()
{
    lcd.clear();    // Clear the display buffer
    lcd.setCursor(0, 0);     // Set cursor (Column, Row)
    lcd.print("Hallo");      // print "Hello" at (0, 0) 
    lcd.setCursor(0,1);   // Set cursor (Column, Row)
    lcd.print("Temp:");  // print Halllooo at (0, 1)
    lcd.setCursor(10,1);   // Set cursor (Column, Row)
    lcd.print("RH:");  // print Halllooo at (0, 1)
    delay(500); 


}