//Dereference operator
/*
 *
 
time 15:00
 
*/

#include<iostream>
using namespace std;
main()
{
	float a=5, c=9;
	float *p;
	float *q=&a;
	p=q;
	*p=19;   
	cout<<a;
	
}



