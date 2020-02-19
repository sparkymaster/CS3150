//25 points
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//read in the text file in.txt replace all chars == 0 and replace them with a space
	// create another file called out.txt wih correct changes.
	
	ifstream inf("in.txt"); //in file stream
 	
 	if (!inf)
 	{cerr <<"unable to open file for reading!" << endl; exit(1);}

	ofstream outf("out.txt");
	if(!outf)
	{cerr << "unable to write filel for reading!"<< endl; exit(1);}
 	
 	char temp;
 	
 	while (inf >> temp){
 		if(temp == '0'){
			outf << " ";
			//cout << temp << endl;
			continue;
		}
			outf<<temp;
		
	}
 	return 0;
}