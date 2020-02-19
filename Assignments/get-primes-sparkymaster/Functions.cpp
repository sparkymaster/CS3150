/*
	Created by Parker Evans
	9/16/19
	Dr. Cantrell
	CS 3150
	
	This is the function file that contains the one function that I have implemented. I decided to have this file
	return a boolean if the number was prime, and false if it was composite. Thus in my main, it needed to call this
	one very quick function many times.


*/

#include <iostream>

bool isPrime(int a){
	
	for(int i = 2;i<=a/2;i++){
		if(a%i==0)
			return false;
	}
	return true;
	
	/*
		This was an earlier attempt to output every prime from here with for loops that wasn't quite working.
		But I left the code in here to see what was so terribly wrong later.
		
	
	*/
	
		/* for(int j = a; j<b;j++){
	
			for(int i = 2; i<c && i<j;i++){
		
				if(j%i!=0){
					std::cout << j<<std::endl;
				}
		 */
		
		/* for (int i = a;i<c;i++){
				if(a%i !=0){
					return a;
				}
		
			}
	 */
	
		
	
	
}


