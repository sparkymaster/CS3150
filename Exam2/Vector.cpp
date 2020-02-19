//10 points
//Rewrite the following using a vector in place of the variable array

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//char * array = new char[10];
	vector<char> array;
	
	for (int x = 0; x< 10; x++){
		//array[x] = 'a' + x;
		array.push_back('a'+x);
	}
	for (int x = 0; x<10; x++)
		cout << array[x];
		
	cout << "\n";
}