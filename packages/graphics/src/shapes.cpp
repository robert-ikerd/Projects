#include "graphics/shapes.h"

namespace Graphics {
    void DrawCircle(SDL_Renderer* renderer, float centerX, float centerY, float radius) {
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        for (int w = 0; w < radius * 2; w++) {
            for (int h = 0; h < radius * 2; h++) {
                float dx = radius - w;
                float dy = radius - h;
                if ((dx * dx + dy * dy) <= (radius * radius)) {
                    SDL_RenderPoint(renderer, centerX + dx, centerY + dy);
                }
            }
        }
    }
}