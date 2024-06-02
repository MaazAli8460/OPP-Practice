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
void times(int,int);
void space(int);
main()
{	
    int t=10;
	times(t,t);
}

void times(int x,int y)
{
	if(x==0)
	{
		
	}
	else 
	{	
		space(x-1);
		print(y-x+1);
		cout<<"\n";
		times(x-1,y);		
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
		cout<<n<<"";		
	}
}

void space(int s)
{
	if(s<=0)
	{
	 		
	}
	else
	{
		cout<<"*";
		space(s-1);						
	}
}

