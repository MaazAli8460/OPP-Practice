 /*
If two pointer are pointing to same value they are Alias of one another

Example of weak aliasiing
*/

#include<iostream>
using namespace std;

void ftn(int*&);
main()
{
	int x=5;
	int *p=&x;
	cout<<"   pointer before ftn "<<p<<endl;
	ftn(p);
	cout<<"   pointer on back "<<p<<" value "<<*p<<endl;
	(*p)++;
	cout<<"   pointer after(*p)++  "<<p<<" value "<<*p<<endl;
}

void ftn(int *&q)
{
	 q= new int;
	 *q=25;
	 cout<<"   pointer "<<q<<endl;
}
