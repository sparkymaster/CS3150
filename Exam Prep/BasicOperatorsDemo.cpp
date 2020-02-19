//Basic data types demonstration code
//9-8-19
//-Dr. G
//Tested on cpp.sh

// edited by Parker on 9/10/19

#include <iostream>
#include <string>
#include <climits>
#include <math.h>
#include "constants.h"

using namespace std;

int main()
{
	int x;
	
	
	cout << sizeof(x) << endl;
	
	cout << sizeof(char)<< endl;
	cout << sizeof(double)<< endl;
	cout << sizeof(float)<< endl;
	cout << sizeof(unsigned int)<< endl;
	
	cout << INT_MAX << endl;
	cout << UINT_MAX << endl;
	
	
	cout << long (pow(2,31))<< endl;


	bool flag = false;
	flag = 3;
	cout << flag<<endl;
	
	char c = 'a';
	cout << int(c) << endl;
	cout << c+4<< endl;
	
	
	x = 107;
	cout << char(x)<<endl;
	
	cout << my_gravity<<endl;
	double my_gravity = 6.3;
	
	cout<<my_gravity<<endl;
	cout<< ::my_gravity<<endl;
	
}


//The fundamental data types between Java and C++ are basically the same. 
//I'll skip some stuff. 

//1. What actually happens when you declare a variable? Demonstrate size of. 

//Why not just depend on standard sizes?

//2. What are the sizes for : int, float, double, unsigned int, char, bool
//3. Demonstrate the max size computed manually and through climits for int and uint. 

//Which is larger? Why?

//4. Try to store a number 1 greater than allowed and observe the results
//5. Try to print a number larger than the max using INT_MAX and observe the results. 
//6. Create a negative int and a negative uint. 

//What does the unsigned int do?

/**** bool weirdness ******/

//7. Create a bool and print a bool. What do you observe?
//8. Add boolalpha to the stream and try again. What happens?
//9. Set a bool value to any number greater than one. Observe the results with and without
//the boolalpha flag set. 

//10. Using cin get a bool as an input.

/**** char storage ****/

//11. Declare a char 'a'. Print it's int value. 
//12. Try some numeric operations on it. 

/**** Constants ****/

//13. Create constants in a separate h file and access them with the scope resolution
//operator.

//Whats the difference in const and constexpr?


//Chapter 5

//Skipping it for the most part but remember: 
//There's an order to things
//Pre and post increment
//typecasting
//C++'s trinary operatory


