int counter = 0; //declaring the counter variable and setting it to 0

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600); //set the Baud rate to 9600hz. You can change this in the bottom right corner of the serial monitor
  pinMode(13, OUTPUT); //set pin 13 (the built in LED) to be an output  

  //set up the 3 LEDs to be outputs
  pinMode(5, OUTPUT); //LED 1
  pinMode(8, OUTPUT); //LED 2
  pinMode(11, OUTPUT); //LED 3

  //set up the 3 ground pins for the LEDs
  pinMode(4, OUTPUT); //Ground for LED 1
  pinMode(7, OUTPUT); //Ground for LED 2
  pinMode(10, OUTPUT); //Ground for LED 3

  //set up the ground pins for the 3 LEDs
  digitalWrite(4, LOW); //Ground for LED 1 gets set low
  digitalWrite(7, LOW); //Ground for LED 2 gets set low
  digitalWrite(10, LOW); //Ground for LED 3 gets set low

  //set up the input button
  pinMode(3, INPUT_PULLUP); //set pin 3 to be an input and turn on the pullup resistor so you're not connecting ground to 5v directly
}

void loop() 
{
  // put your main code here, to run repeatedly:
  //Serial.println("hi"); //Send the serial signal to the computer to print the string "hi" to the serial monitor
  Serial.println(counter); //print the value of the variable 'counter'
  delay(500); //delay 500 milliseconds
  counter = counter + 1; //take the previous value of 'counter', add 1, and store that new number in 'counter' again
  if (counter > 10) //if the variable 'counter' is greater than 10 (5 seconds), then do what's in the brackets
  {
    //Serial.println("timer is done!"); //print "timer is done!" to the serial moniter
    digitalWrite(13, HIGH); //turn on the built in LED by turning pin 13 high

    //Turn on the 3 LEDs
    digitalWrite(5, HIGH); //LED 1
    digitalWrite(8, HIGH); //LED 2
    digitalWrite(11, HIGH);  //LED 3
  }
  else //make sure the LEDs are off if the timer has not reached over 5
  {
    //Turn off the 3 LEDs 
    digitalWrite(5, LOW); //LED 1
    digitalWrite(8, LOW); //LED 2
    digitalWrite(11, LOW);  //LED 3
  }

  if (digitalRead(3) == LOW) //if the arduino reads pin 3 as LOW/0v/ground, then do what's in the brackets
  {
    counter = 0; //reset the timer variable back to 0.
  }
}
