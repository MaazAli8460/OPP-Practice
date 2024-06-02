//Dereference operator
/*time 39:00
 
*/

#include<iostream>
using namespace std;

void swap(int*,int*);
main()
{
int a=5,b=6;
swap(&a,&b);	
cout<<a<<"   "<<b;	
}

void swap(int *a,int *b)
{
	int c=*a;
	    *a=*b;
	    *b=c;
	     
}




