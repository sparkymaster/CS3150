/*
Parker Evans
Test 3
CS 3150
Dr. Cantrell

This is a driver file for my test 3 on creating a working class heirarchy of date and
datetime classes. Here I have tested all of the different files and created many
wonderful dates.


*/


#include <iostream>
#include "Date.h"
#include "DateTime.h"

using namespace std;

int main(){
	//Testing the no Arg constructor.
	Date d1;
	d1.printDate();
	//Testing 3 arg constructor.
	Date d2{31,12,17};
	d2.printDate();
	//Testing out of bounds in constructor
	Date d3{34,-2,-5};
	d3.printDate();
	//Testing pre and post incrementing and << operator.
	cout<<d2<<endl;
	cout<<++d2<<endl;
	cout<<d2++<<endl;
	cout<<d2<<endl;
	//Testing Assignment.
	d2 = d3;
	cout<<d2<<endl;
	//Testing + operator
	d2 = d2+d3;
	cout<<d2<<endl;
	//Testing the >> operator
	Date d5;
	cin >> d5;
	cout<<d5<<endl;
	//Testing the - operator
	d2 = d5 - d2;
	cout<<d2<<endl;
	//Testing the == operator
	Date d6 {3,3,3};
	Date d7 {3,3,3};
	cout<<(d6 == d7)<<endl;
	//Testing the < operator & > operator
	cout<<(d3<d6)<<endl;
	cout<<(d6>d3)<<endl;
	
	//Testing DateTime constructors and << and >>
	DateTime dt;
	cout<<dt<<endl;
	DateTime dt1{3,4,5,23,55,43};
	cout<<dt1<<endl;
	DateTime dt2;
	cin>> dt2;
	cout<<dt2<<endl;
	
}