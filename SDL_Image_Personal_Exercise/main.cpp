#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "SDL.h"
#include "SDL_image.h"


#define fps 60
#define window_width 800
#define window_height 600


int main(int argc, char *argv[] ) {

    // We first

    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window* window = NULL;

    window = SDL_CreateWindow("Learning SDL!",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              window_width,
                              window_height,
                              SDL_WINDOW_RESIZABLE
    );

    SDL_Surface* screen = SDL_GetWindowSurface(window);
    Uint32 white = SDL_MapRGB(screen->format, 255, 150, 155);

    SDL_FillRect(screen, NULL, white);
    SDL_UpdateWindowSurface(window);

    Uint32 starting_tick;


    if (window == NULL) {

        cout << "There was an error initializing window!" << endl
             //Returns a message with information about the specific error that occurred, or an empty string if there hasn't been an error message set since the last call to
             << SDL_GetError() << endl;
    }

    int x, y;

    SDL_Event event;
    bool isRuning = true;


    while (isRuning) {

        ///
        starting_tick = SDL_GetTicks();

        while (SDL_PollEvent(&event)) {

            if (event.type == SDL_QUIT) {

                isRuning = false;
                break;
            }
        }

        // limiting the frames per second
        if ((1000 / fps) > SDL_GetTicks() - starting_tick) {
            SDL_Delay(1000 / fps - (SDL_GetTicks() - starting_tick));

        }

    }



    // Getting window position
    /*	SDL_GetWindowPosition(window, &x, &y);
        cout << x << " - " << y << endl;*/



    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}