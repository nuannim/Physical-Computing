const int RED = 13;
const int GREEN = 12;
const int BLUE = 8;

const int SEC = 1000;

void setup() {
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
  // Test Red
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  delay(1000);

  // Test Green
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, HIGH);
  delay(1000);

  // Test Blue
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);
  delay(1000);

   // yellow (red + green)
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, HIGH);
  delay(1000);

  // magenta ทำไมไม่ออก??? หรือตามองไม่เห็นเหรอ
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);
  delay(1000);

  // cyan (blue + green)
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  delay(SEC);

  // white
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  delay(SEC);


}
