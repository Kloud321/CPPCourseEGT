//
// Created by damya on 17.2.2024 г..
//
#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "SDL.h"
#include "SDL_image.h"

int main(int argc, char *argv[] ) {

    // We first

    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window* window;

    window = SDL_CreateWindow("Learning SDL!",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              400,
                              400,
                              SDL_WINDOW_RESIZABLE
    );


    if (window == NULL) {

        cout << "There was an error initializing window!" << endl
             //Returns a message with information about the specific error that occurred, or an empty string if there hasn't been an error message set since the last call to
             << SDL_GetError() << endl;
    }


    SDL_Event event;
    bool isRuning = true;

    while (isRuning) {

        while (SDL_PollEvent(&event)) {

            if (event.type == SDL_QUIT) {

                isRuning = false;
                break;
            }
        }

    }

    SDL_DestroyWindow(window);

    return 0;
}