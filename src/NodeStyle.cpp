#include "NodeStyle.hpp"

NodeStyle::
NodeStyle()
  : NormalBoundaryColor(Qt::white)
  , SelectedBoundaryColor(QColor("orange"))
  , GradientColor0(Qt::darkGray)
  , GradientColor1(QColor(Qt::gray).darker(200))
  , GradientColor2(QColor(Qt::gray).darker(250))
  , GradientColor3(QColor(Qt::gray).darker(250).darker(110))
  , ConnectionPointColor(Qt::darkGray)
  , PenWidth(1.0)
  , HoveredPenWidth(1.5)
  , ConnectionPointDiameter(8)
{

};
