 /*
 Dangling pointers
 
*/

#include<iostream>
using namespace std;

main()
{
	int *x,*q;
	
	x=new int;
	*x=7;
	q=x;
	cout<<" *x "<<*x<<"  *q "<<*q<<endl;
	delete q;
	q=NULL;	
	cout<<" Dangling pointer x as memory free on heap "<<x;
	cout<<" Dangling pointer q as memory free on heap "<<*q;
}


