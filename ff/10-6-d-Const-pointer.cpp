//Const pointer
/*
 Const in pointer
 
 	Four Senerios

 4. variable is const & pointer is const
 
 
time: 17:33
*/

#include<iostream>
using namespace std;
main()
{ 
	int z=9;
	const int* const p=&z;		//p is an constant pointer to an constant integer
	int y=15;	
	//p=&y;					//ERROR Assignment is read only 
	*p=25;
	cout<<"address of z "<<&z<<"  pointer value "<< p<<" pointed value "	<<*p;	
}




