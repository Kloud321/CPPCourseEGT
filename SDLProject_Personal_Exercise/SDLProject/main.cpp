
#include <SDL.h>

#include <iostream>
using std::cout;


void SetPixel(SDL_Surface* surface, int x, int y, uint8_t r, uint8_t g, uint8_t b) {


	SDL_LockSurface(surface);

	cout << "Left Mouse button is pressed (" << x << " - " << y << ")\n";

	uint8_t* pixelArray = (uint8_t*)surface->pixels;
	pixelArray[y * surface->pitch +x*surface->format->BytesPerPixel+0] = r;
	pixelArray[y * surface->pitch +x*surface->format->BytesPerPixel +1] = g;
	pixelArray[y * surface->pitch +x*surface->format->BytesPerPixel +2] = b;


	SDL_UnlockSurface(surface);


}



int main(int argc, char* argv[]) {

	//SDL_Init(SDL_INIT_EVERYTHING);

	//SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Ivan Box", "Fuck you", NULL);


	//SDL_Quit();

	// Creating a window 
	SDL_Window* window = nullptr;

	//Grabing the surface of the pointer
	SDL_Surface* screen = nullptr;

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


	screen = SDL_GetWindowSurface(window);
	

	// image is alaso surface
	SDL_Surface* image;

	/*image = SDL_LoadBMP("./images/Me.bmp");

	SDL_BlitSurface(image, NULL, screen, NULL);

	SDL_FreeSurface(image);*/

	SDL_UpdateWindowSurface(window);


	if (window == NULL) {
		printf("Could not create a window: %s\n", SDL_GetError);

		return 1;
	}

	/*SDL_Delay(3000);*/

	bool gameisRuning = true;


	while (gameisRuning) {
		SDL_Event event;
		//Start our even loop

		int x, y;
		
		Uint32 buttons;
		buttons = SDL_GetMouseState(&x, &y);

		while (SDL_PollEvent(&event)) {
			// Handle each specific event

			if (event.type == SDL_QUIT) {

				gameisRuning = false;
			}

			if (event.button.button == SDL_BUTTON_LEFT) {

				SetPixel(screen, x, y, 255, 255, 0); 
				
			}

			//if (event.type == SDL_MOUSEMOTION) {
			//	cout << "Mouse is moving \n";

			//}

			//if (event.type == SDL_KEYDOWN) {
			//	/*	cout << "A Key has been pressed \n";*/

			//	if (event.key.keysym.sym == SDLK_0) {
			//		cout << "0 was pressed\n";
			//	}
			//	else
			//	{
			//		cout << "0 was not pressed\n";
			//	}

			//}

			//const Uint8* state = SDL_GetKeyboardState(NULL);

			//if (state[SDL_SCANCODE_RIGHT]) {
			//	cout << "Right arrow key is pressed \n";
			//}

		}

		SDL_UpdateWindowSurface(window);

	}

	SDL_DestroyWindow(window);

	// clean up
	SDL_Quit();

	return 0;
}