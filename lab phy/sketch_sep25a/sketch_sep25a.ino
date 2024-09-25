#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

byte image[8][12] = {
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0 },
  { 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0 },
  { 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
  { 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0 },
  { 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};

void setup() {
  Serial.begin(115200);
  matrix.begin();
}

void loop() {
  matrix.renderBitmap(image, 8, 12);
  
  delay(100);
}


// #include "Arduino_LED_Matrix.h"   // Include the LED_Matrix library

// ArduinoLEDMatrix matrix;          // Create an instance of the ArduinoLEDMatrix class

// void setup() {
//   Serial.begin(115200);           // Initialize serial communication at a baud rate of 115200
//   matrix.begin();                 // Initialize the LED matrix

// }

// void loop() {
//   // Load and display the basic emoji frame on the LED matrix
//   matrix.loadFrame(LEDMATRIX_EMOJI_BASIC);
// }
