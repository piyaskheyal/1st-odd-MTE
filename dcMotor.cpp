int potentiometer = A0, Forward = A1, Backward = A3, Enable = 3, IN1 = 10, IN2 = 9, poten = 0, read;
int duty;

void setup(){
    Serial.begin(9600);
    pinMode(potentiometer, INPUT);
    pinMode(Forward, INPUT_PULLUP);
    pinMode(Backward, INPUT_PULLUP);

    pinMode(Enable, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);

}


void loop(){
    poten = analogRead(potentiometer);
    duty = map(poten, 0, 1023, 0, 255);
    analogWrite(Enable, duty);

    read = 0;
    if(digitalRead(Forward)==0) read = 1;
    if(digitalRead(Backward)==0) read = 2;

    if(read == 0){
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
    }
    if(read == 1){
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
    }
    if(read == 2){
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
    }
}
