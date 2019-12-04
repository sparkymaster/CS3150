#include "DateTime.h"
#include <iostream>

DateTime::DateTime(): hours(0),minutes(0),seconds(0){}
DateTime::DateTime(int day, int month, int year, int hours, int minutes, int seconds):Date(day,month,year), hours(hours),minutes(minutes),seconds(seconds){
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
	return ost<< dt.hours<<":"<<dt.minutes<<":"<<dt.seconds<<"  on "<<dt.day<<"/"<<"/"<<dt.month<<"/"<<dt.year;
}
friend istream& opeartor >>(istream&, DateTime&);