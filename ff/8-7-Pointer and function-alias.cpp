//Dereference operator
/*time 39:00
 
*/

#include<iostream>
using namespace std;

void swap(int&,int&);
main()
{
int a=5,b=6;
cout<<&a<<"   "<<&b<<endl;
swap(a,b);	
cout<<a<<"   "<<b;	
}

void swap(int &x,int &y)
{
	int c=x;
	    x=y;
	    y=c;
	 cout<<&x<<"   "<<&y<<endl;    
}




