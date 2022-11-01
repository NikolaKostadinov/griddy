#pragma once

#include "vertex.hpp"
#include "window.hpp"

#include "../include/SDL2/SDL.h"

class Grid
{
    public:

        Grid();
        virtual ~Grid();

        void setPosition(SDL_Rect _rect_    );
        void setSize    (
            uint32_t _xSize_,
            uint32_t _ySize_
        );
        void setVertices(Vertex*  _toOrigin_);
        void setWindow  (Window*  _toWindow_);
        
        void render     (                   );

    protected:

        SDL_Rect _rect    ;
        uint32_t _xSize   ;
        uint32_t _ySize   ;
        Vertex*  _toOrigin;
        Window*  _toWindow;
};