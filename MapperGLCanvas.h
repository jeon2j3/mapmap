/*
 * MapperGLCanvas.h
 *
 * (c) 2013 Sofian Audry -- info(@)sofianaudry(.)com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MAPPERGLCANVAS_H_
#define MAPPERGLCANVAS_H_

#include <QGLWidget>
#include <QKeyEvent>
#include <QPaintEvent>

#include <iostream>

#include "Common.h"
#include "Shape.h"

class MapperGLCanvas: public QGLWidget
{
public:
  MapperGLCanvas(QWidget* parent = 0, const QGLWidget * shareWidget = 0);
  virtual ~MapperGLCanvas() {}

  virtual Quad& getQuad() = 0;

protected:
  virtual void initializeGL();
  virtual void resizeGL(int width, int height);
  virtual void paintGL();

  virtual void keyPressEvent(QKeyEvent* event);
  virtual void paintEvent(QPaintEvent* event);

private:
  virtual void draw();
  virtual void enterDraw();
  virtual void doDraw() = 0;
  virtual void exitDraw();
};

#endif /* MAPPERGLCANVAS_H_ */
