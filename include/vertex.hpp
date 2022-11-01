#pragma once

#include "color.h"

#include "../include/SDL2/SDL.h"

class Vertex
{
    public:

        Vertex();
        virtual ~Vertex();

        Vertex(
            uint32_t _index_,
            uint32_t _jndex_
        );
        
        void setColor(color  _color_);
        void moveTo(uint32_t _index_, uint32_t _jndex_);
        void render();

        uint32_t  index();
        uint32_t  jndex();
        uint32_t xCoord();
        uint32_t yCoord();

    protected:

        uint32_t _xIndex;
        uint32_t _yIndex;
        color    _color ;
};