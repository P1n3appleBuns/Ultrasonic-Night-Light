/*Ultrasonic Night Light*/

const int led = 3; //LED Pin
const int trigger = 9; //Trigger Pin
const int echo = 10; //Echo Pin
const int threshold = 20; //Distance in cm that triggers the LED lights
const unsigned long lighttime = 10000; //Amount of time in (ms) the lights are on

void setup() {

  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  Serial.begin(9600);

}

void loop() {

  long distance = getDistance();

  if(distance > 0 && distance <= distanceThreshold){

    digitalWrite(led, HIGH); //Turn on the LED

  }else{
    
    delay(lighttime); //Delay before switching off
    digitalWrite(led, LOW); //Turn off the LED

  }

}

// Function to calculate distance using the ultrasonic sensor
long getDistance(){

  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  long duration = pulseIn(echo, HIGH);
  long distance = duration * 0.034 / 2; // Convert duration to cm

  return distance;

}