#include "display.h"

#include <QDebug>

namespace ProcGen {

namespace AbstractGameComponent {

  
/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
Display::Display()
{
}

  
/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
Display::~Display()
{
}


/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void Display::initialize()
{
}

/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void Display::resize(int width, int height)
{
}
  
/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void Display::initRenderStep()
{
}

/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void Display::cleanupRenderStep()
{
}


/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
unsigned int Display::bindTexture(const QImage& image) const {

}

/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void Display::drawBody(b2Body* body) const {


}

/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void Display::drawActor(NxActor* actor) const {


}


/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void Display::drawCube() const
{
}

/****************************************************************************
**
** Author: Richard Baxter
**
****************************************************************************/
void Display::drawPolygon(const QVector<double>& points) const
{
}




} /* end of namespace AbstractGameComponent */

} /* end of namespace ProcGen */













