#include "DateTime.h"
#include "Date.h"
#include <iostream>

DateTime::DateTime(): Date(), hours(0),minutes(0),seconds(0){}
DateTime::DateTime(int day, int month, int year, int hours, int minutes, int seconds):Date(day, month, year),

	hours(hours),minutes(minutes),seconds(seconds){
	if(seconds>60){
		seconds = 0;
	}
	if(minutes > 60){
		minutes = 0;
	}
	if(hours>24){
		hours = 0;
	}
}
ostream& operator <<(ostream& ost, const DateTime& dt){
	return ost<< dt.hours<<":"<<dt.minutes<<":"<<dt.seconds<<"  on "<<dt.day<<"/"<<dt.month<<"/"<<dt.year;
}
istream& operator >>(istream& ist, DateTime& dt){
	
	cout<<"hours = "<<endl;
	ist>>dt.hours;
	cout<<"minutes = "<< endl;
	ist >> dt.minutes;
	cout<< "seconds = "<<endl;
	ist >> dt.seconds;
	cout<<"day = "<<endl;
	ist >>dt.day;
	cout<<"month = "<<endl;
	ist >> dt.month;
	cout<<"year = "<<endl;
	ist >> dt.year;
	return ist;
}