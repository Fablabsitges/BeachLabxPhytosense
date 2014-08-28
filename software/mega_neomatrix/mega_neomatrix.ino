#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifndef PSTR
 #define PSTR // Make Arduino Due happy
#endif

#define pin 7

// MATRIX DECLARATION:
// Parameter 1 = width of NeoPixel matrix
// Parameter 2 = height of matrix
// Parameter 3 = pin number (most are valid)
// Parameter 4 = matrix layout flags, add together as needed:
//   NEO_MATRIX_TOP, NEO_MATRIX_BOTTOM, NEO_MATRIX_LEFT, NEO_MATRIX_RIGHT:
//     Position of the FIRST LED in the matrix; pick two, e.g.
//     NEO_MATRIX_TOP + NEO_MATRIX_LEFT for the top-left corner.
//   NEO_MATRIX_ROWS, NEO_MATRIX_COLUMNS: LEDs are arranged in horizontal
//     rows or in vertical columns, respectively; pick one or the other.
//   NEO_MATRIX_PROGRESSIVE, NEO_MATRIX_ZIGZAG: all rows/columns proceed
//     in the same order, or alternate lines reverse direction; pick one.
//   See example below for these values in action.
// Parameter 5 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)


Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(60, 8, pin,
  NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
  NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG,
  NEO_GRB            + NEO_KHZ800);
  
// Color definitions
#define BLACK    0x0000
#define MAGENTA  0xF81F
#define BLUE     0x001F
#define CYAN     0x07FF
#define GREEN    0x07E0
#define YELLOW   0xFFE0 
#define ORANGE   0xFD20
#define RED      0xF800
#define WHITE    0xFFFF

#define Navy            0x000F
#define DarkGreen       0x03E0 
#define DarkCyan        0x03EF   
#define Maroon          0x7800   
#define Purple          0x780F 
#define Olive           0x7BE0  
#define LightGrey       0xC618   
#define DarkGrey        0x7BEF   
#define GreenYellow     0xAFE5  
#define Pink            0xF81F

void setup() {
  matrix.begin();
 // matrix.setBrightness(100);
}

void loop() {
  
//  matrix.drawPixel(0,0,BLUE);
//  matrix.drawLine(0, 8, 60, 8, RED);
//  matrix.drawFastVLine(0, 0, 4, GREEN);
//  matrix.drawRect(15, 3, 15, 4, CYAN);
  rainbowRows();
 // matrix.fillScreen(CYAN);
//sitgesFlag();

  matrix.show();
  delay(5000);
}

void rainbowRows () {
  matrix.drawFastHLine(0, 0, 60, MAGENTA);
  matrix.drawFastHLine(0, 1, 60, Purple);
  matrix.drawFastHLine(0, 2, 60, BLUE);
  matrix.drawFastHLine(0, 3, 60, CYAN);
  matrix.drawFastHLine(0, 4, 60, GREEN);
  matrix.drawFastHLine(0, 5, 60, YELLOW);
  matrix.drawFastHLine(0, 6, 60, ORANGE);
  matrix.drawFastHLine(0, 7, 60, RED);
}

void catFlag () {
  matrix.drawFastHLine(0, 0, 60, YELLOW);
  matrix.drawFastHLine(0, 1, 60, RED);
  matrix.drawFastHLine(0, 2, 60, YELLOW);
  matrix.drawFastHLine(0, 3, 60, RED);
  matrix.drawFastHLine(0, 4, 60, YELLOW);
  matrix.drawFastHLine(0, 5, 60, RED);
  matrix.drawFastHLine(0, 6, 60, YELLOW);
  matrix.drawFastHLine(0, 7, 60, RED);
}

void sitgesFlag () {
  matrix.fillScreen(WHITE);
  matrix.drawFastHLine(0, 3, 60, RED);
  matrix.drawFastHLine(0, 4, 60, RED);
  matrix.fillRect(15, 0, 30, 8, RED);

}
