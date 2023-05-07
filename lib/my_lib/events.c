#include<my_headers/main.h>
#include<my_headers/events.h>


static void handlePlayerMovement(SDL_Event events){
    SDL_Rect *player = getPlayerDestRect();

    switch(events.key.keysym.sym){
        case SDLK_UP:
            if(player->y - 37 >= 0 && player->y -37  <= 600)  player->y -= 37;
            break;
        case SDLK_DOWN:
            if(player->y + 37 >= 0 && player->y + 37  <= 590)  player->y += 37;
            break;
        case SDLK_LEFT:
            if(player->x - 53 >= 0 && player->x - 53 <= 800)  player->x -= 53;
            break;
        case SDLK_RIGHT:
            if(player->x + 53 >= 0 && player->x + 53 <= 800)  player->x += 53;
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

