 /*
If two pointer are pointing to same value they are Alias of one another
Strong Alias
*/

#include<iostream>
using namespace std;
main()
{
	int *p;
	int x=77,y=25;
	p=&x;
	int *&q=p;	
	*p=7;	
	cout<<&p<< " Addresses of  both pointers "<<&q<<endl;	
	cout<<p<< " Address save in both pointers "<<q<<endl;
	cout<<*p<< " Address save in both pointers "<<*q<<endl;
	 
	q=&y;
	cout<<p<< " Address save in both pointers "<<q<<endl;
	cout<<*p<< " Address save in both pointers "<<*q<<endl;
}
