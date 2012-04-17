/**
*
*  @file DemoWindow.h
*  
*  Declaration of class DemoWindow.
*
*  @author Patrick Schwab 
*  @date 4/17/12
*
*/

#pragma once

#include <QtGui/QWidget.h>

/**
* @class DemoWindow
*
* ${DESCRIPTION}
*
* @author Patrick Schwab
*/
class DemoWindow : public QWidget {
public:
	DemoWindow();
protected:
    void paintEvent(QPaintEvent *event);
};
