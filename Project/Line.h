#ifndef LINE
#define LINE

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

#endif