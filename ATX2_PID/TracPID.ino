void TracPID()    //Trac เส้นแบบ PID 7 Sensor
{
  int Output, LeftOutput, RightOutput;
  
  Output = (Kp * Error) + (Ki * Integral) + (Kd * (Error - PreError)); //สมการ PID
  LeftOutput = LeftSpeed + Output;  //ความเร็วมอเตอร์ด้านซ้าย
  RightOutput = RightSpeed - Output;  // ความเร็วมอเตอร์ด้านขวา
  if (LeftOutput > MaxSpeed) LeftOutput = MaxSpeed;
  if (RightOutput > MaxSpeed) RightOutput = MaxSpeed;
  if (LeftOutput < 0) LeftOutput = 0;
  if (RightOutput < 0) RightOutput = 0;
  fd2(LeftOutput,RightOutput);
  PreError = Error;
  Integral += Error; 
}
