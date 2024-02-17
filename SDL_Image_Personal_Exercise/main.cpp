#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "SDL.h"
#include "SDL_image.h"
#include "Game.h"
#include "Sprite.h"

Game* game = NULL;
#define window_width 800 
#define window_height 600 


int main(int argc, char* argv[]) {
	game = new Game();
	game->init("Game class",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		window_width, window_height,
		SDL_WINDOW_RESIZABLE);

	while (game->isGameRunning()) {
		game->handleEvents();
		game->update();
		game->render();
		game->capFrameRate();
	}
	game->clean();

	return 0;
}