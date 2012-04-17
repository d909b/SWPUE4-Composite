/**
*
*  @file HouseRowGraphic.h
*  
*  Declaration of class HouseRowGraphic.
*
*  @author Patrick Schwab 
*  @date 4/17/12
*
*/

#pragma once

#include "HouseGraphic.h"

/**
* @class HouseRowGraphic
*
* ${DESCRIPTION}
*
* @author Patrick Schwab
*/
class HouseRowGraphic : public GraphicComposite {
public:
    HouseRowGraphic(int x, int y, int numRows, QPainter* painter) :
        GraphicComposite(painter)
    {
        for(int i = 0; i < numRows; ++i)
        {
            add(new HouseGraphic(x + i * 100, y, painter_));
        }
    }
};
