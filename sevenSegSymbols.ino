//sevenSegSymbols
//By Ray Houghton 
//Writes random non-alphanumerical characters to 7 segment display

int CB0 = 2; //sets up control bits for four digits
int CB1 = 3; 
int CB2 = 4;
int CB3 = 5;

int onDelay = 4; // governs cycle speed
int sym1; 
int sym2;
int sym3;
int sym4;
int i;

//For 4 digit 7 segment display
//connect pins 1 2 3 and 4 via 220 resistor to D2 3 4 and 5
//connect pins 5 6 7 8 9 10 and 11 to D6 7 8 9 10 11 12 
// for my display, control bits are high and segment bits are low to turn on segments.



void setup()  
  { 
pinMode(CB0, OUTPUT); //sets control pins as output
pinMode(CB1, OUTPUT);
pinMode(CB2, OUTPUT);
pinMode(CB3, OUTPUT);

  }
  
void loop() 

  {

//Map of segments    
//  0000
//  5  1
//  5  1
//  6666
//  4  2
//  4  2
//  3333
sym1 = random(1, 15); // Randomly selects which symbols are displayed
sym2 = random(1, 15);
sym3 = random(1, 15);
sym4 = random(1, 15);
for (i=1; i<30; i++)  // This loop causes the display to hold briefly before randomly 
                      //selecting next symbols 
{
digitalWrite(CB0, HIGH);
digitalWrite(CB2, LOW);
digitalWrite(CB1, LOW);
digitalWrite(CB3, LOW);   
symbols(sym1);  // turns on control bit for symbol 1
                //and calls the routine to display a symbol
    delay(onDelay);
digitalWrite(CB0, LOW);
digitalWrite(CB2, HIGH);
digitalWrite(CB1, LOW);
digitalWrite(CB3, LOW);
 symbols(sym2);    // turns on control bit for symbol 2
                   //and calls the routine to display a symbol etc. etc.
    delay(onDelay);
digitalWrite(CB0, LOW);
digitalWrite(CB2, LOW);
digitalWrite(CB1, HIGH);
digitalWrite(CB3, LOW);   
symbols(sym3);  
    delay(onDelay);
digitalWrite(CB0, LOW);
digitalWrite(CB2, LOW);
digitalWrite(CB1, LOW);
digitalWrite(CB3, HIGH);
 symbols(sym4);  
    delay(onDelay); 
}   
  
    
   }
     
    
//Symbols function takes a number as an argument and displays a symbol 
//that corresponds to the argument. Using the map of segments,
//new symbols can be added to the function as required.    
     
