/*
Demo code for functions in C++
Dr. G
9-2-19
*/

//edited on 9/5/19 by parker evans
#define CAT "Nex"
#include "functions.h"
#include <iostream>


using namespace std;


// where we started
//must have methods before the main, for them to be recognized by the compiler.

/* void print()
{ cout << "test";
}

int add(int x, int y)
{
	print();
	return x+y;
} */

// Or we can declare them here, then define them later.



int main()
{
	cout << add(4,5)<<'\n';
	cout << add(4,5,6)<<'\n';
	cout << CAT<<"\n";
	
	#ifndef  CAT
	cout << CAT <<"\n";
	#endif
	
}





//1. Compile and test code with no changes
//2. Create an add function above main
//3. Move the function below main and observe the results
//4. Declare the function above main with a function prototype and observe the results
//5. Demonstrate function overload



//returning values and function arguments work the same as Java
//in general variable scope is the same as Java
//white space in C++ is irrelevant 

//6. Place the add function in a separate file, recompile and test. 
//7. Remove the prototype and observe the results. What happens and why?
//8. Restore to working order. 

//9. Use a preprocessor directive to define a CAT as  "NEX." Print and observe the results
//10. Demonstrate the use of #ifdef #ifndef and #endif

//11. Create a header file for the add function and include it here

//steps 12-13 are in funcDemo.h

//14. include the header file here and observe the results