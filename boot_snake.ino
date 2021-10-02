#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define _col 16
#define _lin 2
#define _end 0x27

LiquidCrystal_I2C lcd(_end, _col, _lin);

void setup()
{
    lcd.init();
    lcd.backlight();
    lcd.clear();
    lcd.print("  Loading...  ");
    delay(1000);
    lcd.setCursor(0, 1);
    lcd.print("OK!");
    delay(1000);
    lcd.noBacklight();
    delay(1000);
    lcd.backlight();
    delay(1000);
    lcd.clear();
}

void loop()
{
    lcd.setCursor(16, 0);
    lcd.print("* >************** ");
    delay(1000);
    for (int i = 0; i < 36; i++)
    {
        lcd.scrollDisplayLeft();
        delay(200);
    }
    lcd.clear();
    lcd.setCursor(16, 1);
    lcd.print(" **************< * ");
    delay(1000);
    for (int i = 0; i < 40; i++)
    {
        if (i == 12)
        {
            lcd.setCursor(18, 1);
            lcd.print(" **************<* ");
            delay(400);
            lcd.noDisplay();
            delay(400);
            lcd.display();
            delay(400);
            lcd.noDisplay();
            delay(400);
            lcd.display();
            delay(400);
            lcd.display();
            delay(400);
            lcd.setCursor(18, 1);
            lcd.print(" **************= ");
        }
        lcd.scrollDisplayRight();
        delay(200);
    }

    delay(400);
    lcd.noDisplay();
    delay(400);
    lcd.display();
    delay(400);
    lcd.noDisplay();
    delay(400);
    lcd.display();
    delay(400);
    lcd.display();
    delay(400);

    lcd.clear();
    lcd.setCursor(16, 0);
    lcd.print("By Tiago A. F.");
    delay(1000);
    for (int i = 0; i < 15; i++)
    {
        lcd.scrollDisplayLeft();
        delay(20);
    }
    delay(1000);
    delay(400);
    lcd.noDisplay();
    delay(400);
    lcd.display();
    delay(400);
    lcd.noDisplay();
    delay(400);
    lcd.display();
    delay(400);
    lcd.display();
    delay(400);

    for (int i = 0; i < 15; i++)
    {
        lcd.scrollDisplayRight();
        delay(20);
    }
    delay(1000);
    lcd.clear();
}
