//Dereference operator
/*
 *
  pointer if not used properly it created segmentation fault
time 38:14 
*/

#include<iostream>
using namespace std;
int* m()
{
	int a=9;
	return &a;			//when return it will distroy all the variable
}
main()
{
	int *q=m();				//function call local variable are created
	cout<<q<<"   "<<*q;
	
}





