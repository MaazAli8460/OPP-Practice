 /*
C string
 
 
 Slides:143-145
*/
#include<iostream>
#include<string.h>
using namespace std;
void message(int);
main()
{	
	cout<<"Main";
	message(5);
	cout<<"Back to Main";
}

void message(int x)
{
	cout<<"In message for "<<x<<"  time \n";     
	message(x-1);		//infinite call
		
}


