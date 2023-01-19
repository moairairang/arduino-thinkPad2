void RFID_Match(String card_id) 
{
   int map_card_no_flag;
  
  if (card_id.indexOf("96:b3:6f:f7") == 0 )                  // Station No.1
  {    
    //channel = 0;
    
       // สั่งให้ Stop Motor     
       
    Serial.println("Station No.1");
   
  }
  else if (card_id.indexOf("29:8d:d3:b9") == 0 )                     // Station No.2
  {      
    //channel = 1;
     
    
   
     Serial.println("Station No.2");
   
  }  else if (card_id.indexOf("06:ec:9c:f8") == 0 )                  // Station No.3
  {       
   //channel = 2;
    
      Serial.println("Station No.3");
      
  } 
  else if (card_id.indexOf("2c:11:7a:59") == 0 )                    // Station No.4
  {      
    //channel = 3;
  
    
    Serial.println("Station No.4");
  }
  else if (card_id.indexOf("2a:41:80:25") == 0 )                    // Station No.5
  {         
    //channel = 4;
   
    
    Serial.println("Station No.5");
  }
  else if (card_id.indexOf("9c:7d:b9:79") == 0 )                // Station No.6 
  {         
    //channel = 5;
   
    Serial.println("Station No.6");
  }

  //*****************************  OZONE  
  else if (card_id.indexOf("44:14:7b:59") == 0 )              // Station No.7
  {         
    //channel = 6;
  
    Serial.println("Station No.7");
  }
  else if (card_id.indexOf("49:1e:4b:c1") == 0 )             // Station No.8
  {         
    //channel = 7;
    
    Serial.println("Station No.8");
  }
  else if (card_id.indexOf("94:4a:10:79") == 0 )           // Station No.9
  {     
    //channel = 8;
    
     Serial.println("Station No.9"); 
  }
  else if (card_id.indexOf("d2:fa:b9:79") == 0 )             // Station No.10
  {        
    //channel = 9;
    
    Serial.println("Station No.10"); 
  }
  else if (card_id.indexOf("84:13:df:db") == 0 )              // Station No.11
  {        
    //channel = 10;
    
    Serial.println("Station No.11"); 
  }
  else if (card_id.indexOf("c6:bb:22:79") == 0 )             // Station No.12
  {                                                                
    //channel = 11 ;
    
     Serial.println("Station No.12"); 
  }
  else if (card_id.indexOf("49:b1:0c:b3") == 0 )            // Office Station
  {         
    //channel = 99 ;
   
     Serial.println("Office Station"); 
  }
 
}
