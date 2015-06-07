#include "Shape.h"
#include "Point.h"
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle :public Shape {
private:
	double radius;
public:
	Circle();
	void setRadius(double);
	double getRadius() const;
};
#endif