#include <iostream>
#include <fstream>
#include "Structs_and_enum.h"
#include "Court.h"
#include "Point.h"
#include "Line.h"
#include "Ball.h"



using namespace std;

//int court [20][10];




int main(int argc, char * argv[]){
	//cout<<"Hello World!"<<endl;
	
	if( argc != 2){
		cout<<"Wrong number of arguments. Please enter a 1 to see a random ideal kill shot or 2 to see a random ideal passing shot from Kane Waselenchuck."<<endl;
		exit(1);
	}
	
	if(stoi(argv[1]) == 1){
	
	
	Point points[12];
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
	int size = 10;
	// cout<<size<<endl;
	
	
	
	// cout<<player1.name<<endl;
	// cout<<player1.score<<endl;
	
	
	// cout<<player2.name<<endl;
	// cout<<player2.score<<endl;
	
	
	
	int tempx;
	int tempy;
	
	ifstream inf("Kills.txt");
	if(!inf){
		cerr << "unable to pen file for reading"<<endl;
		exit(1);
	}
	
	
	
	for(int x = 0;x<12;x++){
			inf >> tempx;
			inf >> tempy;
			 
			points[x] = {tempx,tempy};
			points[x].showPoint();
	}
	
	Player player1{"Bob",points[0].getX(),points[0].getY(),20};
	Player player2{"Joe",points[1].getX(),points[1].getY(),3};
	
	Ball balls[10];
	for(int x = 2;x<12;x++){
		balls[x-2].moveBall(points[x]);
		fillArray(player1,player2,balls,size);
		print_array();
		//balls[x-2].showBall();
	}
	
	}
	else if(stoi(argv[1]) == 2){
		//cout<< "It worked!"<<endl;
		if( argc != 2){
		cout<<"Wrong number of arguments. Please enter a 1 to see a random ideal kill shot or 2 to see a random ideal passing shot from Kane Waselenchuck."<<endl;
		exit(1);
	}
	
	if(stoi(argv[1]) == 1){
	
	
	Point points[12];
	int size = 10;
	int tempx;
	int tempy;
	
	ifstream inf("Passes.txt");
	if(!inf){
		cerr << "unable to pen file for reading"<<endl;
		exit(1);
	}
	
	
	
	for(int x = 0;x<12;x++){
			inf >> tempx;
			inf >> tempy;
			 
			points[x] = {tempx,tempy};
			points[x].showPoint();
	}
	
	Player player1{"Bob",points[0].getX(),points[0].getY(),20};
	Player player2{"Joe",points[1].getX(),points[1].getY(),3};
	
	Ball balls[10];
	for(int x = 2;x<12;x++){
		balls[x-2].moveBall(points[x]);
		fillArray(player1,player2,balls,size);
		print_array();
		//balls[x-2].showBall();
	}
	}
	else{
		cout<<"Please try to enter a a one or a two."<<endl;
		exit(1);
	}
		
	

	return 0;
	
}