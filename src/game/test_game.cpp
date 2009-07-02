#include "test_game.h"

#include <QDebug>

namespace ProcGen {

namespace Game {

  

/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
TestGame::TestGame() : AbstractGame(), framecount(0)
{

}


/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
TestGame::~TestGame()
{

}


/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void TestGame::initStep(void * pntr)
{
  qDebug() << "TestGame::initStep";
}


/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void TestGame::logicStep(void * pntr)
{
  qDebug() << "TestGame::logicStep";
  framecount++;
}


/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void TestGame::renderStep(void * pntr)
{

  qDebug() << "TestGame::renderStep";
  

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  
  glRotated(45, 0,0,1);

  glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); 
  
  {
    glColor3f(0.0,0.0,1.0);
    QVector<double> points;
    points.append(  0.1); points.append(  0.1); points.append(0.5);
    
    points.append( 100); points.append(  0.1); points.append(0.5);
    
    points.append( 100); points.append( 100); points.append(0.5);
    
    points.append(  0.1); points.append( 100); points.append(0.5);
     
    displayer->drawPolygon(points);
  }
}


} /* end of namespace Game */

} /* end of namespace ProcGen */

