void setup() {
  pinMode(37,INPUT_PULLUP);
  pinMode(36,INPUT_PULLUP);

  pinMode(22,OUTPUT);

}

void loop() {
  int p1=digitalRead(37);
  int p2=digitalRead(36);

  if(p1==0){
    digitalWrite(22,HIGH);
  }
  if (p2==0){
    digitalWrite(22,LOW);
  }
}
