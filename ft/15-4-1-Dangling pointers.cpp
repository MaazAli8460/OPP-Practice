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
	
	cout<<" Dangling pointer x as memory free on heap "<<*x;
}


