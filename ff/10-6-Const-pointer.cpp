//Const pointer
/*
 Const in pointer
 
 	Four Senerios
 1. variable is variable & pointer is variable as well
 2. variable is const & pointer is variable
 3. variable is variable & pointer is const
 4. variable is const & pointer is const
 
 
time: 9:30
*/

#include<iostream>
using namespace std;
main()
{
	int const x=5;
	//int *px=&x;			//ERROR invalid conversion from const int to in
	
	const int *px=&x;
	//*px=34;				//Error assignment o read only
}