void symbols(int symbolNum)
  {
int SEG0 = 6; //sets up segment bits
int SEG1 = 7;
int SEG2 = 8;
int SEG3 = 9;
int SEG4 = 10;
int SEG5 = 11;
int SEG6 = 12;
int SEG7 = 13;

pinMode(SEG0, OUTPUT);
pinMode(SEG1, OUTPUT);
pinMode(SEG2, OUTPUT);
pinMode(SEG3, OUTPUT);
pinMode(SEG4, OUTPUT);
pinMode(SEG5, OUTPUT);
pinMode(SEG6, OUTPUT);

switch (symbolNum) {
    case 1:
    digitalWrite(SEG0, HIGH); //seg 0 to seg 6 are segment bits HIGH is off LOW is on
    digitalWrite(SEG1, LOW);  //seg 7 is the decimal point
    digitalWrite(SEG2, HIGH);
    digitalWrite(SEG3, HIGH);
    digitalWrite(SEG4, LOW);
    digitalWrite(SEG5, HIGH);
    digitalWrite(SEG6, LOW);
    digitalWrite(SEG7, HIGH);
      break;
    case 2:
    digitalWrite(SEG0, HIGH);
    digitalWrite(SEG1, HIGH);
    digitalWrite(SEG2, LOW);
    digitalWrite(SEG3, HIGH);
    digitalWrite(SEG4, HIGH);
    digitalWrite(SEG5, LOW);
    digitalWrite(SEG6, LOW);
    digitalWrite(SEG7, HIGH);
      break;
    case 3:
    digitalWrite(SEG0, HIGH);
    digitalWrite(SEG1, HIGH);
    digitalWrite(SEG2, HIGH);
    digitalWrite(SEG3, LOW);
    digitalWrite(SEG4, LOW);
    digitalWrite(SEG5, LOW);
    digitalWrite(SEG6, LOW);
    digitalWrite(SEG7, HIGH);
      break;
    case 4:
    digitalWrite(SEG0, HIGH);
    digitalWrite(SEG1, LOW);
    digitalWrite(SEG2, LOW);
    digitalWrite(SEG3, LOW);
    digitalWrite(SEG4, HIGH);
    digitalWrite(SEG5, HIGH);
    digitalWrite(SEG6, LOW);
    digitalWrite(SEG7, HIGH);
      break;
    case 5:
    digitalWrite(SEG0, HIGH);
    digitalWrite(SEG1, LOW);
    digitalWrite(SEG2, HIGH);
    digitalWrite(SEG3, LOW);
    digitalWrite(SEG4, LOW);
    digitalWrite(SEG5, HIGH);
    digitalWrite(SEG6, HIGH);
    digitalWrite(SEG7, HIGH);
      break;
    case 6:
    digitalWrite(SEG0, HIGH);
    digitalWrite(SEG1, HIGH);
    digitalWrite(SEG2, LOW);
    digitalWrite(SEG3, LOW);
    digitalWrite(SEG4, HIGH);
    digitalWrite(SEG5, LOW);
    digitalWrite(SEG6, HIGH);
    digitalWrite(SEG7, HIGH);
      break;
    case 7:
    digitalWrite(SEG0, LOW);
    digitalWrite(SEG1, HIGH);
    digitalWrite(SEG2, HIGH);
    digitalWrite(SEG3, LOW);
    digitalWrite(SEG4, HIGH);
    digitalWrite(SEG5, LOW);
    digitalWrite(SEG6, LOW);
    digitalWrite(SEG7, HIGH);
    break;
     case 8:
    digitalWrite(SEG0, LOW);
    digitalWrite(SEG1, LOW);
    digitalWrite(SEG2, HIGH);
    digitalWrite(SEG3, LOW);
    digitalWrite(SEG4, HIGH);
    digitalWrite(SEG5, HIGH);
    digitalWrite(SEG6, LOW);
    digitalWrite(SEG7, HIGH);
    break;
     case 9:
    digitalWrite(SEG0, LOW);
    digitalWrite(SEG1, HIGH);
    digitalWrite(SEG2, HIGH);
    digitalWrite(SEG3, LOW);
    digitalWrite(SEG4, LOW);
    digitalWrite(SEG5, HIGH);
    digitalWrite(SEG6, LOW);
    digitalWrite(SEG7, HIGH);
    break;
     case 10:
    digitalWrite(SEG0, LOW);
    digitalWrite(SEG1, HIGH);
    digitalWrite(SEG2, LOW);
    digitalWrite(SEG3, LOW);
    digitalWrite(SEG4, HIGH);
    digitalWrite(SEG5, HIGH);
    digitalWrite(SEG6, LOW);
    digitalWrite(SEG7, HIGH);
    break;
     case 11:
    digitalWrite(SEG0, HIGH);
    digitalWrite(SEG1, LOW);
    digitalWrite(SEG2, LOW);
    digitalWrite(SEG3, HIGH);
    digitalWrite(SEG4, HIGH);
    digitalWrite(SEG5, LOW);
    digitalWrite(SEG6, LOW);
    digitalWrite(SEG7, HIGH);
    break;
     case 12:
    digitalWrite(SEG0, HIGH);
    digitalWrite(SEG1, LOW);
    digitalWrite(SEG2, HIGH);
    digitalWrite(SEG3, HIGH);
    digitalWrite(SEG4, LOW);
    digitalWrite(SEG5, LOW);
    digitalWrite(SEG6, LOW);
    digitalWrite(SEG7, HIGH);
    break;
     case 13:
    digitalWrite(SEG0, LOW);
    digitalWrite(SEG1, HIGH);
    digitalWrite(SEG2, LOW);
    digitalWrite(SEG3, HIGH);
    digitalWrite(SEG4, LOW);
    digitalWrite(SEG5, LOW);
    digitalWrite(SEG6, LOW);
    digitalWrite(SEG7, HIGH);
    break;
     case 14:
    digitalWrite(SEG0, LOW);
    digitalWrite(SEG1, LOW);
    digitalWrite(SEG2, LOW);
    digitalWrite(SEG3, HIGH);
    digitalWrite(SEG4, LOW);
    digitalWrite(SEG5, HIGH);
    digitalWrite(SEG6, LOW);
    digitalWrite(SEG7, HIGH);
    break;
    default:
    digitalWrite(SEG0, HIGH);
    digitalWrite(SEG1, HIGH);
    digitalWrite(SEG2, HIGH);
    digitalWrite(SEG3, HIGH);
    digitalWrite(SEG4, HIGH);
    digitalWrite(SEG5, HIGH);
    digitalWrite(SEG6, HIGH);
    digitalWrite(SEG7, HIGH);

    break;
    }
  }
