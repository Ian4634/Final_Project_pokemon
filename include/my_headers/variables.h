#ifndef VARIABLES
#define VARIABLES
#include <my_headers/main.h>

extern SDL_Window *window;
void defineWindow();
SDL_Window *getWindow();

extern SDL_Renderer *renderer;
void defineRenderer();
SDL_Renderer *getRenderer();

extern SDL_Texture *player_texture;
void definePlayerTexture();
SDL_Texture *getPlayerTexture();

extern SDL_Texture *map_texture;
void defineMapTexture();
SDL_Texture *getMapTexture();

extern SDL_Rect playerDestRect;
void definePlayerDestRect();
SDL_Rect *getPlayerDestRect();

void initialize();

#endif