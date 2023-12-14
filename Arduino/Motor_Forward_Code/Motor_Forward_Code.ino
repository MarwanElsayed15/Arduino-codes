//motor1
int m1 = 36;
int m2 = 38;
int p1 = 3;
//motor2
int m3 = 40; 
int m4 = 42;
int p2 = 2;
//motor3
int m5 = 28;
int m6 = 30;
int p3 = 5;
//motor4
int m7 = 32;
int m8 = 34;
int p4 = 4;


void setup() {
  // put your setup code here, to run once:

pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(m5,OUTPUT);
pinMode(m6,OUTPUT);
pinMode(m7,OUTPUT);
pinMode(m8,OUTPUT);
pinMode(p1,OUTPUT);
pinMode(p2,OUTPUT);
pinMode(p3,OUTPUT);
pinMode(p4,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  analogWrite(p1, 60);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
  analogWrite(p2, 70);
  digitalWrite(m5, HIGH);
  digitalWrite(m6, LOW);
  analogWrite(p3, 60);
  digitalWrite(m7, LOW);
  digitalWrite(m8, HIGH);
  analogWrite(p4, 255);
}
