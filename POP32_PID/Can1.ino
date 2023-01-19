void Can1() {
  Forward(Speed, 100);
  TracJC(Speed, 50);       //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 1
  TracJC(Speed,50);       //เตรียมเลี้ยว 
  TurnLeft();             //เลี้ยวซ้าย 2
  TracJC(Speed, 50);       //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 3
  TracJC(Speed, 50);       //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 4
  TracJC(Speed, 50);       //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 5
  TracJC(Speed,50);       //เตรียมเลี้ยว
  TurnRight();            //เลี้ยวขวา 6
  TracJC(Speed,50);       //เตรียมเลี้ยว
  TurnRight();            //เลี้ยวขวา 7
  TracJC(ACCSpeed, 100);  //เดินข้ามแยก8
  TracJC(Speed,50);       //เตรียมเลี้ยว
  TurnRight();            //เลี้ยวขวา 9
  TracJC(ACCSpeed, 100);  //เดินข้ามแยก10
  TracJC(Speed,50);       //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 11
  TracJC(ACCSpeed, 100);  //เดินข้ามแยก12
  TracJC(ACCSpeed, 100);  //เดินข้ามแยก13
  TracJC(SlowSpeed, 0);    //เตรียมหยุด ท้ายสุด
  ao();

}
