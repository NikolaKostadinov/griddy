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
    uint32_t size = _xSize * _ySize;
    for (uint32_t i = 0u; i < size; i++)
        (_toOrigin + i)->render();
}