#pragma once

#include "playgroundparams.h"
#include "window.hpp"

#include "../include/SDL2/SDL.h"

class Vertex
{
    public:

        Vertex();
        ~Vertex();

        Vertex(uint32_t _index_, uint32_t _jndex_);
        
        void setColor();
        void render();

        uint32_t xIndex();
        uint32_t yIndex();
        int      xCoord();
        int      yCoord();

    private:

        uint32_t _xIndex;
        uint32_t _yIndex;
};