//Demo Code for String vs CString
//9-22-19
//-Dr. G
//Tested on cpp.sh

#include <iostream>

using namespace std;

int main()
{
    //1. Declare a c string
    char cs[] = "Bob";
    //2. Declare a standard library string
    // std::string s = "not bob";
    //What's the difference?
    //3. display the 3rd character on each string. 
	cout<<cs[2]<< endl;
	// cout<<s[2]<<endl;
    //4. Use index on a string
    //5. Test out cin. 
    
    //6. Get the size of each 
    
    //When would you use C-Strings?
    //How can you tell the difference?
	return 0;

}