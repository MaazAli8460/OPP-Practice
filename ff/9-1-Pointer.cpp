//Dereference operator
/*
 *
1. if used with data type int *p; means used to define pointer data type/ pointer variable
2. if * used as unary operator means it is used as dereferening variable
 
*/

#include<iostream>
using namespace std;
main()
{
	int x; //x is variable of type in
	int &y=x;			//alias
	int *xptr;          // is a pointer variable  xptr is a pointer variable of type integer  
	xptr= &y;
	  //	xptr=x;         //ERROR(invalid conversion  same value into address)
	 //*xptr=&z;        //ERROR we are assigning address in to value
	cout<<xptr<<"   "<<&x;
	
	
}




