#pragma once
#include <array>
#include <SDL3/SDL.h>
#include "graphics/colors.h"

namespace Graphics {
    struct Vertex {
        float x,y;
        Vertex (float x, float y);
    };
    class Circle {
        public:
            Graphics::Color color;
            Graphics::Vertex center;
            float radius;
            Circle (Graphics::Color color, Graphics::Vertex center, float radius);
            void draw(SDL_Renderer* renderer);
            void rotate(float degrees);
    };
    class Triangle {
        public:
            Graphics::Color color;
            std::array<Graphics::Vertex, 3> points;
            Triangle (Graphics::Color color, std::array<Graphics::Vertex, 3> points);
            void draw(SDL_Renderer* renderer);
            void rotate(float degrees);
    };
}