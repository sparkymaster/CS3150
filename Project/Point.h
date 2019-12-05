#ifndef POINT
#define POINT

class Point
{
	private:
		int x;
		int y;
	public:
		Point();
		Point(int, int);
		void showPoint();
		int getX();
		int getY();
		Point& operator=(const Point&);
		
		
	
};



#endif