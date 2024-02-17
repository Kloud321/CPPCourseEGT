#pragma once

#include <iostream>

#include <SDL.h>
#include <SDL_image.h>

class Game {
public:
	Game();
	~Game();

	bool init(const char* title,
		int xpos, int ypos,
		int width, int height,
		int flags);

	void render();
	void capFrameRate();
	void update();
	void handleEvents();
	void clean();
	bool isGameRunning();

private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	Uint32 startingTick;
	bool isRunning;
	int currentFrame;
};