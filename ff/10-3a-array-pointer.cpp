//Pointer Array Heap 
/*
Array pointers storing address of variables
time: 7:33
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
	*pary[0]=99;        //assigning x
	
	for(int i=0;i<3;i++)
	cout<<"printing value x using paray  "<<*pary[i]<<" Printing address of x "<<pary[i]<<endl;
}




