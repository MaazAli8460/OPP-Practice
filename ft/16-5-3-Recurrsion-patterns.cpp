 /*
C Recurrsion
Patterns: 5 4 3 2 1 2 3 4 5
 */
 
#include<iostream>
#include<string.h>
using namespace std;
void print(int);
main()
{	
	print(5);
}

void print(int n)
{
	if(n==1)
	{
	 	cout<<n<<"\t";	
	}
	else
	{
		cout<<n<<"\t";
		print(n-1);
		cout<<n<<"\t";		
	}
}

