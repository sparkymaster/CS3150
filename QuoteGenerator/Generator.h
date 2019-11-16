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
		
		Generator(string filename):filename(filename){}
		~Generator(){cout<<"Object Destroyed"<<endl;}
		string getQuote();
		void removeQuote(int);
		string randomSelect();
		void displayQuote();
		int quoteCount();
		
	// Should I make the vector a static variable?

		
};




#endif