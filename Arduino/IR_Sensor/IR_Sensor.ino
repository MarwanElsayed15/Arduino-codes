int L = 43;
int C = 41;
int R = 39;



void setup() {
  // put your setup code here, to run once:

pinMode (L, INPUT);
pinMode (C, INPUT);
pinMode (R, INPUT);

Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
//black =1
//white =0
int l = digitalRead(L);
int c = digitalRead(C);
int r = digitalRead(R);

Serial.print("Left = ");
Serial.println(l);
Serial.print("Center = ");
Serial.println(c);
Serial.print("Right = ");
Serial.println(r);
Serial.println("..........................");

delay(1000);

}
