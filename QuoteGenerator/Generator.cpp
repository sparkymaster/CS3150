

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

void Generator:: addQuote(string s){
	list.push_back(s);
}


void Generator::removeQuote(int x){
	list[x]=" ";

}

string Generator::randomSelect(){
	string a;
	return a;
	

}

void Generator::displayQuote(int x){
	cout<< quoteArray[x]<<endl;
	
}


int Generator::quoteCount(){
	
	return x;
}


