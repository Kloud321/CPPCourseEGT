#include "Game.h"

int c = 0;

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::currentFrame = 0;

	pic1Visible = false;
	pic2Visible = false;
	pic3Visible = false;
	pic4Visible = false;
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

				if (!TextureManager::Instance()->loadTexture("images/pic1.bmp", "pic1", renderer)) {
					std::cerr << "Failed to load texture 'pic1.bmp'\n";
					return false;
				}
				if (!TextureManager::Instance()->loadTexture("images/pic2.bmp", "pic2", renderer)) {
					std::cerr << "Failed to load texture 'pic2.bmp'\n";
					return false;
				}
				if (!TextureManager::Instance()->loadTexture("images/pic3.bmp", "pic3", renderer)) {
					std::cerr << "Failed to load texture 'pi3c.bmp'\n";
					return false;
				}
				if (!TextureManager::Instance()->loadTexture("images/pic4.bmp", "pic4", renderer)) {
					std::cerr << "Failed to load texture 'pic4.png'\n";
					return false;
				}

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
	
	// Setting window color
	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF); // black color
	SDL_RenderClear(renderer);

	// Init WinWidth, WinHeight
	int ww, wh;
	// Getting the window size
	SDL_GetWindowSize(window, &ww, &wh);

	//Render & color white
	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
	// Drawing a lines
	SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh/2);
	SDL_RenderDrawLine(renderer, ww/2, 0, ww/2, ww/2);


	// Calculate dimensions of one-fourth of the screen
	int quarterWidth = ww / 2;
	int quarterHeight = wh / 2;

	// Render pictures based on visibility status
	if (pic1Visible) {
		TextureManager::Instance()->drawTexture("pic1", 0, 0, quarterWidth, quarterHeight, renderer); // Top-left rectangle
	}
	if (pic2Visible) {
		TextureManager::Instance()->drawTexture("pic2", ww / 2, 0, quarterWidth, quarterHeight, renderer); // Top-right rectangle
	}
	if (pic3Visible) {
		TextureManager::Instance()->drawTexture("pic3", 0, wh / 2, quarterWidth, quarterHeight, renderer); // Bottom-left rectangle
	}
	if (pic4Visible) {
		TextureManager::Instance()->drawTexture("pic4", ww / 2, wh / 2, quarterWidth, quarterHeight, renderer); // Bottom-right rectangle
	}


	//TextureManager::Instance()->drawTexture("pic1", imageX, imageY, IMAGE_WIDTH, IMAGE_HEIGHT, renderer);
	//TextureManager::Instance()->drawTexture("pic2", imageX, imageY, IMAGE_WIDTH, IMAGE_HEIGHT, renderer);
	//TextureManager::Instance()->drawTexture("pic3", imageX, imageY, IMAGE_WIDTH, IMAGE_HEIGHT, renderer);
	//TextureManager::Instance()->drawTexture("pic4", imageX, imageY, IMAGE_WIDTH, IMAGE_HEIGHT, renderer);

	//TextureManager::Instance()->drawOneFrameFromTexture("sprite_sheet", 0, 0, 130, 130, 1, currentFrame, renderer);
	/*TextureManager::Instance()->drawOneFrameFromTexture("war", 0, 130, 221, 150, 1, currentFrame, renderer);*/
	//TextureManager::Instance()->drawOneFrameFromTexture("sprite_sheet", 0, 150, 221, 150, 2, currentFrame, renderer);

	//SDL_RenderCopy(renderer, texture, &sourceRectangle, &destinationRectangle);
	//TextureManager::Instance()->drawTexture("jpg", 0, 0, 187, 269, renderer);
	//TextureManager::Instance()->drawTexture("jpg", 0, 0, 187, 269, renderer, SDL_FLIP_HORIZONTAL);

	//TextureManager::Instance()->drawTexture("sprite_sheet", 200, 0, 187, 269, renderer);
	//TextureManager::Instance()->drawTexture("sprite_sheet", 200, 0, 187, 269, renderer, SDL_FLIP_HORIZONTAL);

	SDL_RenderPresent(renderer);
}

void Game::update() {
	//std::cout << "SDL_TICKS: " << SDL_GetTicks() << "\n";
	//std::cout << "SDL_TICKS / 150: " << int((SDL_GetTicks() / 150)) << "\n";
	//std::cout << "SDL_TICKS / 150 % 5: " << int(((SDL_GetTicks() / 150) % 5)) << "\n" << std::endl;

	currentFrame = int(((SDL_GetTicks() / 150) % 5)); // % 5 for 5 frames

}

void Game::handleEvents() {
	SDL_Event event;

	int ww, wh;
	// Getting the window size
	SDL_GetWindowSize(window, &ww, &wh);
	int quarterWidth = ww / 2;
	int quarterHeight = wh / 2;

	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT:
			running = false;
			break;

		case SDL_MOUSEBUTTONDOWN:
			int mouseX, mouseY;
			SDL_GetMouseState(&mouseX, &mouseY);

			if (mouseX >= 0 && mouseX < quarterWidth && mouseY >= 0 && mouseY < quarterHeight) {
				// Clicked on the top-left rectangle
				cout << "Changed visibility of pic1" << endl;
				pic1Visible = !pic1Visible; // Toggle visibility of pic1
			}
			else if (mouseX >= quarterWidth && mouseX < ww && mouseY >= 0 && mouseY < quarterHeight) {
				// Clicked on the top-right rectangle
				cout << "Changed visibility of pic2" << endl;
				pic2Visible = !pic2Visible; // Toggle visibility of pic2
			}
			else if (mouseX >= 0 && mouseX < quarterWidth && mouseY >= quarterHeight && mouseY < wh) {
				// Clicked on the bottom-left rectangle
				cout << "Changed visibility of pic3" << endl;
				pic3Visible = !pic3Visible; // Toggle visibility of pic3
			}
			else if (mouseX >= quarterWidth && mouseX < ww && mouseY >= quarterHeight && mouseY < wh) {
				// Clicked on the bottom-right rectangle
				cout << "Changed visibility of pic4" << endl;
				pic4Visible = !pic4Visible; // Toggle visibility of pic4
			}

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