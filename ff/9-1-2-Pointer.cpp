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
	int x=8;                //x is variable of type in
	int *xptr1,**xptr2,***xptr3;      // is a pointer variable  xptr is a pointer variable of type integer
	//int *check=&xptr;    //Error cannot convert int to int
	xptr1= &x;
	xptr2=&xptr1;
	xptr3=&xptr2;
	cout<<"value of x using single pointer   "<<*xptr1<<endl;

	cout<<"value of x using xxptr pointer   "<<*(*xptr2)<<"    ";
		**xptr2=35;
	cout<<**xptr2<<endl;
	  ***xptr3=23;
	cout<<" ***xptr3 "<<***xptr3;
  	
}




