#include "gl_display.h"

#include <QDebug>

namespace ProcGen {

namespace GUI {

  
/****************************************************************************
**
** Author: Richard Baxter
**
** Default Constructor
**
****************************************************************************/
GLDisplay::GLDisplay(GLDisplayWidget& glDisplayWidget) : glDisplayWidget(glDisplayWidget)
{
  connect (&glDisplayWidget, SIGNAL (sendingContext()), this, SIGNAL(ready()));
}


/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
GLDisplay::~GLDisplay()
{

}


/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void GLDisplay::requestReady() {
  glDisplayWidget.updateGL ();
}


/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
bool GLDisplay::isInitialized() const {
  return initialized;
}

/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void GLDisplay::initRenderStep()
{
  qDebug() << "initRenderStep";
  
}

/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void GLDisplay::cleanupRenderStep()
{
  qDebug() << "cleanupRenderStep";
}

/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void GLDisplay::drawCube(double cx, double cy, double cz, double sx, double sy, double sz)
{
}

/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void GLDisplay::drawPolygon(const QVector<double>& points)
{
  //qDebug() << "currentContext: " << QGLContext::currentContext ();
  //qDebug() << "drawPolygon - " << points;
  glBegin(GL_POLYGON);
    for (int i = 0 ; i < points.size() ; i+= 3) {
      //qDebug() << points[i];
      //qDebug() << points[i+1];
      //qDebug() << points[i+2];
      //qDebug() << "---";
        
      glVertex3d(points[i], points[i+1], points[i+2]);
    }  
  glEnd();
  
}

  







  
} /* end of namespace GUI */

} /* end of namespace ProcGen */












