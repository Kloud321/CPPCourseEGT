#include "Game.h"

int c = 0;

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::currentFrame = 0;

	imageX = 0;  
	imageY = 0;
	velocity = 1;
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
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

				if(!TextureManager::Instance()->loadTexture("images/pic1.bmp", "war", renderer)) {
					std::cerr << "Failed to load texture 'war.png'\n";
					return false;
				}

				// Set initial image position
				int windowWidth, windowHeight;
				SDL_GetWindowSize(window, &windowWidth, &windowHeight);
				imageY = windowHeight / 2 - IMAGE_HEIGHT / 2; // Center vertically

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
	running = true;
	return true;
}

void Game::render() {
	//SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF); // white color
	//SDL_SetRenderDrawColor(renderer, 0xAA, 0xAA, 0xAA, 0xFF); // dark grey color
	//SDL_SetRenderDrawColor(renderer, 0xCC, 0xCC, 0xCC, 0xFF); // grey color
	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF); // black color
	SDL_RenderClear(renderer);

	TextureManager::Instance()->drawTexture("war", imageX, imageY, IMAGE_WIDTH, IMAGE_HEIGHT, renderer);


	//TextureManager::Instance()->drawOneFrameFromTexture("sprite_sheet", 0, 0, 130, 130, 1, currentFrame, renderer);
	/*TextureManager::Instance()->drawOneFrameFromTexture("war", 0, 130, 221, 150, 1, currentFrame, renderer);*/
	//TextureManager::Instance()->drawOneFrameFromTexture("sprite_sheet", 0, 150, 221, 150, 2, currentFrame, renderer);

	/*SDL_RenderCopy(renderer, texture, &sourceRectangle, &destinationRectangle);
	TextureManager::Instance()->drawTexture("jpg", 0, 0, 187, 269, renderer);
	TextureManager::Instance()->drawTexture("jpg", 0, 0, 187, 269, renderer, SDL_FLIP_HORIZONTAL);*/

	//TextureManager::Instance()->drawTexture("sprite_sheet", 200, 0, 187, 269, renderer);
	//TextureManager::Instance()->drawTexture("sprite_sheet", 200, 0, 187, 269, renderer, SDL_FLIP_HORIZONTAL);

	SDL_RenderPresent(renderer);
}

void Game::update() {
	//std::cout << "SDL_TICKS: " << SDL_GetTicks() << "\n";
	//std::cout << "SDL_TICKS / 150: " << int((SDL_GetTicks() / 150)) << "\n";
	//std::cout << "SDL_TICKS / 150 % 5: " << int(((SDL_GetTicks() / 150) % 5)) << "\n" << std::endl;

	currentFrame = int(((SDL_GetTicks() / 150) % 5)); // % 5 for 5 frames

	imageX += velocity;
	// Check if the image has reached the right edge of the screen
	if (imageX + IMAGE_WIDTH >= SDL_GetWindowSurface(window)->w) {
		// Reverse the velocity to make it move left
		velocity = -velocity;
		// Increase velocity for acceleration effect
		velocity *= 1.0; // You can adjust the acceleration factor as needed
	}
	// Check if the image has reached the left edge of the screen
	if (imageX <= 0) {
		// Reset position and velocity
		imageX = 0;
		velocity = 1; // Reset velocity to initial value
	}

}

void Game::handleEvents() {
	SDL_Event event;

	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT:
			running = false;
			break;

		default:
			break;
		}
	}
}

void Game::clean() {
	std::cout << "cleaning game\n";

	//TextureManager::Instance()->clearTextureMap();
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning() {
	return Game::running;
}