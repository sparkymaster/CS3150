#include <iostream>
using namespace std; 

int main()
{
	int a;
	
	cout << "a = " << a << endl;
	
	a = 111;
	
	cout << "a = " << a << endl;
	cout << "a = " << &a << endl;
	
	int b = 222;
		cout << "b = " << &b << endl;
		
	int c = 333; 
		cout << "c = " << &c << endl;
	
	int d = 44;
	int& e = d;
	
	cout << "d = " << d << endl;
	cout << "e = " << e << endl;
	cout << "&d = " << &d << endl;
	cout << "&e = " << &e << endl;
	d++;
	cout << "d = " << d << endl;
	cout << "e = " << e << endl;
	
	int f = 444; 
	int* g=&f; 
	
	cout << "f = " << f << endl;
	cout << "&f = " << &f << endl;
	cout << "&g = " << &g << endl;
	cout << "g = " << g << endl;
	cout << "*g = " << *g << endl;
	
	int ** h=&g;
	
	cout << "h = " << h << endl;
	cout << "&h = " << &h << endl;
	cout << "*h = " << *h << endl;
	
	int *** i=&h; 
	cout << "i = " << i << endl;
	cout << "&i = " << &i << endl;
	cout << "*i = " << *i << endl;
	
	
	int k[] = {1,2,3,4,5,6,7,8,9};
	int* kp = k;
	
	cout << "*kp = " << *kp << endl;
	kp++;
	cout << "*kp = " << *kp << endl;
	
	float* m;
	
	
	
	float n = 3.14;
	m =&n; 
	cout << "The contents of m are " << *m << endl;
	
	float* o; 
	
	o=new float; 
	
	cout << "The contents of o are " << *o << endl;
	
	*o = 3.14;
	
	delete o; 
	
	cout << "The contents of o are " << *o << endl;
	
	
}
	
	
	
	
	
	
	
	
	