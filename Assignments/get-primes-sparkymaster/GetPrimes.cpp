/*Created by Parker Evans
	9/16/19
	Dr. Cantrell
	CS 3150

	This assignment is created to test our ability to include various types of input, and use functions from another source to display lists of data that meet a certain requirement.
	This is not very difficult if there are multiple functions that all various methods from other files. I used a method called isPrime which returned a boolean value, if a number was prime, 
	and if it was prime, it printed the value on a new line. If it wasn't it was skipped over. This program also allows the user to choose the number of test cases they wish to run, it needs to 
	be at least 1 in number.
	


*/
#include <iostream>
#include "Functions.h"


using namespace std;

int main(){
	
	int tests =0;
	cout << "Please enter the number of test cases you wish to run." <<endl;
	cin >> tests ;
	
	while(tests<1){
		cout<< "You need to enter a value of at least 1. Please enter a new number."<< endl;
		cin >> tests;
	}
	
	cout<< "You want to run "<<tests<< " tests." << endl;
	cout<< "Please enter a lower bound followed by an upper bound separated by a space for each test."<< endl;
	for( int i =0; i< tests; i++){
		
		int m;
		int n;
		
		
		cin >> m;
		while(m<=0){
			cout << "You need to enter a number greater than or equal to 1"<< endl;
			cout << "Please enter a new lower bound."<< endl;
			cin >> m;
		}
		
		
		// cout << "Please enter an upper bound number"<< endl;
		cin >> n;
		while(n<=m){
			cout << " You need to enter a number larger than your lower bound, duh." << endl;
			cout << " Please enter a new upper bound."<< endl;
			cin >> n;
		}
		
		// cout << "Your numbers are: " << m<<", and "<<n<<"." <<endl;
		// cout << m<<" "<<n<<endl;
		
		int temp = m;
		while(temp <= n){
			
			if(temp == 2){
				cout << temp<<endl;
			}
			
			if(isPrime(temp)&& temp != 2&& temp!=1){
				cout<< temp <<endl;
			}
		temp++;
		}
	}
	
	
	return 0;
	
}
