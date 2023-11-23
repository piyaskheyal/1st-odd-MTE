int rled = 12, gled = 13, ir = 7;

void setup() {
  pinMode(rled, OUTPUT);
  pinMode(gled, OUTPUT);
  pinMode(ir, INPUT);

}

void loop() {
  int ir_sen = digitalRead(ir);
  if(ir_sen == HIGH){
    digitalWrite(rled, HIGH);
    digitalWrite(gled, LOW);
  }else{
    digitalWrite(gled, HIGH);
    digitalWrite(rled, LOW);
  }

}
