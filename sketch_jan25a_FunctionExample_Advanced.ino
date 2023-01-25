// this sketch shows how functions work. it creates 4 variables that are used as containers for numbers to be multiplied and 2 variables used to execute a function. 
//kappa is the first instance of the funciton it uses 2 variables, delta is the second instance of the function it uses two different variables passed to the same function. mmf(my multiply funciton)

void setup() {// put your setup code here, to run once
  Serial.begin(9600);
}

int mmfCounter = 0; //counts how mnay times the loop has been run

void loop() { // put your main code here, to run repeatedly
  int eye = 2; //first math variable
  int jackal = 3; //second math variable
  int kappa; //result????
  int ball = 10; //second set of variables first number
  int rabbit = 13; //second set second number
  int delta; // second result
  
  kappa = myMultiplyFunction(eye,jackal); // kappa now contains 6???
  Serial.println((String)kappa+ " kappa"); //converts the output of kappa to a string and prints kappa
  delay(500); //wait half a second

  delta =myMultiplyFunction(ball,rabbit); // delta contains different numbers than kappa
  Serial.println((String)delta + " delta"); //converts the output of delta to a sting and prints delta
  delay(500); //wait half a second

  mmfCounter+=1; //as long as this is after both kappa and delta instances of myMultiplicationFunction it will show how many times they have both been run (adds 1 to itself)
  Serial.println("Loop has run " + (String)mmfCounter + " times."); //print how many times the loop has been run?
  Serial.println("--------------"); // divider
}

//the function is declared here outside of loop or setup
int myMultiplyFunction(int x, int y){ //takes two integer variables 
  int result; //makes a variable to do the math
  result = x * y; //math of the function executed here
  return result; // returns the result of the math executed
}