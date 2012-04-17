/**
*
*  @file RectangleGraphic.h
*  
*  Declaration of class RectangleGraphic.
*
*  @author Patrick Schwab 
*  @date 4/17/12
*
*/

#pragma once

#include "Graphic.h"
#include <QtGui/QColor.h>

/**
* @class RectangleGraphic
*
* ${DESCRIPTION}
*
* @author Patrick Schwab
*/
class RectangleGraphic : public Graphic {
public:
    RectangleGraphic(int x, int y, int width, int height, QPainter* painter) : 
        Graphic(painter),
        x_(x), y_(y), 
        width_(width), 
        height_(height)
    {;}
    
	virtual void draw() const
    {
        painter_->drawRect(x_, y_, width_, height_);
    }
    
private:
    int x_, y_, width_, height_;
};
