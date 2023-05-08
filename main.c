#include <my_headers/main.h>
#include <my_headers/variables.h>
#include <my_headers/events.h>
#include <sdl2/SDL_ttf.h>

int main(int argc, char *argv[]){
    /* initialize sdl */
    

    initialize();
    /* playing with font */
    if(TTF_Init() < 0){
        printf("TTF is WTF");
    }
    TTF_Font *font = TTF_OpenFont("./font/Arial.ttf", 10);
    if(font == NULL){
        printf("font not loaded");
    }
    SDL_Color color = {255,255,255};
    SDL_Texture *fontTexture = SDL_CreateTextureFromSurface(getRenderer(), TTF_RenderText_Solid(font,"Hello World", color));
    SDL_RenderCopy(getRenderer(), fontTexture, NULL, NULL);
    SDL_RenderPresent(getRenderer());
    /* playing with font */
    while(handleEvents()){
       
    }

    return 0;
    
}