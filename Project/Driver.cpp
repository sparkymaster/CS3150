#include <iostream>

using namespace std;

class Point
{
	private:
		int x;
		int y;
	public:
		Point(int, int);
		
		
	
};

Point:: Point(int x=0, int y=0):x(x),y(y){};

class Ball{
	private:
		int ball_x;
		int ball_y;
		double speed;
		int angle;
		
	public:
		double getSpeed(){return speed;}
		
	
};

class Line{
	private:
		Point p1, p2;
	public:
		Line getPoint(){return *this;}
		void setLine(Point& p1, Point& p2){
			
		}
		
};

int main(){
	cout<<"Hello World!"<<endl;

	return 0;
	
}