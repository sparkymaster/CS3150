//Command line arguments demonstration
//10-14-2019
//Dr. G

#include <iostream>
#include <string>

using namespace std;

//Typical declaration. No surprises here. 
//What does this mean anyways?

//option #1

//int main(){}

//Another way to declare main. 
//What does this mean

// Option 2


// int main(int argc, char* argv[])
// {
	// cout << argc << endl;
	// cout << argv[0] << endl;
	
	// for (int x = 0; x < argc; x++)
		// cout << argv[x] << endl;
	
	// double  y = stod(argv[1]); // for doubles
	// int x = stoi(argv[2]);
	// cout<<x<<endl;
	
	// cout<<y<<endl;
	
// }





// Alternatively
int main(int argc, char** argv)
{	
	cout<<argc<<endl;
	for (int x = 0; x < argc; x++)
		cout << argv[x] << endl;
	
	double  y = stod(argv[1]); // for doubles
	int x = stoi(argv[2]); // for ints
	cout<<x<<endl;
	
	cout<<y<<endl;
}


//What is each element of argv?
//How do you get ints and floats from this?
/*
int main(int argc, char* argv[])
{
	//int x = argv[1];
	//cout << x << endl;
}
*/