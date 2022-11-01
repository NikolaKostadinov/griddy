#include "../include/window.hpp"

Window::Window(const char* _toTitle_, uint32_t _width_, uint32_t _height_) : _window(NULL), _renderer(NULL)
{
    isRunning = true;

    _width  = _width_ ;
    _height = _height_;

    _window = SDL_CreateWindow(
        _toTitle_              ,
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        (int) _width           ,
        (int) _height          ,
        SDL_WINDOW_SHOWN
    );

    if (_window == NULL)
    {
        std::cout << "SDL_WINDOW ERROR: " << SDL_GetError() << std::endl;
        isRunning = false;
    }

    _renderer = SDL_CreateRenderer(
        _window                 ,
        -1                      ,
        SDL_RENDERER_ACCELERATED
    );
}

Window::~Window()
{
    destroy();
}

void Window::destroy()
{
    SDL_DestroyWindow  (_window  );
    SDL_DestroyRenderer(_renderer);
    isRunning = false;
}

void Window::display()
{
    SDL_RenderPresent(_renderer);
}

void Window::clear()
{
    SDL_RenderClear(_renderer);
}

uint32_t Window::width()
{
    return _width;
}

uint32_t Window::height()
{
    return _height;
}

SDL_Renderer* Window::renderer()
{
    return _renderer;
}