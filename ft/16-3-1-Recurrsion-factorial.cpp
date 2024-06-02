 /*
C Recurrsion

Book: Tony
 
 
 */
#include<iostream>
#include<string.h>
using namespace std;
long fact(int);
main()
{	

	cout<<" Factorial.... \n";
	long int f=fact(5);
	cout<<" = "<<f;
}

long fact(int n)
{
	if(n>=1)
	{
		cout<<" * "<<n;
		return n*fact(n-1);	
	}
	else if(n==0||n==1)
		return 1;
}


