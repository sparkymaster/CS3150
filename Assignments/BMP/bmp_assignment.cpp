/*
Parker Evans
11/3/19 through 11/12/19
CS 3150 -- Dr. Cantrell

This assignment is an intensified file-io assignment to take a file, test whether or not it is a bmp. If it is not one, to throw an error; then if it is one to get the filesize,
and extract it from the hex-characters and interpret the values as integer values. Then to obtain the r b g and a, values and create a new file that is also a BMP file, but one
that has been changed from color to black and white. As commandline arguments, we need to accept a single integer number to indicate by which method the files will be 
manipulated. My personal favorite was method 2, a kind of gray-scale value.


*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <algorithm>



unsigned char lightnessMethod(int, int, int);
unsigned char averageMethod(int,int,int);
unsigned char luminosityMethod(int,int,int);

using namespace std;
int main(int argc, char* argv[]){

	// converting commandline args to ints
	int method = stoi(argv[1]);
	if(method !=1 && method != 2 && method != 3){
		cout<<"Please enter either a 1, 2, or a 3 to run the color converter."<<endl;
		exit(1);
	
	}		
	
	//cout<<method1<<endl;  -- Testing if the method1 was actually extracted correctly.
	ifstream inf("4_Created.bmp");
 	
 	if (!inf)
 	{cerr <<"unable to open file for writing!" << endl; exit(1);}
 	
 	// while(inf>>b)
 	// {
 		// inf>>b;
   		// std::cout << std::hex << +b << '\n';
   	// }
   	// inf>>b;
	
	ofstream outf("4_CreatedBW.bmp");
 	
 	if (!outf)
 	{cerr <<"unable to open file for writing!" << endl; exit(1);}
	
	
	
	int count = 0;
	char * check = new char[4];
	inf.read(check, 2);
	count+=2;
	//cout << check[0] << endl;
	//cout<< check[1]<<endl;
	
	if(check[0] != 'B' || check[1] != 'M'){
			cout<<"I really suck"<<endl;
			cout<<"This is not a BMP"<< endl;
			exit(1);
	}
 	else{
		//cout<< "I don't suck as bad."<<endl;
	}
	outf <<check[0];
	outf<<check[1];
	//cout<<check[1]<<endl;
	inf.read(check, 4);
	count+=4;
	outf <<check[0];
	outf<<check[1];
	outf<<check[2];
	outf <<check[3];
		// cout<<check[0]<<endl;
		// cout<<std::hex<<check[1]<<endl;
	int temp = 0;
	char ctemp= 'a';
	unsigned char * buffer = new unsigned char[4];
	
	
	//Rearranging the array to be a new unsigned char array; needed for the byte size of the file.
	
	for(int x = 3;x>=0;x--){
		buffer[temp] = check[x];
		temp++;
	}
	
	for(int x = 0;x<4;x++){
		//cout<<check[x];
		
	}
	//cout<<endl;
	for(int x = 0;x<4;x++){
		//cout<<std::hex<<+buffer[x];
		
	}
	//cout<<endl;
	
	// This took a long time, but it is bit-shifting to convert a hex char to an integer. credit to Dr. Cantrell for helping.
	
	int filesize = (int)buffer[3];

	filesize+=(int)buffer[2]<<8;
	filesize+=(int)buffer[1]<<16;
	filesize+=(int)buffer[0]<<24;
	//cout<<std::dec<<filesize<<endl;
	//cout<<std::hex<<+buffer[0]<<std::hex<<+buffer[1]<<std::hex<<+buffer[2]<<endl;
		cout<<"Filesize = "<<filesize<<endl;
	
	
	while(count<10){
		inf.read(check,1);
		outf<<check[0];
		count++;
	}
	inf.read(check,1);
	outf<<check[0];
	//cout<<(int)check[0]<<endl;
	unsigned int x = (int)check[0];
	while(count<x-1){
		inf.read(check,1);
		outf<<check[0];
		count++;
	}
	// inf.read(check,4);
		
		// count+=4;
		// cout<<std::dec<<(unsigned int)check[0]<<endl;
		// cout<<(unsigned int)check[1]<<endl;
		// cout<<(unsigned int)check[2]<<endl;
		// cout<<std::dec<<(unsigned int)check[3]<<endl;
	while(inf){
		inf.read(check,4);
		
		count+=4;
		int r = (int)check[1];
		int g = (int)check[2];
		int b = (int)check[0];
		unsigned int a = (unsigned int)check[3];
		// outf<<b;
		// outf<<r;
		// outf<<g;
		
		
		if(method ==1){
			outf<<lightnessMethod(b,r,g);
			outf<<lightnessMethod(b,r,g);
			outf<<lightnessMethod(b,r,g);
			
			// cout<<lightnessMethod(b,r,g)<<endl;
			
		}
		
		if(method ==2){
			outf<<averageMethod(b,r,g);
			outf<<averageMethod(b,r,g);
			outf<<averageMethod(b,r,g);
			// cout<<averageMethod((int)check[0],(int)check[1],(int)check[2])<<endl;
		}
		
		if(method ==3){
			outf<<luminosityMethod(b,r,g);
			outf<<luminosityMethod(b,r,g);
			outf<<luminosityMethod(b,r,g);
			// cout<<luminosityMethod((int)check[0],(int)check[1],(int)check[2])<<endl;
		}
		
		outf<<a;
		// cout<<check[3]<<endl;
		// cout<<a<<endl;
		
	}
	
	//cout<<count<<endl;
	//cout<<filesize<<endl;
	if(count!=filesize+3){
		cerr<<"Improper file output size"<<endl;
	
	}
	
	
   
   inf.close();


return 0;	
}

unsigned char lightnessMethod(int B, int R, int G){
	unsigned int num;
	int max;
	int min;
	if(B>=R && B>=G)max = B;
	if(R>=B && R>=G)max = R;
	if(G>=B && G>=R)max = G;
	
	if(B<=R && B<=G)min = B;
	if(R<=B && R<=G)min = R;
	if(G<=B && G<=R)min = G;
	num = (max+min)/2;
	return (unsigned char)num;
}

unsigned char averageMethod(int B, int R, int G){
	unsigned int num;
	num = (R+G+B)/3;
	return (unsigned char)num;
}

unsigned char luminosityMethod(int B, int R, int G){
	unsigned int num;
	num = .21*R+.72*G+.07*B;
	return (unsigned char)num;
}

