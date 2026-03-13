#include "graphics/colors.h"
#include "graphics/2d/shapes.h"

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
    void DrawRectangle(SDL_Renderer* renderer, Graphics::Color color, float centerX, float centerY, float width, float height) {
        SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
        for (int w = 0; w < width; w++) {
            for (int h = 0; h < height; h++) {
                float dx = width/2 - w;
                float dy = height/2 - h;
                SDL_RenderPoint(renderer, centerX + dx, centerY + dy);
            }
        }
    }
}