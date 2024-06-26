#pragma once

#include <stdbool.h>





//Data types for handling color types
typedef struct
{
  unsigned char R;
  unsigned char G;
  unsigned char B;
} RGB;

typedef struct
{
  char R[3];
  char G[3];
  char B[3];
} RGB_Hex;

typedef struct
{
  int H;
  double S;
  double L;
} HSL;

/*
- - - - Color validations - - - -
Returns true if color is correct
*/
bool checkRGB_HEX(RGB_Hex rgbh);
bool checkHSL(HSL hsl);
bool checkRGB(RGB rgb);

void HEX2RGB(RGB_Hex rgbh, RGB *rgb);
void HEX2HSL(RGB_Hex rgbh, HSL *hsl);
void RGB2HEX(RGB rgb, RGB_Hex *rgbh);
void RGB2HSL(RGB rgb, HSL *hsl);
void HSL2RGB(HSL hsl, RGB *rgb);
void HSL2HEX(HSL hsl, RGB_Hex *rgbh);
//Functions for displaying the converted color types to stdout
void printRGB(RGB rgb);
void printRGBH(RGB_Hex rgbh);
void printHSL(HSL hsl);
//Functions with char return for displaying the converted color types
//These can be used for manual management of the output after conversion
char getRGB(RGB rgb);
char getRGBHex(RGB_Hex rgbh);
char getHSL(HSL hsl);
//- - - - HSL processor functions - - - -
//Returns the processed value
static int procHue(RGB rgb);
static double procSat(RGB rgb, double lightness);
static double procLight(RGB rgb);
