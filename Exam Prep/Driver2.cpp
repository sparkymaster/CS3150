/*

Battle sequence in class exercise
9 - 18 - 2019
Dr. G

*/

#include <iostream>
#include "Character.h"

using namespace std;

typedef character hero;
typedef character badGuy;


int main()
{
	// cout<<"Hello"<<endl; 			
	hero h1;
	badGuy bg;
	h1.name="Parker";
	bg.name="Melanie";
	h1.hitPoints=25;
	bg.hitPoints=15;
	h1.strength=1;
	bg.strength=2;
	for(int i=0; i<3;i++){
		battle(h1,bg);
	}
	cout<<battleNum<<'\n';
		
		return 0;
}

//1. In Character.h create a character struct that can hold at least a status, hitPoints, and a strength value
//2. Create a enum status that will allow for a status of alive or dead
//3. Typdef a hero and a bad guy as character structs
//4. Create a badguy and a hero in main using the created typdef and send them to battle in the battle function in Character
//5. Battle as long as no one is dead
//6. Generate a hit value with a random number from 1 to strength
//7. Create a battleNum variable that resides in Character.cpp that keeps track with the number of battles fought, but allow Driver to access it