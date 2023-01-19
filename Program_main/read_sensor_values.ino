void read_sensor_values()
{
  int sensorPin = 5 ;   //ใส่ตำแหน่งขา pin เริ่มต้น
  
   for(int x=0 ; x<16 ;x++)
   {
    sensor[x]=digitalRead(sensorPin);
    //sensorPin++
   }

  
  sensor[0]=digitalRead(A0);
  sensor[1]=digitalRead(A1);
  sensor[2]=digitalRead(A2);
  sensor[3]=digitalRead(A3);
  sensor[4]=digitalRead(A4);
   
  if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==0)&&(sensor[5]==1)&&(sensor[6]==1)&&(sensor[7]==1)&&
     (sensor[8]==1)&&(sensor[9]==1)&&(sensor[10]==1)&&(sensor[11]==1)&&(sensor[12]==1)&&(sensor[13]==1)&&(sensor[14]==1)&&(sensor[15]==1))
      {
        error=4;
      }
  else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==0)&&(sensor[5]==1)&&(sensor[6]==1)&&(sensor[7]==1)&&
         (sensor[8]==1)&&(sensor[9]==1)&&(sensor[10]==1)&&(sensor[11]==1)&&(sensor[12]==1)&&(sensor[13]==1)&&(sensor[14]==1)&&(sensor[15]==1))
     {
       error=3;
     }
  else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==0)&&(sensor[5]==1)&&(sensor[6]==1)&&(sensor[7]==1)&&
         (sensor[8]==1)&&(sensor[9]==1)&&(sensor[10]==1)&&(sensor[11]==1)&&(sensor[12]==1)&&(sensor[13]==1)&&(sensor[14]==1)&&(sensor[15]==1))
     {
       error=2;
     }
  else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==0)&&(sensor[5]==1)&&(sensor[6]==1)&&(sensor[7]==1)&&
          (sensor[8]==1)&&(sensor[9]==1)&&(sensor[10]==1)&&(sensor[11]==1)&&(sensor[12]==1)&&(sensor[13]==1)&&(sensor[14]==1)&&(sensor[15]==1))
     {
          error=1;
     }
  else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==0)&&(sensor[5]==1)&&(sensor[6]==1)&&(sensor[7]==1)&&
         (sensor[8]==1)&&(sensor[9]==1)&&(sensor[10]==1)&&(sensor[11]==1)&&(sensor[12]==1)&&(sensor[13]==1)&&(sensor[14]==1)&&(sensor[15]==1))
      {
         error=0;
      }
  else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==0)&&(sensor[5]==1)&&(sensor[6]==1)&&(sensor[7]==1)&&
         (sensor[8]==1)&&(sensor[9]==1)&&(sensor[10]==1)&&(sensor[11]==1)&&(sensor[12]==1)&&(sensor[13]==1)&&(sensor[14]==1)&&(sensor[15]==1))
     {
        error=-1;
     }
  else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==0)&&(sensor[5]==1)&&(sensor[6]==1)&&(sensor[7]==1)&&
         (sensor[8]==1)&&(sensor[9]==1)&&(sensor[10]==1)&&(sensor[11]==1)&&(sensor[12]==1)&&(sensor[13]==1)&&(sensor[14]==1)&&(sensor[15]==1))
     { 
      error=-2;
     }
  else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==0)&&(sensor[5]==1)&&(sensor[6]==1)&&(sensor[7]==1)&&
         (sensor[8]==1)&&(sensor[9]==1)&&(sensor[10]==1)&&(sensor[11]==1)&&(sensor[12]==1)&&(sensor[13]==1)&&(sensor[14]==1)&&(sensor[15]==1))
     {
       error=-3;
     }
  else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==0)&&(sensor[5]==1)&&(sensor[6]==1)&&(sensor[7]==1)&&
          (sensor[8]==1)&&(sensor[9]==1)&&(sensor[10]==1)&&(sensor[11]==1)&&(sensor[12]==1)&&(sensor[13]==1)&&(sensor[14]==1)&&(sensor[15]==1))
        {
          error=-4;
        }
  else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==1)&&(sensor[5]==1)&&(sensor[6]==1)&&(sensor[7]==1)&&
         (sensor[8]==1)&&(sensor[9]==1)&&(sensor[10]==1)&&(sensor[11]==1)&&(sensor[12]==1)&&(sensor[13]==1)&&(sensor[14]==1)&&(sensor[15]==1))
       {
         if(error==-4||error==-5)
           {
             error=-5;
           }
         else error=5;
      }
    Serial.print(sensor[0]); Serial.print(sensor[1]);Serial.print(sensor[2]);Serial.print(sensor[3]);Serial.println(sensor[4]);

}
