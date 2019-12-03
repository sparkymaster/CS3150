#include <iostream>
#include "Structs_and_enum.h"
#include "Court.h"
#include "Point.h"
#include "Line.h"
#include "Ball.h"



using namespace std;

//int court [20][10];




int main(int argc, char * argv[]){
	//cout<<"Hello World!"<<endl;
	Point p1 {1,2};
	
	Point p2;
	
	//p2.showPoint();
	//p1.showPoint();	

	Line ln {p1,p2};
	//ln.showLine();
	
	Ball b1 {p1,5.33,35};
	b1.showBall();
	b1.moveBall(p2);
	b1.showBall();
	
	//fillArray();
	//print_array();
	
	Player player1{"Bob",5,5,20};
	cout<<player1.name<<endl;
	cout<<player1.score<<endl;
	
	Player player2{"Joe",6,15,3};
	cout<<player2.name<<endl;
	cout<<player2.score<<endl;
	
	fillArray(player1,player2);
	print_array();
	

	return 0;
	
}