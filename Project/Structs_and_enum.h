#ifndef STRUCTSENUMS
#define STRUCTSENUMS

#include <string>

struct Player
{
	std::string name;
	int xpos;
	int ypos;
	int score;
};


enum tile_type
{
	EMPTY, // 0
	WINNER, // 1
	LOSER, // 2
	BALL_SPACE, //3
	LINE_SPACE, //4
	V_WALL, //5
	H_WALL, // 6
	Q1_CORNER, // 7
	Q2_CORNER, //8
	
	};
#endif

