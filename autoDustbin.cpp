#include <Servo.h>
#include <LiquidCrystal.h>

const int trig1 = 11, echo1 = 10, ir = 8;
const int rs = 2, en = 3, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int position = 0;

Servo servo1;

void setup() {
    Serial.begin(9600);
    lcd.begin(16, 2);
    pinMode(trig1, OUTPUT);
    servo1.attach(9);
    pinMode(echo1, INPUT);
    pinMode(ir, INPUT);
}

int measureDistance(int trig, int echo){
    long duration;
    int distance;
    digitalWrite(trig, LOW);
    delayMicroseconds(2);

    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);

    duration = pulseIn(echo, HIGH);
    distance = duration*.034/2;

    Serial.print("Distance: ");
    Serial.println(distance);
    return distance;
}

void loop() {
    int d = measureDistance(trig1, echo1);
    if(d <= 10){
        lcd.clear();
        lcd.print("Trash Full");
        delay(100);
    }else{
        lcd.clear();
        lcd.print("Use Me");
        delay(100);
    }

    if(digitalRead(ir) == 1){
        for(int position=0; position<=90; position++){
            servo1.write(position);
            delay(15);
        }
    }
    if(position!=0){
        for(int position=90; position>=0; position--){
            servo1.write(position);
            delay(15);
        }
    }

}
