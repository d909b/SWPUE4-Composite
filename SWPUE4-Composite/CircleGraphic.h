/**
*
*  @file CircleGraphic.h
*  
*  Declaration of class CircleGraphic.
*
*  @author Patrick Schwab 
*  @date 4/17/12
*
*/

#pragma once

#include "Graphic.h"

/**
* @class CircleGraphic
*
* ${DESCRIPTION}
*
* @author Patrick Schwab
*/
class CircleGraphic : public Graphic {
public:
    CircleGraphic(int x, int y, int width, int height, QPainter* painter) : 
        Graphic(painter),
        x_(x), y_(y), 
        width_(width), 
        height_(height)
    {;}
    
    virtual void draw() const
    {        
        QRectF rectangle(x_, y_, width_, height_);
        painter_->drawArc(rectangle, 0, 16 * 360);
    }
private:
    int x_, y_, width_, height_;
};
