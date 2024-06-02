//Pointer Array Heap
/*
Array pointers storing address of variables
time: 6:20
*/

#include<iostream>
using namespace std;
main()
{
	int x=5, y=9,z=-1;
	int *pary[3];
	
	pary[0]=&x;
	pary[1]=&y;
	pary[2]=&z;
	//pary[0]=5;		//ERROr as constant cannot be stored as address
	*(*pary) =99;
	
	cout<<"printing x using paray  "<<*pary[0]<<endl;
	cout<<"printing y using paray  "<<*pary[1]<<endl;
	cout<<"printing z using paray  "<<*pary[2]<<endl;
	

}




