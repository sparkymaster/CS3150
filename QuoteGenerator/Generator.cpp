/************************************************************
*	Parker Evans
* 	CS 3150 -- Dr. Cantrell
* 	Quote Generator Assignement
*	11/15/19 -- 
*
************************************************************/

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "Generator.h"




string Generator::getQuote(int x){
	string a;
	a= quoteArray[x];
	return a;

}

void Generator::removeQuote(int x){


}

string Generator::randomSelect(){
	string a;
	return a;
	

}

void Generator::displayQuote(int x){
	cout<< quoteArray[x]<<endl;
	
}

int Generator::quoteCount(){
	
	return gcount;
}


int main(int argc, char * argv[]){
	
	
	//Testing the ability to save strings and print them as a new file.
	/*cout<<"Hello World!"<<endl;
	
	ifstream inf("Quotes.txt");
	
	if(!inf){
		cerr<<"Didn't open correctly"<<endl;
		exit(1);
	}
	
	ofstream outf("QuotesNew.txt");
	
	if(!outf){
		cerr<<"Not writing correcty"<<endl;
		exit(1);
	}
	
	
	
	
	string s;
	cout<<s<<endl;
	getline(inf,s);
	cout<<s<<endl;
	
	outf << s<<endl;
	*/
	
	//testing creating a generator class from the list of quotes.
	
	if(argc == 2){
	cout<<"Test"<<endl;
	string s = argv[1];
	
	Generator g1(s);
	cout<<"Worked"<<endl;
	
	srand(time(NULL));
	int x = rand()%33+1;
	g1.displayQuote(x);
	Generator g2(s);
	cout<<g1.quoteCount()<<endl;
	}
	if(argc == 1){
		cout<< "Please enter the filename you wish to create."<<endl;
		string s;
		cin >> s;
		//cout<< s<<endl;
		int count =0;
		Generator g1{s};
		int x;
		ofstream outf("QuotesNew.txt");
		if(!outf){
				cerr<<"Not writing correcty"<<endl;
				exit(1);
			}
		srand(time(NULL));
		int r;
		
		
		while (x!=6){
		
		cout<< "Please enter the number you would like to do."<<endl;
		cout<<"1. Get a random quote"<<endl;
		cout<<"2. Add Quote to new file"<<endl;
		cout<<"3. Remove quote by line"<<endl;
		cout<<"4. Get specific quote by line"<<endl;
		cout<<"5. Get number of current quotes"<<endl;
		cout<<"6. Exit"<<endl;
		cin>>x;
		switch(x){
		
		case 1:
				r = rand()%33+1;
				s = g1.getQuote(r);
				outf<<s<<endl;
				count++;
				break;
		
		case 2:
				//cout<<"Please enter your quote, followed by -- Author"<<endl;
				//char quote[100] = {0};
				//s = getline(std::cin,s);
				
				//cout<<s<<endl;
				/*char temp[100];
				//cin.getline(temp, 100);
				//outf<<temp<<endl;
				//count++;*/
				break;
		default: 
				x = 6;
				break;
		}
		}
		g1.displayQuote(5);
	
	}
	else{
		cout<<"you entered the wrong number of arguments."<<endl;
		return 0;
	}
	
		
	return 0;
}