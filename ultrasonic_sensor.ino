#define TRIGGER_PIN 3 //this is the pin that sends out the pulse
#define ECHO_PIN 2 //this is the pin that reads the distance




void setup() {
  Serial.begin(9600);

  pinMode(TRIGGER_PIN, OUTPUT); //output bc it sends pulse out
  pinMode(ECHO_PIN, INPUT); //bc it is reading what is coming in


}

void loop() {
  
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10); //this is how long it has to wait to send out a pulse

  float duration = pulseIn(ECHO_PIN, HIGH); // tell us the time from pulse sent to pulse received
  Serial.println(duration);

  //v=s/t
  float speed = 0.034; //measured in cm/microseconds
  float distance = (speed * duration)/2;
  
  Serial.println("distance:");
  Serial.println(distance);
  delay(100);

  if (distance > 10) {

    Serial.println("good to back up!");

  } else if (distance <= 10 and distance >=5){
    Serial.println("getting close");
  } else if (distance <= 5){
    Serial.println("Ahh! Stop");
  }



}
