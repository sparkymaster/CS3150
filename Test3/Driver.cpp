#include <iostream>
#include "Date.h"
#include "DateTime.h"

using namespace std;

int main(){
	
	Date d1;
	d1.printDate();
	Date d2{2,3,17};
	d2.printDate();
	Date d3{34,-2,-5};
	d3.printDate();
	
}