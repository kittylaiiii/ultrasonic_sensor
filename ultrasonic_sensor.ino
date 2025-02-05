#define TRIGGER_PIN 3 //this is the pin that sends out the pulse
#define ECHO_PIN 2 //this is the pin that reads the distance




void setup() {
  Serial.begin(9600);

  pinMode(TRIGGER_PIN, OUTPUT); //output bc it sends pulse out
  pinMode(ECHO_PIN, INPUT); //bc it is reading what is coming in





}

void loop() {
  // put your main code here, to run repeatedly:

}
