#include <LiquidCrystal.h>

const int IN1 = 13, IN2 = 12, EN1 = 9;
const int rs = 11, en = 10, d4 = 2, d5 = 4, d6 = 6, d7 = 3;
const int trig1 = 8, echo1 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
    Serial.begin(9600);
    int output[] = {13, 12, 9};
    for(int i = 0; i < 3; i++){
        pinMode(output[i], OUTPUT);
    }

    lcd.begin(16, 2);
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

void runMotor(int en, int in1, int in2){
    analogWrite(en, 200);
    digitalWrite(in1, 1);
    digitalWrite(in2, 0);
}

void stopMotor(int en, int in1, int in2){
    digitalWrite(in1, 0);
    digitalWrite(in2, 0);
}

void showLevel(int distance){
    lcd.setCursor(2, 0);
    lcd.print("Water Level");
    lcd.setCursor(5, 1);
    lcd.print(distance/11.5);
    lcd.print("%");
    delay(100);
    lcd.clear();
}

void loop() {
    int d = measureDistance(trig1, echo1);

    showLevel(d);

    if(d <= 20){
        while(d < 1000){
            runMotor(EN1, IN1, IN2);
            d = measureDistance(trig1, echo1);
            showLevel(d);
        }
    }
    stopMotor(EN1, IN1, IN2);
}
