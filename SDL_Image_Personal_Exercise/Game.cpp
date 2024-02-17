#include "Game.h"
#define fps 60
int c = 0;

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::isRunning = true;
	Game::currentFrame = 0;
	startingTick = 0;
}

Game::~Game() {}

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

		if (window != 0) { // window init success
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);

			if (renderer != 0) { // renderer init success
				std::cout << "renderer streation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
			}
			else {
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else {
			std::cout << "window init failed\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail\n";
		return false;
	}

	std::cout << "init success\n";
	isRunning = true;
	return true;
}

void Game::render() {
	//SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF); // white color
	SDL_SetRenderDrawColor(renderer, 0xAA, 0xAA, 0xAA, 0xFF); // dark grey color
	//SDL_SetRenderDrawColor(renderer, 0xCC, 0xCC, 0xCC, 0xFF); // grey color
	//SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF); // black color
	SDL_RenderClear(renderer);

	//int ww, wh;
	//SDL_GetWindowSize(window, &ww, &wh);
	//SDL_Rect fillRect = { ww / 4, wh / 4, ww / 2, wh / 2 };
	//SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF); // red color
	//SDL_RenderFillRect(renderer, &fillRect);

	//SDL_Rect outlineRect = { ww / 6, wh / 6, ww * 2 / 3, wh * 2 / 3 };
	//SDL_SetRenderDrawColor(renderer, 0x00, 0xFF, 0x00, 0xFF); // green color
	//SDL_RenderDrawRect(renderer, &outlineRect);

	//SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF);
	//SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);

	//SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0x00, 0x00); // yellow color
	//for (int i = 0; i < wh; i += 4) {
	//	SDL_RenderDrawPoint(renderer, ww / 2, i);
	//}

	//SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0xFF, 0xFF);

	SDL_RenderPresent(renderer);
}

void Game::update() {

	//std::cout << "SDL_TICKS: " << SDL_GetTicks() << "\n";
	//std::cout << "SDL_TICKS / 150: " << int((SDL_GetTicks() / 150)) << "\n";
	//std::cout << "SDL_TICKS / 150 % 5: " << int(((SDL_GetTicks() / 150) % 5)) << "\n" << std::endl;
	currentFrame = int(((SDL_GetTicks() / 150) % 5)); // % 5 for 5 frames

}

void Game::capFrameRate(){
	
	startingTick = SDL_GetTicks(); // Update starting tick at the beginning of each frame
	Uint32 frameTime = SDL_GetTicks() - startingTick;
	if (1000 / fps > frameTime) {
		SDL_Delay(1000 / fps - frameTime);
	}

}

void Game::handleEvents() {
	SDL_Event event;

	while (SDL_PollEvent(&event)) {

		if (event.type == SDL_QUIT) {
			isRunning = false;
			break;
		}
	}
}

void Game::clean() {
	std::cout << "cleaning game\n";

	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isGameRunning() {
	return Game::isRunning;
}