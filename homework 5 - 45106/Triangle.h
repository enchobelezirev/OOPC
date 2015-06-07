#include "Point.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
	Point A;
	Point B;
	Point C;
public:
	Point getPointA() const {
		return A;
	}
	Point getPointB() const {
		return B;
	}
	Point getPointC() const {
		return C;
	}

	void setPointA(Point A) {
		this->A = A;
	}
	void setPointB(Point B) {
		this->B = B;
	}
	void setPointC(Point C) {
		this->C= C;
	}

}


};
#endif