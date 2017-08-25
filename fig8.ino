//fig8

int CB0 = 2; //sets up control bits for four digits
int CB1 = 3; 
int CB2 = 4;
int CB3 = 5;
int SEG0 = 6; //sets up segment bits
int SEG1 = 7;
int SEG2 = 8;
int SEG3 = 9;
int SEG4 = 10;
int SEG5 = 11;
int SEG6 = 12;
int onDelay = 100;
int offDelay = 20;
//For 4 digit 7 segment display
//connect pins 1 2 3 and 4 via 220 resistor to D2 3 4 and 5
//connect pins 5 6 7 8 9 10 and 11 to D6 7 8 9 10 11 12 



void setup()  
  { 
pinMode(CB0, OUTPUT);
pinMode(CB1, OUTPUT);
pinMode(CB2, OUTPUT);
pinMode(CB3, OUTPUT);
pinMode(SEG0, OUTPUT);
pinMode(SEG1, OUTPUT);
pinMode(SEG2, OUTPUT);
pinMode(SEG3, OUTPUT);
pinMode(SEG4, OUTPUT);
pinMode(SEG5, OUTPUT);
pinMode(SEG6, OUTPUT);
  }
  
void loop() 

  {

    digitalWrite(SEG0, HIGH); //turn all segments off
    digitalWrite(SEG1, HIGH);
    digitalWrite(SEG2, HIGH);
    digitalWrite(SEG3, HIGH);
    digitalWrite(SEG4, HIGH);
    digitalWrite(SEG5, HIGH);
    digitalWrite(SEG6, HIGH);
    
//  0000
//  5  1
//  5  1
//  6666
//  4  2
//  4  2
//  3333
    
    digitalWrite(CB0, HIGH); //turn on all digits
    digitalWrite(CB1, HIGH);
    digitalWrite(CB2, HIGH);
    digitalWrite(CB3, HIGH);

    digitalWrite(SEG0, LOW); // 0 ON
    delay(onDelay);
    digitalWrite(SEG1, LOW); // 1 ON
    delay(onDelay);
    digitalWrite(SEG0, HIGH); //0 OFF
    delay(offDelay);
    digitalWrite(SEG6, LOW);  //6 ON
    delay(offDelay);
    
    //digitalWrite(CB0, LOW);
    digitalWrite(SEG1, HIGH); // 1 OFF
    delay(offDelay);
    digitalWrite(SEG4, LOW); // 4 ON
    delay(onDelay);
    digitalWrite(SEG6, HIGH); // 6 OFF
    delay(offDelay);
    digitalWrite(SEG3, LOW); // 3 ON
    delay(onDelay);
    digitalWrite(SEG4, HIGH); // 4 OFF
    delay(offDelay);
    digitalWrite(SEG2, LOW); // 2 ON
    delay(onDelay);
    digitalWrite(SEG3, HIGH); // 3 OFF 
    delay(offDelay);
    digitalWrite(SEG6, LOW); // 6 ON 
    delay(onDelay);
    digitalWrite(SEG2, HIGH); // 2 OFF
    delay(offDelay);
    digitalWrite(SEG5, LOW);// 5 ON
    delay(onDelay);
    digitalWrite(SEG6, HIGH); 
    delay(offDelay);
    digitalWrite(SEG5, HIGH);
    delay(offDelay);
    
   }
     
    
   
     
void symbols(int symbolNum)
  {
int CB0 = 2; //sets up control bits for four digits
int CB1 = 3; 
int CB2 = 4;
int CB3 = 5;
int SEG0 = 6; //sets up segment bits
int SEG1 = 7;
int SEG2 = 8;
int SEG3 = 9;
int SEG4 = 10;
int SEG5 = 11;
int SEG6 = 12;
  }
