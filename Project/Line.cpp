#include "Point.h"
#include "Line.h"
#include <iostream>
using namespace std;

Line:: Line(Point p1, Point p2):p1(p1),p2(p2){}
Line::Line(){}
void Line ::showLine(){
	p1.showPoint();
	p2.showPoint();
}