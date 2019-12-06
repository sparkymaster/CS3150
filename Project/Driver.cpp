/*
* Parker Evans Final Project
* CS 3150 --  Dr. Cantrell
* 12/6/19
*
* This program is a strategy tool designed for racquetball players to view the ideal passing and kill shots in Racquetball. It has taken 
* several of the best shots and ideal positions from Kane Waselenchuck and Rocky Carson the number 1 and 2 players in the world and helps
* average students learn from which positions they should hit certain shots. This program covers almost all topics discussed in the course
* of this semester. It covers all basic topics, and also includes a couple of more in-depth topics. There needs to be a number of scenarios 
* the user wishes to see implemented as a command-line argument. The program will display the ball's progression and both players in a 
* racquetball scenario from the 2019 Shamrock Shootout Tournament. I have included a few operator overloads on my own classes, and included
* two topicc that we never used or talked about in class. These are Exception Handling and use of a Timer to validate the efficiency of my 
* program. This code also demstrates efficient use of object oriented programming with inheritance. If we were given more time, and more
* guidance on graphics, I would attempt to implement a GUI to accompany this progam to show better ball movement.
*
*
*/




#include <iostream>
#include <fstream>
#include "Structs_and_enum.h"
#include "Court.h"
#include "Point.h"
#include "Line.h"
#include "Ball.h"
#include <cstdlib>
#include <ctime>
#include <chrono>


using namespace std;
using namespace std::chrono;

//int court [20][10];




int main(int argc, char * argv[]){
	//cout<<"Hello World!"<<endl;
	
	try{
		int ynottry = stoi(argv[1]);
		
	}
	catch(std::invalid_argument& e){
		cerr<<"You endered a wrong type of argument. please enter a 1 or a 2."<<endl;
		exit(1);
	}
	
	if( argc != 2){
		cerr<<"Wrong number of arguments. Please enter a number of random shots to see from Kane Waselenchuck."<<endl;
		exit(1);
	}
	
	int num = stoi(argv[1]);
	int choice;
	Ball balls[10];
	Point points[12];
	int size = 10;
	int tempx;
	int tempy;
	int temp;
	
	while(num>0){
	
		cout<< "Please enter a 1 to see a kill shot, or a 2 for a passing shot."<<endl;
	
		cin >> choice;
	
	
		srand(time(NULL));
		int r  = (rand()%5);
	
	//cout<<r<<endl;
	
	// Point p1 {12,12};
	
	// Point p2{13,10};
	
	// Point p3{14,8};
	
	// Point p4{15,6};
	
	// Point p5{16,4};
	
	// Point p6{17,2};
	// Point p10{18,0};
	// Point p7 {19,2};
	
	// // Point p8{19,3};
	
	// Point p9{18,4};
	
	
	
	//p2.showPoint();
	//p1.showPoint();	

	// Line ln {p1,p2};
	//ln.showLine();
	
	// Ball b1 {p1,5.33,35};
	// b1.showBall();
	// b1.moveBall(p2);
	// b1.showBall();
	
	//fillArray();
	//print_array();
	// Ball b2 {p2,5,5};
	
	// Ball b3 {p3,2,10};
	// Ball b4 {p4,5.33,35};
	// Ball b5 {p5,5.33,35};
	// Ball b6 {p6,5.33,35};
	// Ball b7 {p7,5.33,35};
	//Ball b8 {p8,5.33,35};
	// Ball b9 {p9,5.33,35};
	// Ball b10 {p10,5.33,35};
	
	
	
	// Ball balls[10];// = {b1,b2,b3,b4,b5,b6,b7,b9,b10};
	
	// cout<<size<<endl;
	
	
	
	// cout<<player1.name<<endl;
	// cout<<player1.score<<endl;
	
	
	// cout<<player2.name<<endl;
	// cout<<player2.score<<endl;
	
	
	auto start = high_resolution_clock::now();
	if(choice == 1){
		
		ifstream inf("Kills.txt");
		
		if(!inf){
			cerr << "unable to pen file for reading"<<endl;
			exit(1);
		}
	
		
		
		for(int x = 0;x<r*24;x++){
			inf>>temp;
		}
	
		for(int x = 0;x<12;x++){
			inf >> tempx;
			inf >> tempy;
			 
			points[x] = {tempx,tempy};
			points[x].showPoint();
		}
	
		Player player1{"Bob",points[0].getX(),points[0].getY(),20};
		Player player2{"Joe",points[1].getX(),points[1].getY(),3};
	
	
	
		for(int x = 2;x<12;x++){
			balls[x-2].moveBall(points[x]);
			fillArray(player1,player2,balls,size);
			print_array();
			//balls[x-2].showBall();
		}
	}
	
	
	
	
	if(choice == 2){
		//cout<< "It worked!"<<endl;
		
	
		//Point points[12];
		//int size = 10;
		//int tempx;
		//int tempy;
		//srand(time(NULL));
		//int r  = (rand()%5);
	
	
		ifstream inf("Passes.txt");
		
		if(!inf){
			cerr << "unable to pen file for reading"<<endl;
			exit(1);
		}
		
		
		for(int x = 0;x<r*24;x++){
			inf>>temp;
		}
	
	
		for(int x = 0;x<12;x++){
			inf >> tempx;
			inf >> tempy;
			 
			points[x] = {tempx,tempy};
			points[x].showPoint();
		}
	
		Player player1{"Bob",points[0].getX(),points[0].getY(),20};
		Player player2{"Joe",points[1].getX(),points[1].getY(),3};
	
		
		
		for(int x = 2;x<12;x++){
			balls[x-2].moveBall(points[x]);
			fillArray(player1,player2,balls,size);
			print_array();
			//balls[x-2].showBall();
		}
		
	}
	
	auto stop = std::chrono::high_resolution_clock::now();
	//cout<<r<<endl;
	
		auto duration = duration_cast<microseconds>(stop - start); 
 		cout << "The program took "<<duration.count() <<" microseconds."<< endl; 
	num--;
	}
	

	return 0;
	
}