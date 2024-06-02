 /*
If two pointer are pointing to same value they are Alias of one another

Example of weak aliasiing
*/

#include<iostream>
using namespace std;

void ftn(int*);
main()
{
	int x=5;
	int *p=&x;
	cout<<x<<"   pointer before ftn "<<p<<endl;
	ftn(p);
	cout<<x<<"   pointer on back "<<p<<endl;
	
}

void ftn(int *q)
{
	 *q=99;
	 int y=7;
	 q=&y;
	 cout<<y<<"  pointer "<<q<<endl;
}
