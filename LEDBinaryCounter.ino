int bit1 = 5;
int bit2 = 4;
int bit4 = 3;
int bit8 = 2;

int binaryNo [16][4] = {
              {0,0,0,0},
              {0,0,0,1},
              {0,0,1,0},
              {0,0,1,1},
              {0,1,0,0},
              {0,1,0,1},
              {0,1,1,0},
              {0,1,1,1},
              {1,0,0,0},
              {1,0,0,1},
              {1,0,1,0},
              {1,0,1,1},
              {1,1,0,0},
              {1,1,0,1},
              {1,1,1,0},
              {1,1,1,1}     
}

int waitFor = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(bit1,OUTPUT);
  pinMode(bit2,OUTPUT);
  pinMode(bit4,OUTPUT);
  pinMode(bit8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 16; i++){
    digitalWrite(bit8, binaryNo[0]);
    digitalWrite(bit4, binaryNo[1]);
    digitalWrite(bit2, binaryNo[2]);
    digitalWrite(bit1, binaryNo[1]);

    delay(waitFor);

    digitalWrite(bit8, LOW);
    digitalWrite(bit4, LOW);
    digitalWrite(bit2, LOW);
    digitalWrite(bit1, LOW);

    delay(waitFor);
  }
}
