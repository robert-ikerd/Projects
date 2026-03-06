#pragma once
#include <SDL3/SDL.h>

namespace Graphics {

    struct Color {
        uint8_t r, g, b, a;
    };

    namespace Colors {
        extern const Color White;
        extern const Color Black;
        extern const Color Red;
        extern const Color Blue;
    }
}