void Convert7ADC() //เปลี่ยนจาก analog เป็น digital (0 = ดำ,1 = ขาว)
{
  Read7ADC(); // อ่านค่าสี 
  if (L3 > RefL3) L3 = 0; else L3 = 1;  
  if (L2 > RefL2) L2 = 0; else L2 = 1;
  if (L1 > RefL1) L1 = 0; else L1 = 1;
  if (C > RefC)   C = 0;  else C = 1;
  if (R1 > RefR1) R1 = 0; else R1 = 1;
  if (R2 > RefR2) R2 = 0; else R2 = 1;
  if (R3 > RefR3) R3 = 0; else R3 = 1;

//  Read7ADC(); // อ่านค่าสี
//  if (L3 < RefL3) L3 = 1; else L3 = 0;   
//  if (L2 < RefL2) L2 = 1; else L2 = 0;
//  if (L1 < RefL1) L1 = 1; else L1 = 0;
//  if (C < RefC)   C = 1;  else C = 0;
//  if (R1 < RefR1) R1 = 1; else R1 = 0;
//  if (R2 < RefR2) R2 = 1; else R2 = 0;
//  if (R3 < RefR3) R3 = 1; else R3 = 0;
}
