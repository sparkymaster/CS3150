/*
Edited by Parker Evans on 12/3/19 for CS 3150
Test 3 Practical from demo-code on Inheritance.

*/
#include "Date.h"
#include <iostream>
using namespace std;



Date& Date::operator= (const Date& d){
	this->day = d.day;
	this->month = d.month;
	this->year = d.year;
	
	return *this;
}
Date Date::operator++(){
	day++;
	if(day>31){
		day = 1;
		month++;
		if(month>12){
			month = 1;
			year++;
		}
	}
	
	return *this;

}
Date Date::operator++(int x){
	Date d1 = *this;
	
	day++;
	if(day>31){
		day = 1;
		month++;
		if(month>12){
			month = 1;
			year++;
		}
	}
	
	return d1;

}
ostream& operator <<(ostream& ost, const Date& d){
	return ost<<d.day<<"/"<<d.month<<"/"<<d.year;
}
istream& operator >>(istream& ist, Date& d){
	cout<<"day = "<<endl;
	ist >>d.day;
	cout<<"month = "<<endl;
	ist >> d.month;
	cout<<"year = "<<endl;
	ist >> d.year;
	return ist;
	
}
Date operator+(const Date& d1, const Date& d2){
	int tempyear = d1.year + d2.year;
	int tempmonth = d1.month+d2.month;
	int tempday = d1.day+d2.day;
	if(tempday>31){
		tempmonth++;
		tempday-=31;
	}
	if(tempmonth>12){
		tempyear++;
		tempmonth-=12;
	}
	Date d {tempday,tempmonth,tempyear};
	
	return d;
}
Date operator- (const Date& d1, const Date& d2){
	int tempyear = d1.year - d2.year;
	int tempmonth = d1.month-d2.month;
	int tempday = d1.day-d2.day;
	if(tempday<1){
		tempmonth--;
		tempday+=31;
	}
	if(tempmonth<1){
		tempyear--;
		tempmonth+=12;
	}
	Date d {tempday,tempmonth,tempyear};
	
	return d;
	
	
}
bool operator==(const Date& d1, const Date& d2){
	if(d1.day == d2.day && d1.month == d2.month && d1.year == d2.year){
		return true;
	}
	else 
		return false;
}
bool operator<(const Date& d1, const Date& d2){
	if((d1.year*365+d1.month*31+d1.day)<(d2.year*365+d2.month*31+d2.day)){
		return true;
	}
	else
		return false;
}
bool operator>(const Date& d1, const Date& d2){
	if((d1.year*365+d1.month*31+d1.day)>(d2.year*365+d2.month*31+d2.day)){
		return true;
	}
	else
		return false;

}


Date::Date() : day(1), month(1), year(1) {}
Date::Date(const Date& oldDate):day(oldDate.day),month(oldDate.month),year(oldDate.year){}
	


Date::Date(int day, int month, int year) : day(day), month (month), year(year) {
	if (day>31 || day<1){
		this->day = 1;
	}
	if (month >12||month<1){
		this->month = 1;
	}
	if (year<1){
		this->year = 1;
	}
}
void Date::printDate(){cout << "Month : "<< month << " Day : " << day << " Year : " << year << endl;}