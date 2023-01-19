void Can1() {
  Forward(Speed, 100);
  TracJC(Speed, 30);       //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 1
  TracJC(Speed,30);       //เตรียมเลี้ยว 
  TurnLeft();             //เลี้ยวซ้าย 2
  TracJC(Speed, 30);       //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 3
  TracJC(SlowSpeed, 30);       //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 4
  TracJC(Speed, 30);       //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 5
  TracJC(Speed,30);       //เตรียมเลี้ยว
  TurnRight();            //เลี้ยวขวา 6
  TracJC(Speed,30);       //เตรียมเลี้ยว
  TurnRight();            //เลี้ยวขวา 7
  TracJC(ACCSpeed, 100);  //เดินข้ามแยก8
  TracJC(Speed,50);       //เตรียมเลี้ยว
  TurnRight();            //เลี้ยวขวา 9
  TracJC(Speed,50);       //เตรียมเลี้ยว
  TracJC(ACCSpeed, 100);  //เดินข้ามแยก10
  TracJC(Speed,50);       //เตรียมเลี้ยว
  TracJC(SlowSpeed,50);  //เดินข้ามแยก11
  TracJC(SlowSpeed,30);       //เตรียมเลี้ยว
  ao();
  delay(500);
  TurnLeft();             //เลี้ยวซ้าย 12
  
  TracJC(ACCSpeed, 200);  //เดินข้ามแยก13
  TracJC(ACCSpeed, 200);  //เดินข้ามแยก14

  TracJC(0, 0);    //เตรียมหยุด ท้ายสุด

  ao();

}
