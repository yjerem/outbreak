#include "main.h"
#include "palette.h"
#include "outbreak.h"
#include "resources.h"

const SDL_Rect SCREEN_RECT = (SDL_Rect){ 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT };

int main(int argc, char * argv[]) {
  // initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) < 0) {
    fprintf(stderr, "Can't initialize SDL: %s\n", SDL_GetError());
    exit(1);
  }
  atexit(SDL_Quit);

  // set up window
  SDL_WM_SetCaption("outbreak v0.00001", NULL);

  // set up screen
  SDL_Surface * screen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE);
  if (screen == NULL) {
    fprintf(stderr, "Can't set %dx%dx%d video mode: %s\n", SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_GetError());
    exit(1);
  }

  // initialize palette
  init_palette(screen);

  // load resources
  load_resources("resources/");

  // enter the game
  outbreak(screen);

  // cleanup
  SDL_FreeSurface(screen);
  screen = NULL;

  return 0;
}

