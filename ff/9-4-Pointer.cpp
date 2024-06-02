//Dereference operator
/*
 *
 pointer if not used properly it created segmentation fault
time 27:00 
*/

#include<iostream>
using namespace std;
main()
{
	float a=5, c=9;
	float *p;
	float *q=&a;
	float *z;
	
	z=q;
	p=z;
	a=-1;
	cout<<*z<<endl;
	*q=9;
	cout<<*p<<"   "<<a;
	
	
}



