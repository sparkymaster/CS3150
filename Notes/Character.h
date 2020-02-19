/*
Header file for a generic character
*/

#include<string>

enum status {dead, alive};

struct character
{
	std::string name;
	int hitPoints;
	int strength;
	status state;
};

void statusCheck(character);

extern int battleNum;

void battle(character, character);