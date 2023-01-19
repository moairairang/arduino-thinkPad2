void Can2() {
  Forward(Speed, 100);
  TracJC(ACCSpeed, 100);  //เดินข้ามแยก1
  TracJC(ACCSpeed, 100);  //เดินข้ามแยก2
  TracJC(Speed, 50);      //เตรียมเลี้ยว
  TurnRight();            //เลี้ยวขวา 3
  TracJC(Speed, 50);       //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 4
  TracJC(Speed, 50);      //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 5
  TracJC(Speed, 50);       //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 6
  TracJC(Speed, 50);       //เตรียมเลี้ยว
  TurnLeft();             //เลี้ยวซ้าย 7
  TracJC(ACCSpeed, 100);  //เดินข้ามแยก8
  TracJC(ACCSpeed, 100);  //เดินข้ามแยก9
  TracJC(ACCSpeed, 100);  //เดินข้ามแยก 10
  TracJC(SlowSpeed, 0);    //เตรียมหยุด ท้ายสุด
  ao();
}
