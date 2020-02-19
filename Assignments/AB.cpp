//Keep in mind that classes will only know about things that have come before.
//Also remember what prototyping is. 
//Make the following code work without errors and be prepared to explain why it didn't work.
//Hint I removed 4 lines
//I edited 1 line

#include <iostream>

using namespace std; 

class B;
class A
{
	
	private:
		int a_thing;
	public: 
		
		
	friend class B;
	A();
		A(B);

	
};

class B
{
	
	private:
		int b_thing;
	public: 
		
	friend class A;
	B();
		B(A);
		
};

int main()
{
	A a;
	B b(a);
}


	A::A(){a_thing=0;}
	A::A(B b){a_thing= 0; b.b_thing=0;}
	
	B::B(){b_thing=0;}
	B::B(A a){a.a_thing= 0; b_thing=0;}