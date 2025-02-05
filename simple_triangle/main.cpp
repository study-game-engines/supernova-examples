#include "Supernova.h"
using namespace Supernova;

#include "Polygon.h"

Scene scene;
Polygon triangle(&scene);

void init(){
    triangle.addVertex(0, -100);
    triangle.addVertex(-50, 50);
    triangle.addVertex(50, 50);

    triangle.setPosition(Vector3(300,300,0));
    triangle.setColor(0.6, 0.2, 0.6, 1);

    Engine::setCanvasSize(1000,480);
    Engine::setScene(&scene);
}