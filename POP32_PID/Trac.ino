void Trac(int MotorSpeed) //เดินตามเส้นปกติ 7 เซ็นเซอร์
{
  Convert7ADC();
  if (C == 0) Forward(MotorSpeed, 1); //ตัวกลางเจอสีดำ
  else if (L2 == 0)tl(70); //ด้านซ้ายเจอสีดำ
  else if (L1 == 0)tl(35); //ด้านซ้ายเจอสีดำ
  else if (R2 == 0)tr(70); //ด้านขวาเจอสีดำ
  else if (R2 == 0)tr(35); //ด้านขวายเจอสีดำ
}
