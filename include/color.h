#pragma once

#include <stdint.h>

struct Color
{
    uint8_t red  ;
    uint8_t green;
    uint8_t blue ;

    Color()
    {
        red   = 0x0;
        green = 0x0;
        blue  = 0x0;
    }

    Color(
        uint8_t _red_  ,
        uint8_t _green_,
        uint8_t _blue_
    )
    {
        red   = _red_  ;
        green = _green_;
        blue  = _blue_ ;
    }
};

typedef Color color;