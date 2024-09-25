// #include "Arduino_LED_Matrix.h"

// ArduinoLEDMatrix matrix;

// uint32_t heart_border[3] = {0x3184A44E, 0x42081100, 0xA0040000};

// void setup() {
//   matrix.begin();
// }

// void loop() {
//   matrix.loadFrame(heart_border);
//   delay(100);
// }


// #include "Arduino_LED_Matrix.h"

// ArduinoLEDMatrix matrix;

// uint32_t heart_border[3] = {0x3184A44E, 0x42081100, 0xA0040000};
// uint32_t heart_filled[3] = {0x3187BC7F, 0xC3F81F00, 0xE0040000};

// void setup() {
//   matrix.begin();
// }

// void loop() {
//   matrix.loadFrame(heart_border);
//   delay(1000);

//   matrix.loadFrame(heart_filled);
//   delay(1000);
// }


#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

uint32_t frame1[3] = {0x10818814, 0x81481281, 0x28118108};
uint32_t frame2[3] = {0x06009010, 0x81081081, 0x08090060};
uint32_t frame3[3] = {0x1F810010, 0x01F81F81, 0x001001F8};
uint32_t frame4[3] = {0x10810809, 0x00900600, 0x20140080};

void setup() {
  matrix.begin();
}

void loop() {
  int interval = 1000;

  matrix.loadFrame(frame1);
  delay(interval);
  matrix.loadFrame(frame2);
  delay(interval);
  matrix.loadFrame(frame3);
  delay(interval);
  matrix.loadFrame(frame4);
  delay(interval);
}