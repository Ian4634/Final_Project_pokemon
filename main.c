#include <my_headers/main.h>
#include <my_headers/variables.h>
#include <my_headers/events.h>

int main(int argc, char *argv[]){
    /* initialize sdl */
    

    initialize();
    
    while(handleEvents()){
       
    }

    return 0;
    
}