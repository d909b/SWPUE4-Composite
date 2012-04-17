/**
*
*  @file DemoWindow.cpp
*  
*  Implementation of class DemoWindow.
*
*  @author Patrick Schwab 
*  @date 4/17/12
*
*/

#include "DemoWindow.h"
#include "HouseRowGraphic.h"

DemoWindow::DemoWindow()
{
	setWindowTitle("Composite Demo");
}

void 
DemoWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    
    /** Set coordinate system to bottom left corner of window */
    QMatrix m;
    m.translate(0, height());
    m.scale( 1, -1 );
    
    painter.setMatrix( m );
    
    painter.setPen(Qt::blue);
    painter.setBrush(Qt::BrushStyle::Dense6Pattern);
    
    HouseRowGraphic graphic(50, 50, 6, &painter);
    
    graphic.draw();
}
