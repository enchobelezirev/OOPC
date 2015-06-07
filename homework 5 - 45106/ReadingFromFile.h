#include <fstream>
#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Group.h"

int currentLine = 0;
int currentPos = 0;
bool isGroupOver = true;
int elementsCount = 0;

#ifndef READINGFROMFILE_H
#define READINGFROMFILE_H
class ReadingFromFile {
private:
	static std::ifstream reader;
public:
	static void openFile(char* fileName){
		reader.open(fileName, std::ios::in);
	}
	static void closeFile(){
		reader.close();
	}


	static void readFromFile(){
		while (!reader.eof())
		{
			char* keyword;
			reader >> keyword;
			if (strcmp(keyword, "circle") == 0)
			{
				Point center;
				reader >> center.x >> center.y;
				double radius = 0.0;
				reader >> radius;
				Circle circle;
				circle.setRadius(radius);
			}
			if (strcmp(keyword, "triangle") == 0)
			{
				Triangle triangle;
				Point A;
				Point B;
				Point C;
				reader >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
				triangle.setPointA(A);
				triangle.setPointB(B);
				triangle.setPointC(C);
			}
			if (strcmp(keyword, "rect") == 0) {
				Point A;
				Point B;
				Point C;
				Point D;

				reader >> A.x >> A.y >> C.x >> C.y;
				B.x = C.x;
				B.y = A.y;
				D.x = A.x;
				D.y = C.y;
			}
			if (strcmp(keyword, "group") == 0){
				char* detail;
				reader >> detail;
				if (strcmp(detail, "in") == 0)
				{
					if (isGroupOver) {
						currentLine = __LINE__;
						currentPos = reader.tellg();
					}
					else {
						Circle c;
						Shape* circleShape = &c;
						Group group(elementsCount);
						group.addElementsToGroup(c);
						circleShape->
					}
				else {
					if (isGroupOver) {
						 elementsCount = __LINE__ - currentLine - 1;
						isGroupOver = false;
					}
				}
			}

		}
	}
};

#endif