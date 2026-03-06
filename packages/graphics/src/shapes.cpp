#include "graphics/shapes.h"
#include "graphics/colors.h"

namespace Graphics {
    void DrawCircle(SDL_Renderer* renderer, Graphics::Color color, float centerX, float centerY, float radius) {
        SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
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