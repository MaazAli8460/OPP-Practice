 /*
C Recurrsion
Patterns: 
321
21
1
*/
 
#include<iostream>
#include<string.h>
using namespace std;
void print(int);
void times(int);
main()
{	
	times(3);
}

void times(int x)
{
	if(x==0)
	{
		
	}
	else 
	{
		times(x-1);
		print(x);
		cout<<"\n";
	}
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

