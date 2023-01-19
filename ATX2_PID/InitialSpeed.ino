void InitialSpeed(int MotorSpeed) //กำหนดความเร็วให้หุ่นยนต์
{
  Error = 0;
  PreError = 0;
  Integral = 0;
  Ki = 0;
  MaxSpeed = MotorSpeed;

  if (MotorSpeed <= 50)
  {
    Kp = 10;   //ค่าที่ทำให้หุ่นยนต์เข้าเส้น ไม่หลุดเส้น
    Kd = 20;  //ค่าที่ทำให้หุ่นยนต์ไม่ส่าย
    LeftSpeed = MotorSpeed - 2;
    RightSpeed = MotorSpeed;
  }
  else if (MotorSpeed <= 70)
  {
    Kp = 15;   //ค่าที่ทำให้หุ่นยนต์เข้าเส้น ไม่หลุดเส้น
    Kd = 30;  //ค่าที่ทำให้หุ่นยนต์ไม่ส่าย
    LeftSpeed = MotorSpeed - 4;
    RightSpeed = MotorSpeed;
  }
  else if (MotorSpeed <= 100)
  {
    Kp = 20;   //ค่าที่ทำให้หุ่นยนต์เข้าเส้น ไม่หลุดเส้น
    Kd = 60;  //ค่าที่ทำให้หุ่นยนต์ไม่ส่าย
    LeftSpeed = MotorSpeed - 7 ;
    RightSpeed = MotorSpeed;
  }
}
