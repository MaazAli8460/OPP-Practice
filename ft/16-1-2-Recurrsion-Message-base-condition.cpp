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
	cout<<"Main\n"<<endl;
	message(5);
	cout<<"Back to Main\n"<<endl;
}

void message(int x)
{
	cout<<"In message for "<<x<<"  time \n"; 
	if(x>=1)
	{
		message(x-1);	
	}    
	cout<<"Back to message "<<x<<" times\n";
}


