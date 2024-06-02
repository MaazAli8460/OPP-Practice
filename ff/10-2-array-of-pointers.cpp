//Pointer Array Heap
/*
Array pointers

Program only store first address others are increamented
time: 1:00
*/


//Pointer Array Heap
/*
Array pointers

using one pointer
time: 1:00
*/
#include<iostream>
using namespace std;

main()
{
	int c[3]={1,2,9};			//arary of type int
	int *p=&c[0];				
	int *cp[3];					// ary of pointer of type integer 
	
	for(int i=0;i<3;i++)
		cp[i]=&c[i];				//storing first address of array to pointer
	
	for(int i=0;i<3;i++)
	{
		cout<<"through array "<<c[i];
		cout<<" through Pointer P "<<*p;
		cout<<" through Pointer array cp  "<<*cp[i]<<"    "<< *(*(cp+i))<<endl;
		p++;	
	}	
}
