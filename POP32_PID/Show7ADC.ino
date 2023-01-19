void Show7ADC() // เเสดงค่าสีที่หน้าจอLCD
{
  Read7ADC();
  oled.clear();           //เคลียร์หน้าจอ
  // glcdFillScreen(GLCD_BLUE); //กำหนดพื้นหลังให้เป็นสีน้ำเงิน
  // glcdMode(3);               //กำหนดโหมดของ270องศา
  // setTextColor(GLCD_RED);    //กำหนดสีของตัวอักษรให้เป็นสีเเดง
  // setTextSize(1);            //กำหนดขนาดของตัวอักษร
  oled.text(0, 0, "L3 = %d", L3);
  oled.text(1, 0, "L2 = %d", L2);
  oled.text(2, 0, "L1 = %d", L1);
  oled.text(3, 0, "C = %d", C);
  oled.text(4, 0, "R1 = %d", R1);
  oled.text(5, 0, "R2 = %d", R2);
  oled.text(6, 0, "R3 = %d", R3);
  oled.show();
}
