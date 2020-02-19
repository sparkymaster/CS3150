/*
Header file for a generic character
*/

#include<string>

enum Status {dead, alive,};

extern int battleNum;

struct character
{
	int hitPoints;
	int strength;
	Status state=Status::alive;
	std::string name;
};

Status statusCheck(character);

void battle(character,character);
