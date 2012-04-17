/**
*
*  @file Graphic.h
*  
*  Declaration of class Graphic.
*
*  @author Patrick Schwab 
*  @date 4/17/12
*
*/

#pragma once

#include <QtGui/QPainter.h>

/**
* @class Graphic
*
* ${DESCRIPTION}
*
* @author Patrick Schwab
*/
class Graphic {
public:
    Graphic(QPainter* painter) : painter_(painter) {;}
    
    virtual ~Graphic() {;}
    virtual void draw() const = 0;
    
protected:
    QPainter* painter_;
};
