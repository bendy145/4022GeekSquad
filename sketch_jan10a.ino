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

//https://www.youtube.com/watch?v=zJ-LqeX_fLU&ab_channel=freeCodeCamp.org tutorial video 4hrs

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println(myVariable++); //print the value of variables
Serial.println(++my2Variable);
Serial.println(++myFloatVariable);


Serial.println("================begin test===============================================");
  /*for (int i=1; i < 1000; i++) {
    Serial.println(i);      //loop testing code
  } */
  for (char myChar=0; myChar < myVariableBreak; myChar++) {
    Serial.println("Inside the for loop: myChar ="); //show where the loop is in it's runtime
    Serial.println(myChar); //print the value of myChar
    //myVariableBreak--;

    if (myChar > myVariableBreak+1)
      break;
  }
Serial.println("---------------------test end--------=-=----===========================-----");
}



void loop() {
  // put your main code here, to run repeatedly:

}
