//7seg

//By Ray Houghton 
//
//  0000
//  5  1
//  5  1
//  6666
//  4  2
//  4  2
//  3333
int CB0 = 2; //sets up common bits for four digits
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
int onDelay = 200;
int offDelay =0;

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
    digitalWrite(SEG0, HIGH);
    digitalWrite(SEG1, HIGH);
    digitalWrite(SEG2, HIGH);
    digitalWrite(SEG3, HIGH);
    digitalWrite(SEG4, HIGH);
    digitalWrite(SEG5, HIGH);
    digitalWrite(SEG6, HIGH);
    
    
    digitalWrite(CB0, HIGH);
    digitalWrite(CB1, HIGH);
    digitalWrite(CB2, HIGH);
    digitalWrite(CB3, HIGH);

    digitalWrite(SEG1, LOW);
    delay(onDelay);
    digitalWrite(SEG1, HIGH);
    delay(offDelay);
    digitalWrite(SEG2, LOW);
    delay(onDelay);
    digitalWrite(SEG2, HIGH);
    delay(offDelay);
    
    //digitalWrite(CB0, LOW);
    digitalWrite(SEG3, LOW);
    delay(onDelay);
    digitalWrite(SEG3, HIGH);
    delay(offDelay);
    digitalWrite(SEG4, LOW);
    delay(onDelay);
    digitalWrite(SEG4, HIGH);
    delay(offDelay);
    digitalWrite(SEG5, LOW);
    delay(onDelay);
    digitalWrite(SEG5, HIGH);
    delay(offDelay);
    digitalWrite(SEG0, LOW);
    delay(onDelay);
    digitalWrite(SEG0, HIGH);
    delay(offDelay);
   }
     
    
   
     
  
