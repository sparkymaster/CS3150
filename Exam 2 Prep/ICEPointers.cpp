//ICE for pointers
//10-9-19
//Dr. G

#include <iostream>

using namespace std;

void zero(int&);


int main()
{
	int a = 0; 
	
	//print out a
	//print out the memory location of a
	cout <<a<<endl;
	cout << &a<< endl;
	
	int &b = a;
	
	//Change b to a reference variable that has the same location as a. 
	//Increment b, but print a. What happens? -- This adds to the referecne but changes them both.
	
	b++;
	cout<<a<<endl;
	
	int c = 999; 
	zero(c);
	cout << endl << c << endl;
	
	//Alter zero() to pass by reference instead of pass by value and test it
	
	int d = 888;
	
	int *e = &d;
	//Create a pointer e that points at d
	//Print e
	cout << e<< endl;
	
	//print the contents of what it points at (dereference it)
	cout << *e<< endl;
	//Create a pointer f that points at e
	int **f = &e;
	
	//Uncomment the below and explain the output 
	
	
	cout << endl << d << endl << &d << endl; // This outbput the 888 the value at d, then otuput where it was being stored.
	cout << endl << e << endl << *e << endl; // This was the location of d, then the value at d
	cout << endl << f << endl << *f << endl << **f << endl; // Shows the location of e, from f, then shows the memory location of d through e, then shows the value of d

	// 
		
	int array1 [] = {1,2,3,4,5,6,7,8,9};
	//Create a pointer g and point it at array array1
	int *g = array1;
	
	//iterate and print each element of the array using pointer g
	
	for (g; g< array1 + sizeof(array1)/sizeof(array1[0]);g++){
			cout <<*g<<endl;
	
	}
	
	const int h = 0;
	const int *i = &h;
	//Create a constant int h 
	//Create pointer to a constant and a constant pointer
	//Explain the difference syntactically and logically
	// int* i = &h;
	
	const int* const j = &b;
	
	cout<< j<<endl;
	
	// j= &h; cannot change j, because it was a constant pointer. not a pointer at a constant primitive type.
	
	
	
}


void zero(int& x)
{
	x=0;
}

