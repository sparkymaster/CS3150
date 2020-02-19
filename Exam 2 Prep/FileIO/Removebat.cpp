/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
    // //cout<<"Hello World";

    // ifstream inf("out.txt");
    
    // if(!inf){
        // cerr<<"Couldn't read the out.txt file.";
        // exit(1);        
    // }
    
    // ofstream outf("out1.txt");
    // if(!outf){
        // cerr<<"Couldn't write the out1.txt file.";
        // exit(1);        
    // }
    
    // string s;
    // while(inf>>s){
        // if(s!="bat"){
        // cout<<s<<endl;
        // outf << s<<" ";
        // }
    // }
	
/////// This is where I do it line by line to manipulate out all of the bats in a file.

    //cout<<"Hello World";

    ifstream inf("out.txt");
    
    if(!inf){
        cerr<<"Couldn't read the out.txt file.";
        exit(1);        
    }
    
    ofstream outf("out1.txt");
    if(!outf){
        cerr<<"Couldn't write the out1.txt file.";
        exit(1);        
    }
    
    string s;
    string t;
  
    
    while(getline(inf,s)){
        stringstream s1(s);
        while(s1.good()){
            s1 >> t;   
            //cout<<t<<endl;
            if(t!="bat"){
            //cout<<s<<endl;
            outf << t<<" ";}
            else{
                cout<<"There was a bat"<<endl;
            }
        }
        s1.clear();
        s1.str("");
        outf<<endl;
    }





    return 0;
}
