#pragma once

#include <iostream>
using std::cout;
using std::endl;
#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"
//#include "Shapes.h"

class Game {
public:
	Game();
	~Game();

	bool init(const char* title,
		int xpos, int ypos,
		int width, int height,
		int flags);

	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning();

private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;
	int currentFrame;

	bool pic1Visible;
	bool pic2Visible;
	bool pic3Visible;
	bool pic4Visible;
};