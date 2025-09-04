/*Ultrasonic Night Light*/

#define TRIG 5
#define ECHO 6
#define blue 9
#define green 10
#define red 11

void setup() {

  Serial.begin(115200);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {

  float distance = getDistance();
  if(distance < 15.00){

    // Fade from red to blue
    for (int i = 0; i < 255; i++) {

     setColor(255 - i, i, 0);
      delay(10);
  
    }

    // Fade from green to blue
    for (int i = 0; i < 255; i++) {

      setColor(0, 255 - i, i);
      delay(10);

    }

    // Fade from blue to red
    for (int i = 0; i < 255; i++) {

      setColor(i, 0, 255 - i);
      delay(10);

    }

  }

  delay(500);

  if(distance >15){

    setColor( 0, 0, 0 );
    delay(10);

  }

}

void setColor(int r, int g, int b) {

  analogWrite(red, r);
  analogWrite(green, g);
  analogWrite(blue, b);

}


float getDistance() {

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  long duration = pulseIn(ECHO, HIGH);
  float distance = duration / 58.0; 
  return distance;

}