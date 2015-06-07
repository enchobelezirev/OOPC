#include "Point.h"
#include <iostream>
#include "Shape.h"
#ifndef GROUP_H
#define GROUP_H

class Group {
private:
	Point vectorCoordinates;
	Shape** shapes;
	int size;
	int currentIndex;

public:
	Group() {
		shapes = NULL;
		size = 0;
		currentIndex = 0;
	}

	Group(int size) {
		shapes = new Shape*[size];
	}

	void addElementsToGroup(Shape * shape) {
		shapes[currentIndex] = shape;
	}

};
#endif