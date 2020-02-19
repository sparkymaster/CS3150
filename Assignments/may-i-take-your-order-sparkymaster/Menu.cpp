/*  
Created By: Parker Evans
9/5/19
CS 3150
Dr. Cantrell


The purpose of this assignment is to cretae a prgram that will show a menu, and allow the user to select
an amount of the various options, then have the program output the cost, including tax. We are also implementing 
the cost of tax into these functions. This is ensured to use the header files and the functions source code.
All of this is being done to ensure we know how to prevent name collions and implement header usage correctly.

*/



#include "Functions.h"
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	
	double cost = 0;
	double tax = .0485;
	
	cout<<"Hello, and Welcome to Burger Bell,\n";
	
	cout<< "Here is the Menu:\n"
	"drink		$1.24\n"
	"hamburger	$2.34\n"
	"fries     	$1.23\n"
	"shake		$4.00\n"
	"apple pie	$3.78\n"
	"salad		$6.78\n";
	
	cout<< "How many drinks would you like?\n";
	int numitems = 0;
	cin >> numitems;
	cost = product(numitems,1.24);
	
	cout<< "How many hamburgers would you like?\n";
	cin >> numitems;
	cost += product(numitems,2.34);
	
	cout<< "How many fries would you like?\n";
	cin >> numitems;
	cost += product(numitems,1.23);
	
	cout<< "How many shakes would you like?\n";
	cin >> numitems;
	cost += product(numitems,4.00);
	
	cout<< "How many apple pies would you like?\n";
	cin >> numitems;
	cost += product(numitems,3.78);
	
	cout<< "How many salads would you like?\n";
	cin >> numitems;
	cost += product(numitems,6.78);
	
	cout<< fixed;
	cout<< setprecision(2);
	cout<<"Your total is: $"<<sum(cost,product(cost,tax))<< " with tax.";
	
	return 0;
}