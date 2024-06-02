/*
If two pointer are pointing to same value they are Alias of one another
*/

#include<iostream>
using namespace std;
main()
{
	int *p,*q;
	int x=5;
	int &z=x;			//alias to x
	
	p=&x;
	q=p;
	
	 cout<<p<< " Address save in both pointers "<<q<<endl;
	 cout<<"Address of alias z  "<<&z<<" Address of x "<<&x<<endl;
	 cout<<*p<< " Address save in both pointers "<<*q<<endl;
	 z=15;
	 cout<<z <<" z alias of x "<<endl;

	
}
