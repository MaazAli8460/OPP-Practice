 /*
If two pointer are pointing to same value they are Alias of one another
*/

#include<iostream>
using namespace std;
main()
{
	int *p,*q;
	int x=5,y=7;
	
	p=&x;
	q=p;
	
	 cout<<p<< " Address save in both pointers "<<q<<endl;
	 cout<<*p<< " Address save in both pointers "<<*q<<endl;
	 p=&y;
	 
	 cout<<*q;
	 

}
