#include "Structs_and_enum.h"
#include "Court.h"
#include "Point.h"
#include "Line.h"
#include "Ball.h"
#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include <unistd.h>



int court [40][20]; // y then x
enum tile_type empty = 	EMPTY;
enum tile_type v_wall = V_WALL;
enum tile_type h_wall = H_WALL;
enum tile_type q1_corner = Q1_CORNER;
enum tile_type q2_corner = Q2_CORNER;
enum tile_type winner = WINNER;
enum tile_type loser = 	LOSER;
enum tile_type ball_space = BALL_SPACE;
enum tile_type line_space = LINE_SPACE;

using namespace std;



void fillArray(Player p1, Player p2, Ball b1[], int size)
{
	for(int i = 0; i < 40; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			if (i==0 || i == 39 ){
				court[i][j] = h_wall;
			}
			else if((j ==0 && i!=0 && i!= 39)||(j == 19 && i!=0 && i!=39)){
				court[i][j] = v_wall;
			}
			else{
				court[i][j] = empty;
			}
			
			if(p1.xpos == j && p1.ypos == i){
				court[i][j] = winner;
					
			}
			
			if(p2.xpos == j && p2.ypos == i){
				court[i][j] = loser;
					
			}
			for(int x = 0;x<size;x++)
				if(b1[x].getX() == j && b1[x].getY()  == i){
					court[i][j] = ball_space;
				}
			
		}
	}
	court[0][0] = q2_corner;
	court[0][19] = q1_corner;
	court[39][0] = q1_corner;
	court[39][19] = q2_corner;
	
}


void print_array(){
	for(int i=0;i<40;i++){
		for(int j = 0; j<20;j++){
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
			if(court[i][j] == 1){
				std::cout<<char(87)<<char(32);
			}
			if(court[i][j] == 2){
				std::cout<< char(76)<<char(32);
			}
			if(court[i][j] == 3){
				cout<<char(111)<<char(32);
			}
		}	
		std::cout<<" "<< std::endl;
	}
	
}
