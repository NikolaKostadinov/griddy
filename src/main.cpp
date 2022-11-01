#define SDL_MAIN_HANDLED                                                // windows stuff

#include "../include/griddy.h"

#include "../include/SDL2/SDL.h"
#include "../include/SDL2/SDL_image.h"
#include <iostream>
#include <cmath>

int main(int argc, char* args[])
{
    griddy::testVideo();
    griddy::testImage();

    Window window = Window();

    SDL_Event event;
    while (window.isRunning)
    {
        while ( SDL_PollEvent(&event) )
            if (event.type == SDL_QUIT)
                window.destroy();

        window.clear();

        // CODE HERE //

        window.display();
    }

    SDL_Quit();                                                         // goodbye
    return 0;
}