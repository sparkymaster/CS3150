#ifndef BALL
#define BALL

#include "Point.h"
class Ball{
	private:
		Point b_pos;
		double speed;
		int angle;
		
	public:
		Ball();
		Ball(Point, double, int);
		double getSpeed();
		int getX();
		int getY();
		void showBall();
		void moveBall(Point&);
	
};


#endif