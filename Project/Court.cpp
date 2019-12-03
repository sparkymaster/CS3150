/*
Created by Parker Evans on 9/19
with the help of Skyler Clark 

This is the map file we are creating a char array to fill all of the field with an '*' and then when explored to a 'space'
*/

#include "Structs_and_enum.h"
#include "Court.h"
#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

/*******************TODO***********************
Make printArray put 'H' for where hero currently is? Should be doable without creating another enum.

***********************************************/

/*
Here we created the map as a global two dimensional array, since we will never change its size.
*/
int court [20][10]; // y then x
enum tile_type empty = 	EMPTY;
enum tile_type v_wall = V_WALL;
enum tile_type h_wall = H_WALL;
enum tile_type q1_corner = Q1_CORNER;
enum tile_type q2_corner = Q2_CORNER;
enum tile_type winner = WINNER;
enum tile_type loser = 	LOSER;
enum tile_type ball_space = BALL_SPACE;
enum tile_type line_space = LINE_SPACE;



int randomInt(int x){
	return (int)rand()%x;	
}
//fills array first with blanks, then with randomized special tiles, then creates static entrance and exit
void fillArray()
{
	//fill entire array with border tiles
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if (i==0 || i == 19 ){
				court[i][j] = h_wall;
			}
			else if((j ==0 && i!=0 && i!= 19)||(j == 9 && i!=0 && i!=19)){
				court[i][j] = v_wall;
			}
			else{
				court[i][j] = empty;
			}
			
			
		}
	}
	court[0][0] = q2_corner;
	court[0][9] = q1_corner;
	court[19][0] = q1_corner;
	court[19][9] = q2_corner;
	// for(int i = 0; i < 30; i++)
	// {
		// for(int j = 0; j < 5; j++)
		// {
			// //random column to fill, up to 5 special tiles per row, limits unbeatable maps
			// int col = randomInt(10);		
			
			// //generate random 'trap' tile to place
			// int r = randomInt(5);
			// if(r == 0){map[i][col] = spike_trap;}
			// if(r == 1){map[i][col] = qs_trap;}
			// if(r == 2){map[i][col] = insult_trap;}
			// if(r == 3){map[i][col] = good_potion;}
			// if(r == 4){map[i][col] = bad_potion;}
		// }
	// }
	//place entrance and exit
	// map[0][0] = entrance;
	// map[29][9] = end;
}

/*
Here we are creating the explored room method of change the tile. Need to add change of status to tiles.
*/
// void found_empty(hero h){
	// std:: cout<<"Just another empty room, that's good right?"<<std::endl;
	// map[h.y][h.x] = empty_ex;	// This is a space for empty
// }

/*This is a method to find the spike trap. This will cause a random amount of damage and return a hero. It also takes a copy of the hero
that is exploring the dungeon. 
*/
// hero found_spike(hero h){
	
	// if(h.name == "Indiana"){
		// if(randomInt(10)>4){
			// std::cout << "Indiana Jones uses his whip to swing to safety. Trap avoided!"<<std::endl;
			// map[h.y][h.x] = spike_trap_ex;	 // This is a carrot for spike
			// return h;
		// }
	// }
	// int rint = rand()%10+1;
	
	// std::cout<<"You fell into a spike trap! You lost " << rint << " hit points."<<std::endl;
	// map[h.y][h.x] = spike_trap_ex;	 // This is a carrot for spike
	// h.health-=rint;
	// h = take_damage(h);
	
	// return h;
// }
// /* Trap method for when quicksand  using timer to hurt users until they type the name of their character. Advice from a thread on how to users 
// the timer.
// */

// hero found_qs(hero h){
	// if(h.name == "Indiana"){
		// if(randomInt(10)>4){
			// std::cout << "Indiana Jones grabs a snake to climb out of the sand. Trap avoided!"<<std::endl;
			// map[h.y][h.x] = qs_trap_ex;	// This is an exclamation mark
			// return h;
		// }
	// }
	// int health_before = h.health;	
	// std::cout<<"Quick Sand! Quickly Type your hero's first name!"<<std::endl;
	// std::string s1;
		
	// double temp;	
	// clock_t time_start;
	// time_start = clock();
		
	// while(s1!=h.name){
	// std::cin>>s1;
	// }
	// temp = (clock()-time_start)/1000;
	// h.health-=temp;
	// std::cout << "You lost " << health_before - h.health << " hit points.\n";
	// map[h.y][h.x] = qs_trap_ex;	// This is an exclamation mark
	// return take_damage(h);			// come back and change
// }


/*We are creating a health potion to allow for the hero to make up some of the hp he has lost.
*/

// hero found_good_potion(hero h){
	// int health_before = h.health;
	// h = gain_health(h);
	// std:: cout << "A health potion! You gained " << h.health - health_before << " hit points.  Phew... That was needed."<< std:: endl;
	// map[h.y][h.x] = good_potion_ex;	// This is the plus signal
	// return h;
// }
/*We created the idea of a confused potion that makes the hero's speeds are reversed and thus N = S and so further. This returns a new hero
that has the opposite speed by multiplying by a -1.
*/

// hero found_bad_potion(hero h){
	// std:: cout << "You suddenly feel really dizzy... is up still up?"<< std::endl;
	// map[h.y][h.x] = bad_potion_ex; // This is the asterix
	// return confuse(h);
// }

// void set_entrance(){
	// map[0][0] = 91; // This is the open bracket for the start space
// }

// Parker: I have written up the code for printing the array. Here we are
// using the various ASCII codes to print characters to the array where the 
// enum type corresponds.
void print_array(){
	for(int i=0;i<20;i++){
		for(int j = 0; j<10;j++){
			// if(i == h.y && j == h.x){
				// std::cout<<"H";
				// continue;
			// }
			if(court[i][j] == 5){
				std::cout << char(124);
			}
			if(court[i][j] == 6){
				std::cout<<char(45)<<char(45);
			}
			if(court[i][j] == 0){
				std::cout<< char(32)<<char(32);
			}
			if(court[i][j] == 7){
				std::cout<<char(92);
			}
			if(court[i][j] == 8){
				std::cout<<char(47);
			}
			// if(map[i][j] == 10){
				// std::cout<<char(42);
			// }
			// if(map[i][j] == 11){
				// std::cout<< char(32);
			// }
			// if(map[i][j] == 12){
				// std::cout<<char(123);
			// }
			// if(map[i][j] == 13){
				// std::cout<<"E";
			// }
			
			
		}
		std::cout<<" "<< std::endl;
	}
	
}

// int get_tile(hero h)
// {
	// return map[h.y][h.x];
// }
