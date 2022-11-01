#pragma once

#include "../include/SDL2/SDL.h"
#include "../include/SDL2/SDL_image.h"
#include <iostream>

class Window
{
    public:

        bool isRunning;

        Window(
            const char* _title_ ,
            int         _width_ ,
            int         _height_
        );

        void          cleanUp ();
        void          display ();
        void          clear   ();
        
        int           width   ();
        int           height  ();
        SDL_Renderer* renderer();

    protected:

        int           _width   ;
        int           _height  ;
        SDL_Window*   _window  ;
        SDL_Renderer* _renderer;
};