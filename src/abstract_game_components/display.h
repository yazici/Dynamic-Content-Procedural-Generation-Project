#ifndef __PROCGEN_ABSTRACTGAMECOMPONENT_DISPLAY_H__
#define __PROCGEN_ABSTRACTGAMECOMPONENT_DISPLAY_H__

#include <QVector>
#include <QFont>
#include <QObject>
#include <QImage>

//#include "Box2D.h"
#include "NxPhysics.h"

namespace ProcGen {

namespace AbstractGameComponent {

  
class Display {


  protected: /* class specific */

  Display();
  virtual ~Display();
  
  public: /* methods */
  
  virtual void initialize() = 0;
  
  virtual void resize (int width, int height) = 0;
  
  virtual void initRenderStep() = 0;
  
  virtual void setUpCamera(double x, double y, double z, double pitch, double yaw) const = 0;
  virtual unsigned int loadTexture(const QImage& image) const = 0;
  virtual void bindTexture(unsigned int id = -1) const  = 0;

  //virtual void drawBody(b2Body* body) const = 0;
  virtual void drawActor(NxActor* actor) const = 0;
  
  virtual void setColour(double red, double green, double blue, double alpha = 1.0) const = 0;
  
  virtual void drawText2D(int x, int y, const QString & str, const QFont & fnt = QFont ( ), int listBase = 2000 ) const = 0;
  //void drawMesh, etc
  
  virtual void cleanupRenderStep() = 0;
  
  
};

} /* end of namespace AbstractGameComponent */

} /* end of namespace ProcGen */



#endif /* __PROCGEN_GAME_ABSTRACTDISPLAY_H__ */

