 /*
C Recurrsion
Patterns: 
1
12
123
1234
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
		print(n-1);
		cout<<n<<"\t";		
	}
}

