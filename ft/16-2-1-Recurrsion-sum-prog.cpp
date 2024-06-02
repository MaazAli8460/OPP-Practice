 /*
C Recurrsion

Book: Tony
 
 
 */
#include<iostream>
#include<string.h>
using namespace std;
int sum(int);
main()
{	

	cout<<"Sum is ";
	int s=sum(-5);
	cout<<" = "<<s;
}

int sum(int s)
{
	if(s>=1)
	{
		cout<< s<<" +";
		return s+sum(s-1);	
	}
	return 0;
}


