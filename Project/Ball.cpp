#include "Ball.h"
#include "Line.h"
#include "Point.h"
#include <iostream>

using namespace std;



double Ball:: getSpeed(){return speed;};
Ball::Ball():b_pos(Point()),speed(0),angle(0){};
Ball::Ball(Point p1, double speed, int angle): b_pos(p1), speed(speed), angle(angle){};
void Ball:: showBall(){b_pos.showPoint(); cout<<"Speed is "<<speed<<endl; cout<<"Angle is "<< angle<<" Degrees."<<endl;}
void Ball:: moveBall(Point& p){
	b_pos = p;
	//b_pos.showPoint();

}
int Ball::getX(){
	return b_pos.getX();
}
int Ball::getY(){
	return b_pos.getY();
}