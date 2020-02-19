#include <iostream>

using namespace std; 

int main()
{

int array1[] = {1,2,3,4,5,6,7,8,9,10};
int* parray[5]; 
int* toArray = array1;

cout << *toArray << endl;
toArray++;
cout << *toArray<< endl;

cout << toArray[3]<< endl;

*parray[0] = array1[2];

cout << &*parray[0] << endl;

int* a = new int [20]; 

a[0] = 4; 

toArray = a; 

cout << endl << *toArray<<endl; 

int ** b = new int*[20];
}