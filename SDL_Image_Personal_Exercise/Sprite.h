#pragma once

#include "SDL.h"

class Sprite {

public:

	Sprite();
	~Sprite();

	void init(Uint32 color, int x, int y, int w = 48, int h = 64);
	void draw(SDL_Renderer*);
	void update();

private:

	SDL_Rect rect;	

};