  //write variables here
int myVariable = 5;
int my2Variable = 5;
float myFloatVariable = 5;
char myChar;
int i;
int myVariableBreak= 84; /*ascii character to break the loop on, higher than 127 makes a infinite loop, below 33 is non printing characters
                            33 print ends on space
                            34 print ends on !
                            https://commons.wikimedia.org/wiki/File:ASCII-Table-wide.svg = ascii table
                            the print sequence will end on the previous ascii value to myVariableBreak.. i think
                            */
                            
//String input; //input variable accepts user input from the serial message port

//https://www.youtube.com/watch?v=zJ-LqeX_fLU&ab_channel=freeCodeCamp.org tutorial video 4hrs

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Type Some number: ");
}

void loop() {
  mainMachine();
}

void mainMachine() { 
  if(Serial.available()){ // I think this starts the serial looking for input "hey start looking for stuff"
    int input = Serial.parseInt();//parseint and available are both functions inside Serial class. Serial is a static class bc you don't have to declare it .parseint returns a number which becomes the variable input
    
    Serial.println("You typed: " + (String)input + "!"); 
    for (char myChar=0; myChar < input; ++myChar) { // this is the main logic, myChar=0 then as long as myChar < input which we got in line 30, do what is in the for loop and then do myChar++
      Serial.println("Inside the for loop: myChar =" + (String)myChar); //this is called casting an int as a string
    } 
    Serial.readStringUntil('\n');
  }

  
}
