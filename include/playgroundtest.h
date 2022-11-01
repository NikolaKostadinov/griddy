#pragma once

#include "../include/SDL2/SDL.h"
#include "../include/SDL2/SDL_image.h"
#include <iostream>

namespace playground
{
    void testVideo()
    {
        if (SDL_Init(SDL_INIT_VIDEO) > 0)
                std::cout << "SDL_INIT_VIDEO ERROR: " << SDL_GetError() << std::endl;
    }

    void testImage()
    {
        if (!IMG_Init(IMG_INIT_PNG))
            std::cout << "IMG_INIT_PNG ERROR: " << SDL_GetError() << std::endl;
    }
}