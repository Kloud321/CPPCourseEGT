#include "Sprite.h"

Sprite::Sprite()  {}
    
Sprite::~Sprite() {
}

void Sprite::init(Uint32 color, int windowWidth, int windowHeight, int rectWidth, int rectHeight) {
    
    int x = (windowWidth - rectWidth) / 2;
    int y = (windowHeight - rectHeight) / 2;

    rect.x = x;
    rect.y = y;
    rect.w = rectWidth;
    rect.h = rectHeight;
}

void Sprite::draw(SDL_Renderer* renderer) {
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &rect);
}

void Sprite::update() {
  
}
