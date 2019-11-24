#ifndef GENERATOR
#define	GENERATOR


#include <vector>
#include <iostream>
#include <string>
using namespace std;


int gcount = 0;


class Generator
{
	private: 
		
		string filename;
		vector<string> quoteArray;
		
		
		
		
	public: 
		vector<string> list;
		Generator(string filename):filename(filename){
			ifstream inf(filename);
	
			if(!inf){
				cerr<<"Didn't open correctly"<<endl;
				exit(1);
			}
	
			
			
			int x = 0;
			string s;
			while(inf){
				getline(inf,s);
				quoteArray.push_back(s);
				//cout<<quoteArray[x]<<endl;
				x++;
			}
			gcount++;
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