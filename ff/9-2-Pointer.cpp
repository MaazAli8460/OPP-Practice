//Dereference operator
/*
 *
 
 using pointer we can change two things
 1. Address that is saved in the point that mean we can point it to any variable
 2. Value of a variable it is pointing to
time 15:31
*/

#include<iostream>
using namespace std;
main()
{
	float a=5, c=9;
	float *p;
	
	p=&c;
	*p=9.5;
	p=&a;			
					
	cout<<*p;
	
}




