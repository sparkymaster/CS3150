#include <iostream>

using namespace std;

class Point
{
	private:
		int x;
		int y;
	public:
		Point();
		Point(int, int);
		void showPoint();
		
		
	
};

Point::Point(int x, int y):x(x),y(y){};
Point::Point():x(0),y(0){};
void Point::showPoint(){cout << x << " " << y << endl;}

class Ball{
	private:
		Point b_pos;
		double speed;
		int angle;
		
	public:
		Ball();
		Ball(Point, double, int);
		double getSpeed(){return speed;}
		void showBall();
	
};

Ball::Ball():b_pos(Point()),speed(0),angle(0){};
Ball::Ball(Point p1, double speed, int angle): b_pos(p1), speed(speed), angle(angle){};
void Ball:: showBall(){b_pos.showPoint(); cout<<"Speed is "<<speed<<endl; cout<<"Angle is "<< angle<<" Degrees."<<endl;}

class Line{
	private:
		Point p1, p2;
	public:
		Line();
		Line(Point, Point);
		Line getPoint();
		void setLine(Point&, Point&);
		void showLine();
		
};

Line:: Line(Point p1, Point p2):p1(p1),p2(p2){}
Line::Line(){}
void Line ::showLine(){
	p1.showPoint();
	p2.showPoint();
}


int main(int argc, char * argv[]){
	//cout<<"Hello World!"<<endl;
	Point p1 {1,2};
	
	Point p2;
	
	//p2.showPoint();
	//p1.showPoint();	

	Line ln {p1,p2};
	//ln.showLine();
	
	Ball b1 {p1,5.33,35};
	b1.showBall();
	

	return 0;
	
}