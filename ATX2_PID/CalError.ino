void CalError() { // การคำนวณค่า Error
  Convert7ADC(); //เปลี่ยนจาก analog เป็น digital (0 = ดำ,1 = ขาว)
  if ((L3 == 1) && (L2 == 1) && (L1 == 1) && (C == 1) && (R1 == 1) && (R2 == 1) && (R3 == 0)) Error = 6;
  else if ((L3 == 1) && (L2 == 1) && (L1 == 1) && (C == 1) && (R1 == 1) && (R2 == 0) && (R3 == 0)) Error = 5;
  else if ((L3 == 1) && (L2 == 1) && (L1 == 1) && (C == 1) && (R1 == 1) && (R2 == 0) && (R3 == 1)) Error = 4;
  else if ((L3 == 1) && (L2 == 1) && (L1 == 1) && (C == 1) && (R1 == 0) && (R2 == 0) && (R3 == 1)) Error = 3;
  else if ((L3 == 1) && (L2 == 1) && (L1 == 1) && (C == 1) && (R1 == 0) && (R2 == 1) && (R3 == 1)) Error = 2;
  else if ((L3 == 1) && (L2 == 1) && (L1 == 1) && (C == 0) && (R1 == 0) && (R2 == 1) && (R3 == 1)) Error = 1;
  else if ((L3 == 1) && (L2 == 1) && (L1 == 1) && (C == 0) && (R1 == 1) && (R2 == 1) && (R3 == 1)) Error = 0;
  else if ((L3 == 1) && (L2 == 1) && (L1 == 0) && (C == 0) && (R1 == 1) && (R2 == 1) && (R3 == 1)) Error = -1;
  else if ((L3 == 1) && (L2 == 1) && (L1 == 0) && (C == 1) && (R1 == 1) && (R2 == 1) && (R3 == 1)) Error = -2;
  else if ((L3 == 1) && (L2 == 0) && (L1 == 0) && (C == 1) && (R1 == 1) && (R2 == 1) && (R3 == 1)) Error = -3;
  else if ((L3 == 1) && (L2 == 0) && (L1 == 1) && (C == 1) && (R1 == 1) && (R2 == 1) && (R3 == 1)) Error = -4;
  else if ((L3 == 0) && (L2 == 0) && (L1 == 1) && (C == 1) && (R1 == 1) && (R2 == 1) && (R3 == 1)) Error = -5;
  else if ((L3 == 0) && (L2 == 1) && (L1 == 1) && (C == 1) && (R1 == 1) && (R2 == 1) && (R3 == 1)) Error = -6;
  else if ((L3 == 0) && (L2 == 0) && (L1 == 0) && (C == 0) && (R1 == 0) && (R2 == 0) && (R3 == 0)) Error = 100;
  else if ((L3 == 0) && (L2 == 0) && (L1 == 0) && (C == 0) ) Error = 101;
  else if ((C == 0) && (R1 == 0) && (R2 == 0) && (R3 == 0)) Error = 102;
}
