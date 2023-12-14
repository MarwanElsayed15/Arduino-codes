//color 1

#define S01 52
#define S11 50
#define S21 48
#define S31 46
#define sensorOut1 44

int frequency1 = 0;

//color 2

#define S02 53
#define S12 51
#define S22 49
#define S32 47
#define sensorOut2 45

int frequency2 = 0;


void setup() {
  //color 1
  pinMode(S01, OUTPUT);
  pinMode(S11, OUTPUT);
  pinMode(S21, OUTPUT);
  pinMode(S31, OUTPUT);
  pinMode(sensorOut1, INPUT);
  
  // Setting frequency-scaling to 20%
  digitalWrite(S01,HIGH);
  digitalWrite(S11,LOW);

//color 2
   pinMode(S02, OUTPUT);
  pinMode(S12, OUTPUT);
  pinMode(S22, OUTPUT);
  pinMode(S32, OUTPUT);
  pinMode(sensorOut2, INPUT);
  
  // Setting frequency-scaling to 20%
  digitalWrite(S02,HIGH);
  digitalWrite(S11,LOW);
  
  Serial.begin(9600);
}

//sensor 1
void loop() {
  // Setting red filtered photodiodes to be read
  digitalWrite(S21,LOW);
  digitalWrite(S31,LOW);
  // Reading the output frequency
  frequency1 = pulseIn(sensorOut1, LOW);
  // Printing the value on the serial monitor
  Serial.print("R1= ");//printing name
  Serial.print(frequency1);//printing RED color frequency
  Serial.print("  ");
  delay(500);

  // Setting Green filtered photodiodes to be read
  digitalWrite(S21,HIGH);
  digitalWrite(S31,HIGH);
  // Reading the output frequency
  frequency1 = pulseIn(sensorOut1, LOW);
  // Printing the value on the serial monitor
  Serial.print("G1= ");//printing name
  Serial.print(frequency1);//printing RED color frequency
  Serial.print("  ");
  delay(500);

  // Setting Blue filtered photodiodes to be read
  digitalWrite(S21,LOW);
  digitalWrite(S31,HIGH);
  // Reading the output frequency
  frequency1 = pulseIn(sensorOut1, LOW);
  // Printing the value on the serial monitor
  Serial.print("B1= ");//printing name
  Serial.print(frequency1);//printing RED color frequency
  Serial.println("  ");
  delay(500);



  //sensor 2

   digitalWrite(S22,LOW);
  digitalWrite(S32,LOW);
  // Reading the output frequency
  frequency2 = pulseIn(sensorOut2, LOW);
  // Printing the value on the serial monitor
  Serial.print("R2= ");//printing name
  Serial.print(frequency2);//printing RED color frequency
  Serial.print("  ");
  delay(500);

  // Setting Green filtered photodiodes to be read
  digitalWrite(S22,HIGH);
  digitalWrite(S32,HIGH);
  // Reading the output frequency
  frequency2 = pulseIn(sensorOut2, LOW);
  // Printing the value on the serial monitor
  Serial.print("G2= ");//printing name
  Serial.print(frequency2);//printing RED color frequency
  Serial.print("  ");
  delay(500);

  // Setting Blue filtered photodiodes to be read
  digitalWrite(S22,LOW);
  digitalWrite(S32,HIGH);
  // Reading the output frequency
  frequency2 = pulseIn(sensorOut2, LOW);
  // Printing the value on the serial monitor
  Serial.print("B2= ");//printing name
  Serial.print(frequency2);//printing RED color frequency
  Serial.println("  ");
  delay(500);
}