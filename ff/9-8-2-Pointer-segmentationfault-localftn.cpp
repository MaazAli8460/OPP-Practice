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
void ftn()
{
	int a=2,b=3,c=6;
}
main()
{
	int *q=m();				//function call local variable are created
	ftn();
	cout<<q<<"   "<<*q;
	
}





