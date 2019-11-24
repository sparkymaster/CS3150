#ifndef GENERATOR
#define	GENERATOR


#include <vector>
#include <iostream>
#include <string>
using namespace std;





class Generator
{
	private: 
		
		string filename;
		vector<string> quoteArray;
		
		
		
		
		
	public: 
		int x = 0;
		vector<string> list;
		Generator(string filename):filename(filename){
			ifstream inf(filename);
	
			if(!inf){
				cerr<<"Didn't open correctly"<<endl;
				exit(1);
			}
	
			
			
			
			string s;
			while(inf){
				getline(inf,s);
				quoteArray.push_back(s);
				//cout<<quoteArray[x]<<endl;
				x++;
			}
			
		}
		~Generator(){cout<<"Object Destroyed"<<endl;}
		string getQuote(int);
		void removeQuote(int);
		string randomSelect();
		void displayQuote(int);
		int quoteCount();
		void addQuote(string);
		
		
	// Should I make the vector a static variable?

		
};





#endif