/*
Part of the Battle sequence ICE
8 - 18 - 2019
Dr. G
*/

#include "Character.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int battleNum = 0; //Driver needs access to this value

//battle sequence fix the hit value
void battle (character c1, character c2)
{
	battleNum++;
	srand(time(NULL));
	while (c1.state == Status::alive && c2.state==Status::alive)
	{
		int hitValue;
		
		//c1 hits c2
		hitValue = rand()%c1.strength+1;
		c2.hitPoints -=hitValue;
		c2.state=statusCheck(c2);
		
		//c2 hits c1
		if (c2.state==Status::alive)
		{
			hitValue = rand()%c2.strength+1;
			c1.hitPoints -=hitValue;
			c1.state=statusCheck(c1);
		}
	}
	
	cout << "And the winner is: " ;
	if (c1.state == alive) cout << c1.name; else cout << c2.name;
	cout<<"\n";
	
}

//determine if the character should be alive or dead
Status statusCheck(character c)
{
	if (c.hitPoints >= 0) return Status::alive; else return Status::dead;
}