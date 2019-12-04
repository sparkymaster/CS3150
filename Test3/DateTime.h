#ifndef DATETIME
#define DATETIME

#include <iostream>
class DateTime: public Date
{
	public:
		int hours;
		int minutes;
		int seconds;
		DateTime();
		DateTime(int, int, int, int, int, int);
		friend ostream& operator <<(ostream&, const DateTime&);
		friend istream& opeartor >>(istream&, DateTime&);
	
	
	private:
	
	
}

#endif