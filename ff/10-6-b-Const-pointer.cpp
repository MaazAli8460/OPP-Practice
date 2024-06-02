//Const pointer
/*
 Const in pointer 
 
 2. variable is const & pointer is variable
 
time: 17:32
*/

#include<iostream>
using namespace std;
main()
{
	const int z=9;
    int *p=&z;		   //ERROR//p is point to an int const
	//p=&z;		//****ERROR  invalid conversion const to in
	//*p=20;     	//**Error Assigned to read only location
	cout<<*p;
}




