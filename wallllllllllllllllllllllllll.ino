int trigpin = 9;
int echopin = 10;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigpin,OUTPUT);
pinMode(echopin, INPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int dur,dist;
digitalWrite(trigpin,HIGH);
delayMicroseconds(1000);
digitalWrite(trigpin,LOW);
dur = pulseIn(echopin,HIGH);
dist = (dur/2)/29.1;
Serial.println(dist);
}
