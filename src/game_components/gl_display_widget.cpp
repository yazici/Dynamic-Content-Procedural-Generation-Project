#include "gl_display.h"

#include <QDebug>
#include <QMouseEvent>

namespace ProcGen {

namespace GameComponent {

  
/****************************************************************************
**
** Author: Richard Baxter
**
** Default Constructor
**
****************************************************************************/
GLDisplayWidget::GLDisplayWidget(QWidget* parent) : QGLWidget(parent)
{
  setMouseTracking ( true );
}


/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
GLDisplayWidget::~GLDisplayWidget()
{

}


/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void GLDisplayWidget::initializeGL()
{
  qDebug() << "initializeGL";         
  
  glClearColor(0.0, 0.0, 0.0, 0.0);

  /*FIXME this should move, similar vibe to rendering... if I ever get that working*/
  glEnable(GL_DEPTH_TEST);
  
  glMatrixMode(GL_MODELVIEW);

  qDebug() << "currentContext: " << QGLContext::currentContext ();

}



/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void GLDisplayWidget::paintGL() {
  qDebug() << "paintGL";
  emit sendingContext();
}


void GLDisplayWidget::resizeGL ( int width, int height ) {
  qDebug() << "resizeGL - " << width << " " << height;

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glViewport(0, 0, width, height);
  glOrtho(	0, width, height, 0, -10000, 10000);
  gluPerspective( 45/*GLdouble	fovy*/,
			            1/*GLdouble	aspect*/,
			            0.1/*GLdouble	zNear*/,
			            10000/*GLdouble	zFar*/ );

  glMatrixMode(GL_MODELVIEW);
}

/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void GLDisplayWidget::mouseMoveEvent ( QMouseEvent * event ) {
  emit mouseMoved(event->pos ());
}
  
} /* end of namespace GameComponent */

} /* end of namespace ProcGen */













