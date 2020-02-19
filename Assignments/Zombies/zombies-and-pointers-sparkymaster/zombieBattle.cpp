/*
Author: Parker Evans
Date: 10/25/19
Class: CS 3150
Professor: Dr. Cantrell

This assignment uses the ability of pointers to access memory addresses and change them to particular locations, in this case a zombie pointer in a room or character array. 
I continued to use the array of character pointers although it was unable to verify their addresses, I was already too far along to go back to doing it with integer pointer arrays.


*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

//function for zombie placement in rooms

void placement(char**, int, char*, int);

//function for displaying field

void display(int);


//function for counting active zombies

// int counter(char**, int);

// function for displaying where zombies were.

void showresult(char*, int);


//Declare a const global variable to point "stunned" zombies at
char stun = 'S';
//1. accept as command line inputs: number of rooms, max number of zombies, and zombie 





int main(int argc, char* argv[])
{
	
	
	if(argc != 4){
		cout<<"You need to enter the right number of arguments"<<endl;
		exit(1);
	}
	if(stoi(argv[1])<=stoi(argv[2])){
		cout<<"You need to enter a smaller number of zombies than rooms"<<endl;
		exit(1);
	}		
	
	int numRooms = stoi(argv[1]);
	// cout<<numRooms<<endl;
	int maxZombies = stoi(argv[2]);

	int rate = stoi(argv[3]);
	
	
	char *area = new char[numRooms];
	//char const *area = new char[numRooms];
//	char area[numRooms];
	char *zombies[maxZombies];
	
	
	// initialize rooms to empty. working
	
	
	
	//randomize zombies to point to specific rooms.
	srand(time(NULL));
	
	
	
	
	
	
	//  primitive stunning method working
	for(int x = 0; x<maxZombies;x++){
		//cout<< "Hello"<< endl;
		zombies[x] = &stun;
		
	
	}
	//cout<< zombies[0];
	
	// for(int x = 0;x<3;x++){
		// *[x] = stun;
		// cout<<*rooms;
	// }
	
	// Displaying the field for the user to guess at.
	cout<<"\n";
	

//2. Gather command line input and verify they entered enough arguments and that there are 
//more rooms than zombies

//3. Create a dynamic character area to represent the rooms and initialize the area to 
//all 'E's

//4. Create an array of char pointers to represent the zombies. Array will be the max 
//number of zombies

//5. Randomly point zombies at rooms array. When a zombie points at a room space change 
//the letter in the array to Z. Remember, because we are using pointers you can have more than one
//zombie in a room. 

//6. Start game loop
	int zombc = maxZombies;
	int shot;
	while(zombc>0){
		
		cout<<endl;
		cout<<endl;
		
		display(numRooms);
		
		placement(zombies, zombc, area, numRooms);
		
		
		//showresult(area,numRooms);
		
		cout<< "Select a room to shoot in."<<endl;
		cin >> shot;
		
		while(shot<1 || shot>numRooms){
			cout<< "Please enter a valid room number"<<endl;
			cin>> shot;
		}
		
		if(area[shot-1] == 'Z'){
			zombies[shot-1] = &stun;
			cout<<"You hit one! There are "<<zombc-1<< " left."<< endl;
			zombc--;
			
			
			//area[shot-1] = 'E';
		}else
			cout<< "You missed... badly, try again."<< endl;
		
		// This is not yet working perfectly but it is the regeneration method.
		if(zombc<maxZombies){
			for(int x =0;x<maxZombies-zombc;x++){
				if(zombies[x] == &stun){
					int r = rand()%10;
					// cout<<r<<endl;
					// cout<<*argv[3]<<endl;
					if(r<rate){
						
						cout<<"A Zombie regenerated, you have "<<zombc+1<<" left"<< endl;
						zombies[x] == &area[0];
						zombc++;
					}
				}
			}
		}
		showresult(area,numRooms);
		
		cout<<endl;
		cout<<endl;
	}

//7. Display rooms as '*' place numbers underneath so the user can easily see where they 
//can shoot. Ex

//* * * * * * *
//1 2 3 4 5 6 7

//8. Prompt user to pick a room to "shoot" in. 

	
	
	// for(int x = 0;x<numRooms;x++){
		// cout<<area[x];
	
	// }
	// cout<<endl;
	// cout<< "Select a room to shoot in."<<endl;
	// cin >> shot;
	// if(area[shot-1] == 'Z'){
		// zombies[shot-1] = &stun;
		// area[shot-1] = 'E';
	// }
	

	//outputs the outcome of the zombies and shows in what rooms they are in.
	

//9. Reveal the current zombie distribution. Example: E E Z E E Z Z E E. 

//10.  Check to see if and how many zombies pointed at that room. Point all zombies that 
//were in that room to the "stunned" constant. 

//11. Report zombies left and change all rooms to 'E.'

//12. Cycle through the zombie pointer array. Point each zombie at a new random location 
//unless it is stunned. For each stunned zombie offer a chance of regeneration based on 
//the regeneration rate. For example, 3 would indicate a 3% chance it would regenerate. 
//(You can do this by selecting a random number from 1 to 100.)

//13. If all zombies are dead, terminate loop

//14. End game loop

//15. Report success
//cout<<0<<endl;
return 0;
}

//function for zombie placement in rooms

void placement(char** zombies, int maxZombies, char* area, int numRooms){
	for(int x = 0; x<numRooms;x++){
		
		area[x] = 'E';
		// cout<<area[x]<<endl;
		
	}	
	//cout<<area<<endl;
	for(int x = 0; x<maxZombies;x++){
		int y = rand()%numRooms+1;
		*zombies[x] = 'Z';
		// cout<<"Test"<< endl;
		//*zombies[x] = area[y];
		area[y] = *zombies[x];
		//cout<<*zombies[x]<<endl;
		//cout<<zombies[x]<<endl;
		//cout<<"The address of the room is located at "<<&area[y]<< "when y = "<< y<< "and the pointer equals"<< zombies[x]<<endl;
		//cout <<"The address of the pointer is"<<&zombies[x]<<" and the address of the room is "<< &area[y]<<endl;
		//area[y] = 'Z';
		
	}
	
}

//function for displaying field

void display(int numRooms){
	for(int x = 0;x<numRooms;x++){
		if(x<9){
			cout<<"* ";
		}
		else{
			cout<<"*  ";
		}
	}
	cout<<"\n";
	for(int x = 0;x<numRooms;x++){
		if(x<9)
			cout<<x+1<<" ";
		else
			cout<<x+1<<" ";
	}
	cout<<endl;
}


//function for counting active zombies

// int counter(char** zombies, int maxZombies){
	// int inact = 0;
	// for(int x = 0; x<maxZombies;x++){
		// if(zombies[x]== &stun){
			// inact++;
		// }	
	// }
	// if(inact == 0){
		// return 0;
	// }
	// else
	// return 1;
// }

// function for displaying where zombies were.

void showresult(char* area, int numRooms){
	
	for(int x = 0;x<numRooms;x++){
		if(x<9){
			cout<<area[x]<<" ";
		}
		else{
			cout<<area[x]<< "  "; 
		}
	
	}

	cout<<endl;
}

