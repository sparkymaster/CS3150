#ifndef DATE
#define DATE

#include <iostream>
using namespace std;
class Date
{
	public : 
		int day;
		int month; 
		int year;
		Date();
		Date(int, int, int);
		Date(const Date&);
		void printDate();
		Date& operator= (const Date&);
		Date operator++();
		Date operator++(int);
		friend ostream& operator <<(ostream&, const Date&);
		friend istream& operator >>(istream&, Date&);
		friend Date operator+(const Date&, const Date&);
		friend Date operator- (const Date&, const Date&);
		friend bool operator==(const Date&, const Date&);
		friend bool operator<(const Date&, const Date&);
		friend bool operator>(const Date&, const Date&);
		
		
		
		
		// =, ++, Pre and post, <<, >>, +, -, <, >, == 
};

#endif