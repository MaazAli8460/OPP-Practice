 /*
C Recurrsion
Patterns: 5 4 3 2 1  
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
		cout<<n<<"\t";
		print(n-1);
	}
}

