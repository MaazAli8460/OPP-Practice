//Const pointer
/*
 Const in pointer
 
 	Four Senerios
 
 3. variable is variable & pointer is const
 
time: 17:33
*/

#include<iostream>
using namespace std;
main()
{ 
	int z=9;
	int* const p=&z;		//p is constant pointer to an integer constant are initialze when they are defined
	int y=15;	
	*p=-5;					//we can change value of z
	//*p=&y;				//ERROR invalid conversion				
}




