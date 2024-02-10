
#include <SDL.h>
#include <iostream>
using std::cout;


int main(int argc, char* argv[]) {

	//SDL_Init(SDL_INIT_EVERYTHING);

	//SDL_Quit();

	// Creating a window 
	SDL_Window* window = nullptr;

	//Grabing the surface of the pointer
	

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << "SDL could not be initialized" <<
			SDL_GetError();
	}
	else {
		std::cout << "Success! \n";
	}

	window = SDL_CreateWindow("C++ SDL2 Window",
		30,
		50,
		640,
		480,
		SDL_WINDOW_SHOWN);

	// our render is gona be with the size of our windows and it is gonna present whatever we are drawing
	SDL_Renderer* renderer = nullptr;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);



	SDL_Surface* surface = SDL_LoadBMP("./images/penguin.bmp");
	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);

	// Create rectnagle

	SDL_Rect rectangle;

	rectangle.x = 50;
	rectangle.y = 200;
	rectangle.w = 400;
	rectangle.h = 200;




	// main appllication loop
	bool gameisRuning = true;

	while (gameisRuning) {
		SDL_Event event;
		//Start our even loop

		
		// (1) Handle inpit
		//Start our event loop
		while (SDL_PollEvent(&event)) {
			// Handle each specific event

			if (event.type == SDL_QUIT) {

				gameisRuning = false;
			}
		}
		// (2) Handle Updates;



		//(3) Clear and draw the Screen
		// Give us a clear canvas

		SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);

		SDL_RenderClear(renderer);

		//Do our drawing

		SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);


		SDL_RenderDrawLine(renderer, 5, 5, 100, 120);


		// SDL_RenderDrawRect(renderer, &rectangle);


		SDL_RenderCopy(renderer, texture, NULL, &rectangle);

		//(4) Finally show what we've drawn
		SDL_RenderPresent(renderer);

	}

	SDL_DestroyWindow(window);
	SDL_DestroyTexture(texture);

	// clean up
	SDL_Quit();

	return 0;
}