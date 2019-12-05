#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(int x, int y):x(x),y(y){};
Point::Point():x(0),y(0){};
void Point::showPoint(){cout << x << " " << y << endl;}
int Point::getX(){
	return x;
}
int Point::getY(){
	return y;
}
Point& Point::operator=(const Point& p1){
	this -> x = p1.x;
	this -> y = p1.y;
	return *this;
}