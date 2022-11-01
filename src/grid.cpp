#include "../include/grid.hpp"

Grid::Grid()
{
    setPosition(      );
    setSize    (0u, 0u);
    setVertices(      );
    setWindow  (      );
}

Grid::~Grid()
{

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