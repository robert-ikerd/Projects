#include "graphics/colors.h"
#include "graphics/2d/shapes.h"

namespace Graphics {
    Vertex::Vertex(float x, float y) : x(x), y(y) {}

    Circle::Circle(Graphics::Color color, Graphics::Vertex center, float radius) : color(color), center(center), radius(radius) {}
    void Circle::draw(SDL_Renderer* renderer) {
        SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
        for (int w = 0; w < radius * 2; w++) {
            for (int h = 0; h < radius * 2; h++) {
                float dx = radius - w;
                float dy = radius - h;
                if ((dx * dx + dy * dy) <= (radius * radius)) {
                    SDL_RenderPoint(renderer, center.x + dx, center.y + dy);
                }
            }
        }
    }
    void Circle::rotate(float degrees) {}

    Triangle::Triangle(Graphics::Color color, std::array<Graphics::Vertex, 3> points) : color(color), points(points) {}
    void Triangle::draw(SDL_Renderer* renderer) {
        // SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
        SDL_Vertex vertices[3];

        for (int i = 0; i < 3; i++) {
            vertices[i].position.x = points[i].x;
            vertices[i].position.y = points[i].y;
            
            vertices[i].color.r = color.r / 255.0f;
            vertices[i].color.g = color.g / 255.0f;
            vertices[i].color.b = color.b / 255.0f;
            vertices[i].color.a = color.a / 255.0f;
        };
        SDL_RenderGeometry(renderer, nullptr, vertices, 3, nullptr, 0);
    }
    void Triangle::rotate(float degrees) {}


}