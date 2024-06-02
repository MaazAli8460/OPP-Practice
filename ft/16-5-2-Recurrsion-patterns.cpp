 /*
C Recurrsion
Patterns: 1 2 3 4 5
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
	if(n==0)
	{
	 	
	}
	else
	{
		print(n-1);
		cout<<n<<"\t";		
	}
}

