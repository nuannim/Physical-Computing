const int A = 13;
const int B = 12;
const int C = 11;
const int D = 10;
const int E = 9;
const int F_P = 8;
const int G = 7;

const int SEC = 1000;

int num_array[10][7] = {  { 1,1,1,1,1,1,0 },    // 0
                          { 0,1,1,0,0,0,0 },    // 1
                          { 1,1,0,1,1,0,1 },    // 2
                          { 1,1,1,1,0,0,1 },    // 3
                          { 0,1,1,0,0,1,1 },    // 4
                          { 1,0,1,1,0,1,1 },    // 5
                          { 1,0,1,1,1,1,1 },    // 6
                          { 1,1,1,0,0,0,0 },    // 7
                          { 1,1,1,1,1,1,1 },    // 8
                          { 1,1,1,1,0,1,1 }
                       };   // 9


void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F_P, OUTPUT);
  pinMode(G, OUTPUT);

}

void loop() {
//   // 0
//   digitalWrite(A, HIGH);
//   digitalWrite(B, HIGH);
//   digitalWrite(C, HIGH);
//   digitalWrite(D, HIGH);
//   digitalWrite(E, HIGH);
//   digitalWrite(F_P, HIGH);
//   digitalWrite(G, LOW);

//   delay(SEC);

//   // 1
//   digitalWrite(A, LOW);
//   digitalWrite(B, HIGH);
//   digitalWrite(C, HIGH);
//   digitalWrite(D, LOW);
//   digitalWrite(E, LOW);
//   digitalWrite(F_P, LOW);
//   digitalWrite(G, LOW);

//   delay(SEC);

//   // 2
//   digitalWrite(A, HIGH);
//   digitalWrite(B, HIGH);
//   digitalWrite(C, LOW);
//   digitalWrite(D, HIGH);
//   digitalWrite(E, HIGH);
//   digitalWrite(F_P, LOW);
//   digitalWrite(G, HIGH);

//   delay(SEC);

  for (int digit = 0; digit < 10; digit++) {
    digitalWrite(A, num_array[digit][0]);
    digitalWrite(B, num_array[digit][1]);
    digitalWrite(C, num_array[digit][2]);
    digitalWrite(D, num_array[digit][3]);
    digitalWrite(E, num_array[digit][4]);
    digitalWrite(F_P, num_array[digit][5]);
    digitalWrite(G, num_array[digit][6]);
    
    delay(SEC);
  }


}
