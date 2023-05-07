#include<my_headers/main.h>
#include<my_headers/events.h>


static void handlePlayerMovement(SDL_Event events){
    SDL_Rect *player = getPlayerDestRect();

    switch(events.key.keysym.sym){
        case SDLK_UP:
            player->y -= 37;
            break;
        case SDLK_DOWN:
            player->y += 37;
            break;
        case SDLK_LEFT:
            player->x -= 53;
            break;
        case SDLK_RIGHT:
            player->x += 53;
            break;
        
        default:
            printf("sth went wrong in playerMovement()\n");
    }
    SDL_RenderClear(getRenderer());
    SDL_RenderCopy(getRenderer(), getMapTexture(), NULL, NULL);
    SDL_RenderCopy(getRenderer(), getPlayerTexture(), NULL, getPlayerDestRect());
    SDL_RenderPresent(getRenderer());
}

int handleEvents(){
    SDL_Event event;
    
    while(SDL_PollEvent(&event)){
        switch(event.type){
        case SDL_QUIT:
            return 0;
            break;
        case SDL_KEYDOWN:
            handlePlayerMovement(event);
            break;
        default:
            printf("Unhandled event %d\n", event.type);
            break;
        }
    }

    return 1;
}

