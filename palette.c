#include "palette.h"

void init_palette(SDL_Surface * screen) {
  SDL_Color colors[NUM_COLORS];

  colors[COLOR_BLACK] = (SDL_Color){ 0x00, 0x00, 0x00 };
  colors[COLOR_WHITE] = (SDL_Color){ 0xFF, 0xFF, 0xFF };
  colors[COLOR_RED] = (SDL_Color){ 0xFF, 0x00, 0x00 };
  colors[COLOR_BLUE] = (SDL_Color){ 0x00, 0x00, 0xFF };
  colors[COLOR_ORANGE] = (SDL_Color){ 0xFF, 0x99, 0x00 };
  colors[COLOR_YELLOW] = (SDL_Color){ 0xFF, 0xFF, 0x00 };
  colors[COLOR_GREEN] = (SDL_Color){ 0x00, 0xFF, 0x00 };
  colors[COLOR_MAGENTA] = (SDL_Color){ 0xFF, 0x00, 0xFF };
  colors[COLOR_LIGHTGRAY] = (SDL_Color){ 0xCC, 0xCC, 0xCC };
  colors[COLOR_DARKGRAY] = (SDL_Color){ 0x66, 0x66, 0x66 };
  colors[COLOR_DARKRED] = (SDL_Color){ 0x99, 0x00, 0x00 };
  colors[COLOR_DARKORANGE] = (SDL_Color){ 0xCC, 0x66, 0x00 };
  colors[COLOR_DARKYELLOW] = (SDL_Color){ 0xCC, 0xCC, 0x00 };

  SDL_SetColors(screen, colors, 0, NUM_COLORS);
}

