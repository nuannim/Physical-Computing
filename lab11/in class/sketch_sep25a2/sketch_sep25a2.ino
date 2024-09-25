const int RED = 13;
const int GREEN = 12;
const int BLUE = 8;

const int SEC_T = 1000;

void setup() {
  // pinMode(13, OUTPUT);
  // pinMode(12, OUTPUT);
  // pinMode(8, OUTPUT);
  // pinMode(10, OUTPUT);
  // pinMode(9, OUTPUT);
  // pinMode(8, OUTPUT);
  // pinMode(7, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

// high = ไฟเข้า
// low = ไฟออก
// ใน common anode (+) --> high = ไฟดับ ปิด เพราะ v = 0v
//                     --> low = ไฟติด เปิด เพราะ มีความต่างศักย์
//                     --> ไฟเข้าตลอด หลอดจะติดตลอด

void loop() {
  // digitalWrite(13, HIGH); // pin 13 off
  // digitalWrite(12, LOW);
  // digitalWrite(8, LOW);
  // delay(1000);            // waits for a second
  // digitalWrite(12, HIGH);
  // digitalWrite(13, LOW);
  // digitalWrite(8, HIGH);
  // delay(1000);            
  // digitalWrite(13, LOW);
  // digitalWrite(13, LOW);

}
