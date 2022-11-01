#include "../include/vertex.hpp"

using namespace GRIDDY;

Vertex::Vertex(uint32_t _index_, uint32_t _jndex_)
{
    moveTo(_index_,_jndex_);
}

Vertex::~Vertex()
{

}

void Vertex::setColor(color _color_)
{
    _color = _color_;
}

void Vertex::moveTo(uint32_t _index_, uint32_t _jndex_)
{
    _xIndex = _index_;
    _yIndex = _jndex_;
}

void Vertex::render(SDL_Rect* _rect_, SDL_Renderer* _renderer_)
{
    SDL_SetRenderDrawColor(
        _renderer_  ,
        _color.red  ,
        _color.green,
        _color.blue ,
        255
    );
    SDL_RenderFillRect(
        _renderer_,
        _rect_
    );
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