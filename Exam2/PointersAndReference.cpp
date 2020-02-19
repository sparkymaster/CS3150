//Pointers and reference
//25 pts total

#include <iostream>


using namespace std;

int main()
{
	int a = 1;
	int b = 2;
	int& c = a; //change this line
	int* d = &b;
	int **e = &d; 
	
	//Change 'c' to make it point to the same memory location as 'a' 5 points
	c++; 
	cout << "This should print 2 : " <<  a << endl; 
	
	//Change 'd' to be a pointer to 'b'
	//Complete the following print statement correctly 5 pts
	cout << "This should print the memory location of b : " << d << endl;
	cout << "This should print the contents b using the variable d : " << *d << endl;
	
	//Change e to be a pointer to d 5 pts
	cout << "This should print the contents of b using e : " << *(*e) << endl;
	int *f;
	f = new int[5]; 
	f[0] = 1;
	f[1] = 2;
	f[2] = 3;
	f[3] = 4;
	f[4] = 5; 
	
	 
	//change f to a dynamically created array -5 pts
	
	//declare a pointer g and use it to print out all the values in f -5 pts
	int *g;
	g = f;
	
	for(int x = 0;x< 5;x++){
		cout<<*g<<endl;
		g++;
		
	}
}