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

    const uint32_t      N = 2u;
    const griddy::color C = griddy::Color(0x00, 0xff, 0x00);

    griddy::Window window = griddy::Window(     );
    griddy::Grid   grid   = griddy::Grid(&window);
    griddy::Vertex vertices [N][N];

    for (uint32_t i = 0u; i < N; i++)
        for (uint32_t j = 0u; j < N; j++)
        {
            vertices[i][j] = griddy::Vertex(i, j);
            vertices[i][j].setColor(C);
        }

    grid.setSize(N, N);
    grid.setVertices(&vertices[0][0]);

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