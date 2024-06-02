 /*
If two pointer are pointing to same value they are Alias of one another

Example of weak aliasiing
*/

#include<iostream>
using namespace std;
main()
{
	int *p,*q;
	p=new int;
	*p=65;
	 
	 q=p;
	
	 cout<<p<< " Address save in both pointers "<<q<<endl;
	 cout<<*p<< " Address save in both pointers "<<*q<<endl;
	 
	 delete p;
	 p=NULL;
	 cout<<" access value with q  "<<*q;
	 //cout<<" access value with p  "<<*p;   //Exception Runtime******
}
