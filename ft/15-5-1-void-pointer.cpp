 /*
Void pointer:  is pointer having no specific data associative with it

can point any data of any data type and can be type casted to any type

Usage: Malloc & calloc function return void pointer  these can allocate memory for any type of data.. 

tube:https://www.youtube.com/watch?v=ij2jrsUmwCI
 
*/
#include<iostream>
using namespace std;
main()
{
	int n=10;									//
	void *ptr=&n;								// no associative data type & can point to any type data
	// cout<<" Void *ptr  "<<*ptr;				// ERROR:Void is not a pointer to object data type
	cout<<" Void *ptr  "<<*(int*)ptr<<endl;		// pointer type casted first type casting mean changed its type
												// by type casting it become an integer variable
	//*ptr=15;	                 //ERROR void is not a pointer to object type										
	*(int*)ptr = 15;							//could be assigned by type casting
	cout<<" Void *ptr  "<<*(int*)ptr;
}


