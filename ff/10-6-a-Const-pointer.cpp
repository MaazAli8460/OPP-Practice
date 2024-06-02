//Const pointer
/*
 Const in pointer
 
 2. variable is const & pointer is variable
 
time: 14:32
*/

#include<iostream>
using namespace std;
main()
{
	const int z=9;
	const int *p;		//p is pointer to an const int
	p=&z;
	//*p=20;			//ERROR Assigned to read only location
	cout<<" const z access using pointer "<<*p<<endl;
	int y=15;
	p=&y;				//Can change the address but cannot change the value it is pointing to
	cout<<" const y access using pointer "<<*p;
	//*p=20;		   //error Because pointer is pointing to a const
	
	
}




