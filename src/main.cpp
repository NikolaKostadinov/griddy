#define SDL_MAIN_HANDLED                                                // windows stuff

#include "../include/griddy.h"

#include "../include/SDL2/SDL.h"
#include "../include/SDL2/SDL_image.h"
#include <iostream>
#include <cmath>

int main(int argc, char* args[])
{
    testVideo();
    testImage();

    const char* title = "";
    Window window = Window(title, 100, 100);

    SDL_Event event;
    while (window.isRunning)
    {
        while ( SDL_PollEvent(&event) )
            if (event.type == SDL_QUIT)
                window.cleanUp();

        window.clear();
        // CODE HERE
        window.display();
    }

    SDL_Quit();                                                         // goodbye
    return 0;
}