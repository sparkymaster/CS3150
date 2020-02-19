//10 points
//Have the user enter two int values and output the sum of them.
//Example

#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
	int x = stoi(argv[1]);
	int y = stoi(argv[2]);
	
	cout << "Results = "<<x+y;
	cout << endl;
}