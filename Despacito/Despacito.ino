/*Modified by,
Technical Team,REES52*/

#include "pitches.h"  // include library //
int led1=5;     // LED pin outout //
int led2=6;
int led3=7;
int led4=8;
int noteDuration;
int pauseBetweenNotes = 0;
int negra;
void setup() {
  pinMode(led1, OUTPUT);  // LED output pin //
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4,OUTPUT); 
  negra=640;
{
  pinMode(10, OUTPUT);  // relay output pin //
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
  
}
 
void loop() {
 
 
 
 
 chorus();
}
 
void chorus(){
  notars(negra, NOTE_D5);
  notars(negra, NOTE_CS5);digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led4,LOW);// (1)
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
 
  notars(negra/2, NOTE_B4);
  notars(negra/4, NOTE_FS4);digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led4, HIGH);// (3)
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
 
  notars(negra/4, NOTE_FS4);
  digitalWrite(led2, HIGH);
  digitalWrite(led4,LOW);// (2)
  
  delay(negra/4); digitalWrite(led3, HIGH);
  digitalWrite(led1, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
 
     notars(negra/4, NOTE_FS4);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);// (4)
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  notars(negra/4, NOTE_FS4);
  notars(negra/4, NOTE_FS4);digitalWrite(led1, HIGH);   //  (1)
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  notars(negra/4, NOTE_FS4);
 
  notars(negra/4, NOTE_B4);
  notars(negra/4, NOTE_B4);digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);//  (2)
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  notars(negra/4, NOTE_B4);digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);//  (3)
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  notars(negra/2, NOTE_B4);digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);//  (4)
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
 
  notars(negra/4, NOTE_A4); 
        
  notars(negra/4, NOTE_B4);digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);//  (1)
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(negra/4);
  delay(negra/4);
  notars(negra/4, NOTE_G4);  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);//  (2)
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(negra/4);digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);//  (3)
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
//......
  notars(negra/4, NOTE_G4); 
  notars(negra/4, NOTE_G4);digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);//  (4)
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  notars(negra/4, NOTE_G4); 
  notars(negra/4, NOTE_G4);digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);//  (1)
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  notars(negra/4, NOTE_G4); 
 
  notars(negra/4, NOTE_B4); 
  notars(negra/4, NOTE_B4);  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);//  (2)
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  notars(negra/4, NOTE_B4);digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);//  (3)
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  notars(negra/2, NOTE_B4);digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);//  (4)
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  
  notars(negra/4, NOTE_CS5);
  notars(negra/4, NOTE_D5);digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);//  (4)//  (1)
    digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(negra/4);
  delay(negra/4);
  notars(negra/4, NOTE_A4);digitalWrite(led1, LOW);
   digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);//  (4)//  (2)
    digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);  
  delay(negra/4);digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);//  (4)//  (3)
    digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  
  notars(negra/4, NOTE_A4);   
  notars(negra/4, NOTE_A4);digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);//  (4)//  (4)
    digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);       
  notars(negra/4, NOTE_A4);             
  notars(negra/4, NOTE_A4);digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);//  (4)//  (1)
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);            
  
  notars(negra/4, NOTE_D5);       
  notars(negra/4, NOTE_CS5);            
  notars(negra/4, NOTE_D5);digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);//  (4)//  (2)
    digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);      
  notars(negra/4, NOTE_CS5);digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);//  (4)//  (3) 
    digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);    
  notars(negra/2, NOTE_D5);digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);//  (4)//  (4)
    digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);           
  //
  notars(negra/4, NOTE_E5);
  notars_jai(negra/2, NOTE_E5,negra/4);  // (1)
//  notars(negra/2, NOTE_E5); 
 
    //-----------------------------------------------
    tone(3,NOTE_CS5 ,negra*3/4);
    //-----------------------------------------------
    delay(negra/4);
    delay(negra/4);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);//  (4)//  (2)
    digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);                
    delay(negra/4);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);//  (4)//  (3)
    digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);                
  noTone(3);
  delay(negra/4);
  
  //--------------
  delay(negra/4);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);//  (4)//  (4)
    digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
 
  delay(negra/4);
  delay(negra/4);     
 
}
void notars(int noteDuration,int LaNota ){
 
  //noteDuration=negra/4;
  tone(3,LaNota ,noteDuration*0.9);
//    pauseBetweenNotes = noteDuration * 1.30;
    pauseBetweenNotes = noteDuration * 1.1;
    delay(pauseBetweenNotes);
    noTone(3); 
 
 
}
void notars_jai(int noteDuration,int LaNota ,int Desfase){
 
  //noteDuration=negra/4;
  tone(3,LaNota ,noteDuration*0.9);
//    pauseBetweenNotes = noteDuration * 1.30;
    pauseBetweenNotes = noteDuration * 1.1;
    delay(Desfase);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);//  
    digitalWrite(led4, HIGH);// (1)
    digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
      delay(pauseBetweenNotes-Desfase);
    noTone(3); 
 
 
}
 
