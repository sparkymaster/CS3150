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
				cout<<s<<endl;
				//count++;
				break;
		
		case 2:
				cout<< "You added the last quote to your file of quotes"<<endl;
				g1.addQuote(s);
				count++;
				//outf<<s<<endl;
				break;
		case 3: 
				cout<< "Which quote number would you like to remove?"<<endl;
				int temp;
				cin >> temp;
				g1.list[temp]=" ";
				cout<<"You removed the quote at line "<<temp<<endl;
				count--;
				break;
		case 4:
				cout<< "Which quote number would you like to read?"<<endl;
				int temp;
				cin>>temp;
				s= g1.getQuote(temp);
				g1.addQuote(s);
				cout<<"You read the quote from line "<<temp<<endl;
				break;
		case 5:	
				cout<<"The number of quotes you have written down is "<<count<<endl;
				break;
		default:
				x=6;
				cout<<"You are done, Check out your new file!"<<endl;

				
				
				//cout<<"Please enter your quote, followed by -- Author"<<endl;
				//char quote[100] = {0};
				//s = getline(std::cin,s);
				
				//cout<<s<<endl;
				/*char temp[100];
				//cin.getline(temp, 100);
				//outf<<temp<<endl;
				//count++;*/
				
		}
		//g1.displayQuote(5);
		}
		
		for( int x = 0;x<g1.list.size();x++){
			outf<<g1.list[x]<<endl;
		}
	}
	else{
		cout<<"you entered the wrong number of arguments."<<endl;
		return 0;
	}
	
		
	return 0;
}