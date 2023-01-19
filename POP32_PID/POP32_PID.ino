#include <POP32.h>
int L3, L2, L1, C, R1, R2, R3; //ตัวเเปลในการเก็บค่าสีจากเซ็นเซอร์
int RefL3, RefL2, RefL1, RefC, RefR1, RefR2, RefR3; //ตัวเเปลในการเก็บค่าเฉลี่ยสีจากเซ็นเซอร์
int Speed, ACCSpeed, SlowSpeed, TurnSpeed, LeftSpeed, RightSpeed; //ตัวเเปลความเร็ว
int Kp, Ki, Kd, Error, PreError, Integral, MaxSpeed; //ตัวแปรเกี่ยวกับ PID

void setup() {
  Speed = 50;       //ความเร็ววิ่งปกติ
  ACCSpeed = 100;    //ความเร็วตอนเร่ง
  SlowSpeed = 30;   //ความเร็วตอนช้า
  TurnSpeed = 60;   //ความเร็วตอนเลี้ยว
  beep(1);          //เสียงบัซเซอร์ 0-3
  Show7ADC();       //เเสดงค่าสีที่หน้าจอLCD
  Initial7ADC();    //ใส่ค่าเฉลี่ยสีของเซ็นเซอร์
  // oled.text(0, 0, "Hello POP - 32");
  // oled.show();
  sw_OK_press();
  //oled.clear();
  beep(2);
  // Forward(int MotorSpeed,int Time)  //เดินหน้าหน่วงเวลา
  // Forward(80,50);
  InitialSpeed(50);   //ทดสอบวิ่งที่ 50 ลองปรับขึ้นเรื่อยๆ
}

void loop() {

  // Show7ADC();    //เเสดงค่าสีที่หน้าจอLCD (ตอนใช้งานจริงให้ใส่ Comment ใว้)
  // CalError();       //เรียกใช้ CalError
  // TracPID();        //เดินตามเส้นแบบ PID
  // TracJC();        //เดินตามเส้นแบบ JC
  // Can1();
  Can2();
}
