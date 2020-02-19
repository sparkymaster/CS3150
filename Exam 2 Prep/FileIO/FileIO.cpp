/*
File IO CPP Demonstration 
10-21-19
Dr. G
https://www.learncpp.com/cpp-tutorial/181-input-and-output-io-streams/
*/

#include <iostream>
#include <iomanip> //io manipulators
#include <sstream> //string streams
#include <fstream> //file io

using namespace std;

int main()
{
	//What is a stream? 
		// A series of sequential pipe of data that you are pushing onto or pulling from.
	    
	//What are the >> << operators?
		// Insertion and extraction operators
	
	//1. Try this code segment and explore what happens
	
	
	// // This code will output whatever I enter on the input lines right after I enter it.
	// char buf[3];
	// cin >> buf;
    // cout << buf << endl; 
    // //This next section only allows two of the char that I have entered... Hello == He, because the third is the null terminator.
	
    // cin >>setw(3) >> buf;
	// cout << buf << endl;
    //What happens if you exceed your buffer?
		// it will be overwritten and memory is jsust being assigned.
    //Use setw to restrict buffer size.
    
    //2. What is the following code segment doing?
    
    // char ch;
  	// while (cin >> ch)
        // cout << ch;
       
        // this is creating a circular string, that will never terminate.
    //cin.get will use newlines for separator instead of spaces try it.
        // char ch2;
		// while (cin.get(ch2))
        // cout << ch2;
		
    //3. What does the following code do?
    
	//this restricts the amount of info that can be used. or stored
	
    // char strBuf[11];
    // cin.get(strBuf, 11);
    // cout << strBuf << endl;
   
    
    
    //4. There are other methods that are useful as well
    
    //Keep in mind that a stream is a stream. It can be the command line or a file. 
    //As you'll soon see. 
    //What is the difference between get and getline?
    
    /*
    ignore() discards the first character in the stream.
	ignore(int nCount) discards the first nCount characters.
	peek() allows you to read a character from the stream without removing it from the stream.
	unget() returns the last character read back into the stream so it can be read again by the next call.
	putback(char ch) allows you to put a character of your choice back into the stream to be read by the next call.
	*/
    
    //5. I'm going to skip the output section(18.3). It is mostly going over ways to format output.
    //but this section could be useful for your lab assignment.
    //https://www.learncpp.com/cpp-tutorial/183-output-with-ostream-and-ios/
    
    //6. String streams are buffer variables for strings
    
    // stringstream os; // a buffer variable that can hold characters.
    // os << "512345 67.89";
	// //cout << os << "\n";  // Never to be done... It causes issues to cout<<os<<endl;
    // // cout << os.str() << "\n";
    // // cout << os.str() << "\n";
    
    
    // string s1,s2;
  	// os >> s1;
	// cout << os.str() << "\n";
   	// os >> s2; 
  	// cout << os.str() << "\n";
 	// cout << s1 << " " << s2 << "\n";
 	
 	// tells what the string is based on the white space.
 	
 	//7. C++ will convert from text into whatever format it is being directed into from a stream
 	
 	
 	// stringstream os;
	// os << "512345 67.89";
    
 	// int i1;
 	// double d1;
 	
 	// os >> i1 >> d1;
 	
 	// cout << i1 << " " << d1 << "\n";
 	
 	
 	//What happens if you try to run both 6 & 7 and why?
			// we have a pointer that is being moved, so we should create another pointer to look where we need.
	//How would you fix that problem?
 	
 	//8. I'm skipping 18.5, but review
 	//https://www.learncpp.com/cpp-tutorial/185-stream-states-and-input-validation/
 	
 	//9. A stream can also be a file
 	
 	
 	// ofstream outf("out1.txt"); //out file stream
 	
 	// //Always check to make sure the file can be created.
 	// //What would be some reasons it would fail?
 	
 	// if (!outf)
 	// {cerr <<"unable to open file for writing!" << endl; exit(1);}
 	
 	// outf  << "I'm Sexy " << endl;
 	// outf << "and I know it" << endl;
 	
 	// //It's good manners to close a file after it was created. 
 	// //This also makes sure the output buffer is flushed.
 	// outf.close();
 	
 	// ifstream inf("out1.txt"); //in file stream
 	
 	// //What would be some reasons an in file creation would fail?
 	// if (!inf)
 	// {cerr <<"unable to open file for reading!" << endl; exit(1);}
 	
 	// string s1;
 	// // inf >> s1;
 	// // cout << s1 << endl;
	
	// //this gets the first word with white space as a deliminater.
 	
 	// getline(inf,s1); // gets the whole line
  	// cout << s1 << endl;
  	
  	//What if you wanted to read in numbers that were written as text?
 	
 	//How about getting the entire file line by line?
 	// string s1;
 	// while (inf)
 	// {
 		// getline(inf,s1);
 		// cout << s1 << endl;
 		// }

 	// inf.close();
 	
 	// reads the whole file.
 	//10. But all files are not text
 	
 	
 	// ofstream outf("out1.txt");
 	
 	// if (!outf)
 	// {cerr <<"unable to open file for writing!" << endl; exit(1);}
 	
 	// //What does this do?
 	// int x = 123;
 	// double y = 4.0;
 	// string z = "here we go";
 	
 	// outf << x << y << z;
 	
 	// outf.close();
 	
 	
 	// 11. First let's look at writing with a buffer
 	
 	ostream& write(const char*, int);
 	ostream& read(const char*, int);
 	
 	ofstream outf("out1.txt");
 	
 	if (!outf)
 	{cerr <<"unable to open file for writing!" << endl; exit(1);}
 	
 	char buff[] = {"A phrase to write\n"};
 	
 	//It's important to note that this writes at the current position of the file pointer
 	outf.write(buff, sizeof(buff));
 	
 	
 	
 	/*
 	unsigned char b = 0xff;

 	ifstream inf("out.txt");
 	
 	if (!inf)
 	{cerr <<"unable to open file for writing!" << endl; exit(1);}
 	
 	while(inf>>b)
 	{
 		
   		std::cout << std::hex << +b << '\n';
   	}
   	
   	outf.close();
   	*/
   	
	
	// fstream iofile("out1.txt", ios::in | ios::out);
 
    // // If we couldn't open iofile, print an error
    // if (!iofile)
    // {
        // // Print an error and exit
        // cerr << "Uh oh, out1.txt could not be opened!" << endl;
        // exit(1);
    // }
 
    // char chChar; // we're going to do this character by character
 
    // While there's still data to process
    // while (iofile.get(chChar))
    // {
        // switch (chChar)
        // {
            // // If we find a vowel
            // case 'a':
            // case 'e':
            // case 'i':
            // case 'o':
            // case 'u':
            // case 'A':
            // case 'E':
            // case 'I':
            // case 'O':
            // case 'U':
 
                // // Back up one character
                // iofile.seekg(-1, ios::cur);
 
                // // Because we did a seek, we can now safely do a write, so
                // // let's write a # over the vowel
                // iofile << '#';
 
                // // Now we want to go back to read mode so the next call
                // // to get() will perform correctly.  We'll seekg() to the current
                // // location because we don't want to move the file pointer.
                // iofile.seekg(iofile.tellg(), ios::beg);
 
                // break;
        // }
    // }
	
	
   	//Review lab assignment
   	
   	//ICE
   	//12. Display a file just as hex characters
   	//13. Copy a file using just the hex values
   	//14. Change every space in a text file to an _
   	//15. 
   	
}

