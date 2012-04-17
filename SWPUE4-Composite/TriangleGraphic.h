/**
*
*  @file TriangleGraphic.h
*  
*  Declaration of class TriangleGraphic.
*
*  @author Patrick Schwab 
*  @date 4/17/12
*
*/

#pragma once

#include "Graphic.h"

/**
* @class TriangleGraphic
*
* ${DESCRIPTION}
*
* @author Patrick Schwab
*/
class TriangleGraphic : public Graphic {
public:
    /** x, y are bottom left coordinates of triangle */
    TriangleGraphic(int x, int y, int width, int height, QPainter* painter) :
        Graphic(painter),
        x_(x), y_(y), 
        width_(width), 
        height_(height)
    {;}
    
	virtual void draw() const
    {        
        const QPointF points[4] = {
            QPointF(x_, y_),
            QPointF(x_ + width_ / 2, y_ + height_),
            QPointF(x_ + width_, y_),
            QPointF(x_, y_)
        };
        
        painter_->drawPolygon(points, 4);
    }
private:
    int x_, y_, width_, height_;
};
