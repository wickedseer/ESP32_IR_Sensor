int RED_LED = 16; // GPIO16
int GREEN_LED = 18; // GPIO18
int Sensor_Pin = 17; // GPIO17

int isObstacle = HIGH; // HIGH MEANS NO OBSTACLE

void setup() {
pinMode(RED_LED, OUTPUT); 
pinMode(GREEN_LED, OUTPUT);
pinMode(Sensor_Pin, INPUT);
Serial.begin(115200);
}
void loop() {
isObstacle = digitalRead(Sensor_Pin);

if (isObstacle == LOW){
  Serial.println("OBSTACLE DETECTED!!");
  digitalWrite(GREEN_LED,LOW);
  digitalWrite(RED_LED, HIGH);
}
else{
  Serial.println("Clear");
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);
}
delay(200);
}
