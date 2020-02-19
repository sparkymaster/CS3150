#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std; 


//class declaration
class Character
{
	//1. create a name, strength, and hitPoints for a character
	private:
	
	public:
	string name;
	int strength;
	int hitPoints;
	
	//2. create a character in main. Are variables public or private by default? == by default they are private, need to specify if needed to be public.
	//3. create a public section
	//4. create a no argument constructor here and after main
	
	//Option 1
	// Character(){
		// cout<<"No arg const called"<<endl;
		// name = "Joe";
		// strength = 5;
		// hitPoints = 100;
	// }
	
	//Option2 -- see prototype and funciton beneath main
	// Character();
	//5. create a single argument constructor here and after main

	//6. create a print method and test
	//7. comment out the no argument constructor and test
	//8. comment out all constructors here and below
	// Character(string name, int strength, int hitPoints){
		//option 1
		// this->name = name;
		// this -> strength = strength;
		// this -> hitPoints = hitPoints;
		//(*this).name = name;
	// }
	//9. create constructors using initializer lists
	// Character(string name, int strength, int hitPoints) :name(name), strength(strength), hitPoints(hitPoints)
	// {}
	//Acts as a default constructor if the number of elements varies.
	Character(string name= "Bob", int strength=999, int hitPoints = 999):name(name), strength(strength), hitPoints(hitPoints){}
	
	//10. create a destructor and test
	~Character(){cout<<"object destroyed"<<endl;}
	//11. create a copy constructor and test
	
	/*
	A copy constructor is needed when "if an object has pointers or any runtime allocation 
	of the resource like file handle, a network connection..etc."
	
	The default copy constructor only does a shallow copy. User defined copy constructors
	are needed for deep copies.
	*/

	//12. Create a static variable and associated get function to keep up with the 
	//	  number of characters created. 
	//13. Prepare to fight create functions:take damage, get hit points, get strength, 
	//    is alive 
	//14. Create static fight function that accepts two characters
};

//class driver
int main()
{
	Character c1 = {"Bob",6,100};
	cout<<c1.name<<endl;
	// Character c2;
	
	
	
	
}

//class functions
//option2
// Character::Character(){
	 // cout<<"No arg const called"<<endl;
		// name = "Joe";
		// strength = 5;
		// hitPoints = 100;
// }
