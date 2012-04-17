/**
*
*  @file GraphicComposite.h
*  
*  Declaration of class GraphicComposite.
*
*  @author Patrick Schwab 
*  @date 4/17/12
*
*/

#pragma once

#include <QtCore/QVector.h>
#include "Graphic.h"

/**
* @class GraphicComposite
*
* ${DESCRIPTION}
*
* @author Patrick Schwab
*/
class GraphicComposite : public Graphic {
public:
    GraphicComposite(QPainter* painter) : Graphic(painter) {;}
    
    ~GraphicComposite()
    {
        children.clear();
    }
    
    virtual void draw() const
    {
        Q_FOREACH(const Graphic* graphic, children)
        {
            graphic->draw();
        }
    }
    
    /** Takes ownership */
    void add(const Graphic* graphic)
    {
        children.append(graphic);
    }
    
    void remove(const Graphic* graphic)
    {
        int idx = children.indexOf(graphic);
        
        children.remove(idx);
    }
private:
    QVector<const Graphic*> children;
};
