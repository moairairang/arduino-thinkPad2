#include <ATX2.h>	// ATX2 Board
float Kp = 10, Ki = 0, Kd = 0 ;
float error = 0, P = 0, I = 0, D = 0, PID_Value = 0;
float prev_error = 0, prev_I = 0;

int base_speed = 10;
int sensor[5] = {};

void setup() {
  XIO();  // ATX2 initialize
  OK();
  setTextSize(1.5);
  glcdMode(3);
  pinMode(sensor[0], INPUT);
  pinMode(sensor[1], INPUT);
  pinMode(sensor[2], INPUT);
  pinMode(sensor[3], INPUT);
  pinMode(sensor[4], INPUT);
}


void loop() {
  sensor[0] = digitalRead(24); //edit
  sensor[1] = digitalRead(25); //edit
  sensor[2] = digitalRead(26); //edit
  sensor[3] = digitalRead(27); //edit
  sensor[4] = digitalRead(28); //edit

  if ((sensor[0] == 1) && (sensor[1] == 1) && (sensor[2] == 1) && (sensor[3] == 1) && (sensor[4] == 0)) {
    error = 4;
  }
  else if ((sensor[0] == 1) && (sensor[1] == 1) && (sensor[2] == 1) && (sensor[3] == 0) && (sensor[4] == 0)) {
    error = 3;
  }
  else if ((sensor[0] == 1) && (sensor[1] == 1) && (sensor[2] == 1) && (sensor[3] == 0) && (sensor[4] == 1)) {
    error = 2;
  }
  else if ((sensor[0] == 1) && (sensor[1] == 1) && (sensor[2] == 0) && (sensor[3] == 0) && (sensor[4] == 1)) {
    error = 1;
  }
  else if ((sensor[0] == 1) && (sensor[1] == 1) && (sensor[2] == 0) && (sensor[3] == 1) && (sensor[4] == 1)) {
    error = 0;
  }
  else if ((sensor[0] == 1) && (sensor[1] == 0) && (sensor[2] == 0) && (sensor[3] == 1) && (sensor[4] == 1)) {
    error = -1;
  }
  else if ((sensor[0] == 1) && (sensor[1] == 0) && (sensor[2] == 1) && (sensor[3] == 1) && (sensor[4] == 1)) {
    error = -2;
  }
  else if ((sensor[0] == 0) && (sensor[1] == 0) && (sensor[2] == 1) && (sensor[3] == 1) && (sensor[4] == 1)) {
    error = -3;
  }
  else if ((sensor[0] == 0) && (sensor[1] == 1) && (sensor[2] == 1) && (sensor[3] == 1) && (sensor[4] == 1)) {
    error = -4;
  }
  else if ((sensor[0] == 1) && (sensor[1] == 1) && (sensor[2] == 1) && (sensor[3] == 1) && (sensor[4] == 1)) {
    if (error == -4 || error == -5) {
      error = -5;
    }
    else error = 5;
  }

  //glcd(0,0,"S0=%d",sensor[0]);
  //glcd(1,0,"S1=%d",sensor[1]);
  //glcd(2,0,"S2=%d",sensor[2]);
  //glcd(3,0,"S3=%d",sensor[3]);
  //glcd(4,0,"S4=%d",sensor[4]);
  //glcd(8, 0,"error=%d", error);

  //---------- PID Control-----------
  P = error;
  I = I + prev_I;
  D = error - prev_error;

  PID_Value = (Kp * P) + (Ki * I) + (Kd * D);

  prev_I = I;
  prev_error = error;


  //--------- Motor Control ----------
  int Lspeed = base_speed - PID_Value;
  int Rspeed = base_speed + PID_Value;

  if (Lspeed < 0) {
    Lspeed = 0;
  } else if (Lspeed > 50) {
    Lspeed = 50;
  }

  if (Rspeed < 0) {
    Rspeed = 0;
  } else if (Rspeed > 50) {
    Rspeed = 50;
  }

  //glcd(5, 0,"Lspeed=%d", Lspeed);
  //glcd(6, 0,"Rspeed=%d", Rspeed);
  //glcd(7, 0,"PID=%d", PID_Value);
  
  motor(1, Lspeed);
  motor(2, Rspeed);
}
