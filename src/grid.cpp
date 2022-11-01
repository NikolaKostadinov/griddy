#include "../include/grid.hpp"

using namespace GRIDDY;

Grid::Grid(Window* _toWindow_)
{
    setPosition(          );
    setSize    (0u,     0u);
    setVertices(          );
    setWindow  (_toWindow_);
}

Grid::~Grid()
{
    uint32_t size = _xSize * _ySize;
    for (uint32_t i = 0u; i < size; i++)
        delete (_toOrigin + i);
}

void Grid::setPosition(SDL_Rect _rect_)
{
    _rect = _rect_;
}

void Grid::setSize(uint32_t _xSize_, uint32_t _ySize_)
{
    _xSize = _xSize_;
    _ySize = _ySize_;
}

void Grid::setVertices(Vertex* _toOrigin_)
{
    _toOrigin = _toOrigin_;
}

void Grid::setWindow(Window* _toWindow_)
{
    _toWindow = _toWindow_;
}

void Grid::render()
{
    uint32_t      n = 0u  ;
    uint32_t      x = 0u  ;
    uint32_t      y = 0u  ;
    uint32_t deltaX = dx();
    uint32_t deltaY = dy();

    Vertex*   thisVert = _toOrigin     ;
    SDL_Rect* vertRect = new SDL_Rect();
    vertRect->w        =   (int) deltaX;
    vertRect->h        =   (int) deltaY;
    
    SDL_Renderer* renderer = _toWindow->renderer(); 

    for (uint32_t i = 0u; i < _xSize; i++)
        for (uint32_t j = 0u; j < _ySize; j++)
        {
            x = i * deltaX;
            y = j * deltaY;
            n = j * _ySize + i;

            vertRect->x = x;
            vertRect->y = y;

            thisVert = _toOrigin + n;
            thisVert->render(vertRect, renderer);
        }
}

uint32_t Grid::dx()
{
    return _rect.w / _xSize;
}

uint32_t Grid::dy()
{
    return _rect.h / _ySize;
}