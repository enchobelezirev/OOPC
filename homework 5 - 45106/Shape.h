#include "Point.h"
#ifndef SHAPE_H
#define SHAPE_H

class Shape {
private:
	Point basePoint;
public:
	Point getBasePoint() const {
		return basePoint;
	}
	void setBasePoint(Point basePoint) {
		this->basePoint = basePoint;
	}
};
#endif