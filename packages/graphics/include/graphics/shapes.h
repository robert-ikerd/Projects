#pragma once
#include <SDL3/SDL.h>
#include "graphics/colors.h"

namespace Graphics {
    void DrawCircle(SDL_Renderer* renderer, Graphics::Color color, float centerX, float centerY, float radius);
    void DrawTriangle(SDL_Renderer* renderer, float centerX, float centerY, float length, float height, float width);
    void DrawRectangle(SDL_Renderer* renderer, float centerX, float centerY, float height, float width);
}