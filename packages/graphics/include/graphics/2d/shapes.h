#pragma once
#include <SDL3/SDL.h>
#include "graphics/colors.h"

namespace Graphics {
    void DrawCircle(SDL_Renderer* renderer, Graphics::Color color, float centerX, float centerY, float radius);
    void DrawRectangle(SDL_Renderer* renderer, Graphics::Color color, float centerX, float centerY, float width, float height);
}