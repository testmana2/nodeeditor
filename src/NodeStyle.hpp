#pragma once

#include <QtGui/QColor>

class NodeStyle
{
public:

  NodeStyle();

public:

  QColor NormalBoundaryColor;
  QColor SelectedBoundaryColor;
  QColor GradientColor0;
  QColor GradientColor1;
  QColor GradientColor2;
  QColor GradientColor3;

  QColor ConnectionPointColor;

  float PenWidth;
  float HoveredPenWidth;

  float ConnectionPointDiameter;
};
