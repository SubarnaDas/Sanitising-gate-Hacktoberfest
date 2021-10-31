/*SukanyaDas contributed for hacktoberfest2021 */
#define led 5
#define buzzer 13
#define relay 7
const int trig = 9;
const int echo = 11;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(relay, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);

}

void loop() {
  float u_distance = 0;
  u_distance = ultrasonic(trig, echo);
  if (u_distance.=20){
   led_on();
   buzzer_on(); 
   relay_ON();
  }
  else{
    led_off();
    buzzer_off();
    relay_off();
  }
  
}

int ultrasonic( int trigPin, int echo){
  float duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW); 
  duration = pulseIn(echoPin, HIGH); 
  distance = (duration*.0343); 
  Serial.print("Distance: "); 
  Serial.println(distance); 
  delay(100);
   
}

void led_on(){
  digitalWrite(led, HIGH);
}

void led_off(){
  digitalWrite(led, HIGH);
}

void buzzer_on(){
  digitalWrite(buzzer, HIGH);
}

void buzzer_off(){
  digitalWrite(buzzer, low);
}

void relay_on(){
  digitalWrite(relay, LOW);
}

void relay_off(){
  digitalWrite(relay, HIGH);
}
