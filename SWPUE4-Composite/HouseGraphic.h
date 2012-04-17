/**
*
*  @file HouseGraphic.h
*  
*  Declaration of class HouseGraphic.
*
*  @author Patrick Schwab 
*  @date 4/17/12
*
*/

#pragma once

#include "GraphicComposite.h"
#include "RectangleGraphic.h"
#include "TriangleGraphic.h"
#include "CircleGraphic.h"

/**
* @class HouseGraphic
*
* ${DESCRIPTION}
*
* @author Patrick Schwab
*/
class HouseGraphic : public GraphicComposite {
public:
	HouseGraphic(int x, int y, QPainter* painter) :
        GraphicComposite(painter)
    {
        TriangleGraphic* tri = new TriangleGraphic(x, y + 100, 100, 70, painter_);
        RectangleGraphic* rect = new RectangleGraphic(x, y, 100, 100, painter_);
        
        CircleGraphic* cir = new CircleGraphic(x + 15, y + 60, 25, 25, painter_);
        CircleGraphic* cir2 = new CircleGraphic(x + 60, y + 60, 25, 25, painter_);
        
        RectangleGraphic* rect2 = new RectangleGraphic(x + 15, y, 25, 35, painter_);
        
        add(tri);
        add(rect);
        add(rect2);
        add(cir);
        add(cir2);
    }
};
