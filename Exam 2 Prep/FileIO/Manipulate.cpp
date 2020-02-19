/******************************************************************************

          https://www.onlinegdb.com/online_c++_compiler#editor_1                    Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>




using namespace std;

int main()
{
	
	cout<<"hello"<<endl;
    fstream iofile("out.txt", ios::in | ios::out);
    if(!iofile){
        cerr << "Didn't open out.txt"<<endl;
        exit(1);
    }
    
    char c;
    /*iofile.get(c);
    cout<<c<<endl;
    iofile << '#';
    
    iofile.seekg(2,ios::cur);
    iofile.get(c);
    cout<<c<<endl;
    */
    
    
    //This code replaces all spaces with an asterix.
    while(iofile.get(c)){
        if(c == ' '){
            iofile.seekg(-1 ,ios::cur);
            iofile << '#';
            
            
        }
    }
    
    
    return 0;
}
