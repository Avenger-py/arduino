#define trig 11
#define echo 10
long duration,distance;
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration*0.34)/2; // speed of sound is around 340m/s or 0.34mm/microsecond
  Serial.print("Distance(in mm) = ");
  Serial.println(distance);
}
