#include <POP32.h>
void setup()
{
  oled.text(0, 0, "Hello POP - 32");
  oled.show();
  sw_OK_press();
  oled.clear();
  beep();
}

void loop()
{
  // motor(1, 100);
  // delay(1000);
  // motor(1, -100);
  // delay(1000);
  fd2(50, 50);
  delay(1000);
  bk2(50, 50);
  delay(1000);
  
}
