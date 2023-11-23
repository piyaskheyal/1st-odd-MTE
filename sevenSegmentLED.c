void zero(){
  int hpin[7] = {1, 2, 3, 4, 5, 6};
  int lpin[7] = {7};
  int size1 = sizeof(hpin)/sizeof(hpin[0]);
  int size2 = sizeof(lpin)/sizeof(lpin[0]);

  for(int i=0; i<size1; i++){
    digitalWrite(hpin[i], HIGH);
  }

  for(int i=0; i<size2; i++){
    digitalWrite(lpin[i], LOW);
  }
}

void one(){
  int hpin[7] = {2, 3};
  int lpin[7] = {1, 4, 5, 6, 7};
  int size1 = sizeof(hpin)/sizeof(hpin[0]);
  int size2 = sizeof(lpin)/sizeof(lpin[0]);

  for(int i=0; i<size1; i++){
    digitalWrite(hpin[i], HIGH);
  }

  for(int i=0; i<size2; i++){
    digitalWrite(lpin[i], LOW);
  }
}

void two(){
  int hpin[7] = {1, 2, 4, 5, 7};
  int lpin[7] = {3, 6};
  int size1 = sizeof(hpin)/sizeof(hpin[0]);
  int size2 = sizeof(lpin)/sizeof(lpin[0]);

  for(int i=0; i<size1; i++){
    digitalWrite(hpin[i], HIGH);
  }

  for(int i=0; i<size2; i++){
    digitalWrite(lpin[i], LOW);
  }
}

void three(){
  int hpin[7] = {1, 2, 3, 4, 7};
  int lpin[7] = {5, 6};
  int size1 = sizeof(hpin)/sizeof(hpin[0]);
  int size2 = sizeof(lpin)/sizeof(lpin[0]);

  for(int i=0; i<size1; i++){
    digitalWrite(hpin[i], HIGH);
  }

  for(int i=0; i<size2; i++){
    digitalWrite(lpin[i], LOW);
  }
}

void four(){
  int hpin[7] = {2, 3, 6, 7};
  int lpin[7] = {1, 4, 5};
  int size1 = sizeof(hpin)/sizeof(hpin[0]);
  int size2 = sizeof(lpin)/sizeof(lpin[0]);

  for(int i=0; i<size1; i++){
    digitalWrite(hpin[i], HIGH);
  }

  for(int i=0; i<size2; i++){
    digitalWrite(lpin[i], LOW);
  }
}

void five(){
  int hpin[7] = {1, 3, 4, 6, 7};
  int lpin[7] = {2, 5};
  int size1 = sizeof(hpin)/sizeof(hpin[0]);
  int size2 = sizeof(lpin)/sizeof(lpin[0]);

  for(int i=0; i<size1; i++){
    digitalWrite(hpin[i], HIGH);
  }

  for(int i=0; i<size2; i++){
    digitalWrite(lpin[i], LOW);
  }
}

void six(){
  int hpin[7] = {1, 7, 3, 4, 5, 6};
  int lpin[7] = {2};
  int size1 = sizeof(hpin)/sizeof(hpin[0]);
  int size2 = sizeof(lpin)/sizeof(lpin[0]);

  for(int i=0; i<size1; i++){
    digitalWrite(hpin[i], HIGH);
  }

  for(int i=0; i<size2; i++){
    digitalWrite(lpin[i], LOW);
  }
}

void seven(){
  int hpin[7] = {1, 2, 3};
  int lpin[7] = {4, 5, 6, 7};
  int size1 = sizeof(hpin)/sizeof(hpin[0]);
  int size2 = sizeof(lpin)/sizeof(lpin[0]);

  for(int i=0; i<size1; i++){
    digitalWrite(hpin[i], HIGH);
  }

  for(int i=0; i<size2; i++){
    digitalWrite(lpin[i], LOW);
  }
}

void eight(){
  int hpin[7] = {1, 2, 3, 4, 5, 6, 7};
  int lpin[7] = {};
  int size1 = sizeof(hpin)/sizeof(hpin[0]);
  int size2 = sizeof(lpin)/sizeof(lpin[0]);

  for(int i=0; i<size1; i++){
    digitalWrite(hpin[i], HIGH);
  }

  for(int i=0; i<size2; i++){
    digitalWrite(lpin[i], LOW);
  }
}

void nine(){
  int hpin[7] = {1, 2, 3, 4, 6, 7};
  int lpin[7] = {5};
  int size1 = sizeof(hpin)/sizeof(hpin[0]);
  int size2 = sizeof(lpin)/sizeof(lpin[0]);

  for(int i=0; i<size1; i++){
    digitalWrite(hpin[i], HIGH);
  }

  for(int i=0; i<size2; i++){
    digitalWrite(lpin[i], LOW);
  }
}

void setup() {
  for(int i=1; i<=7; i++){
    pinMode(i, OUTPUT);
  }

}

void loop() {
  zero();
  delay(500);
  one();
  delay(500);
  two();
  delay(500);
  three();
  delay(500);
  four();
  delay(500);
  five();
  delay(500);
  six();
  delay(500);
  seven();
  delay(500);
  eight();
  delay(500);
  nine();
  delay(500);
}
