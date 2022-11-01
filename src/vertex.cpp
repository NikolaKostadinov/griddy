#include "../include/vertex.hpp"

Vertex::Vertex()
{
    _xIndex = 0u;
    _yIndex = 0u;
}

Vertex::~Vertex()
{

}

Vertex::Vertex(uint32_t _index_, uint32_t _jndex_)
{
    _xIndex = _index_;
    _yIndex = _jndex_;
}

void Vertex::render()
{
    SDL_Rect* block = new SDL_Rect;
    block->x        = xCoord()    ;
    block->y        = yCoord()    ;
    //block->w        = dx()        ;
    //block->h        = dy()        ;

    //SDL_SetRenderDrawColor(_toRenderer_, color.red, color.green, color.blue, 255);
    //SDL_RenderFillRect(_toRenderer_, block)               ;

    delete block;
}

uint32_t Vertex::index()
{
    return _xIndex;
}

uint32_t Vertex::jndex()
{
    return _yIndex;
}

uint32_t Vertex::xCoord()
{
    return _xIndex;
}

uint32_t Vertex::yCoord()
{
    return _yIndex;
}