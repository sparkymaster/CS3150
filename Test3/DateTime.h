#ifndef DATETIME
#define DATETIME
#include "Date.h"
#include <iostream>
using namespace std;
class DateTime : public Date
{
	public:
		int hours;
		int minutes;
		int seconds;
		DateTime();
		DateTime(int, int, int, int, int, int);
		friend ostream& operator <<(ostream&, const DateTime&);
		friend istream& operator >>(istream&, DateTime&);
	
	
	
	
	
};

#endif