//
//  main.cpp
//  SWPUE4-Composite
//
//  Created by Patrick Schwab on 4/17/12.
//  Copyright (c) 2012 Patrick Schwab. All rights reserved.
//

#include <QtGui/QApplication.h>
#include "DemoWindow.h"

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);
    
    DemoWindow window;
    
    window.show();
    
    return app.exec();
}

