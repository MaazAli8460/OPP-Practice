//Const pointer
/*
 Const in pointer
 
 	Four Senerios

    variable is const & pointer is variable pointing to const
  
time: 17:32
*/

#include<iostream>
using namespace std;
main()
{
	const int z=9;
	const int *p;		//p is pointer to an int const
	p=&z;			
	//*p=20;	        //ERROR Assigned to read only location
	const int y=-6;
	p=&y;				//pointer is not a const as we are changing the pointer point to different const Y
	
}




