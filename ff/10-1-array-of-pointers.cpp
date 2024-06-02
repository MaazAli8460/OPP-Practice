//Pointer Array 
/*
Array pointers

time: 1:00
*/
#include<iostream>
using namespace std;

main()
{
	int ary[3]={1,2,9};			//arary of type int
	int *p=&ary[0];				//*p=c;
	int *ap[3];					// ary of pointer of size 3 of type integer 
	cout<<"*p=ary "<<p<<"\n&ary[0]  "<<&ary[0]<<"\nArray name c  "<<ary<<endl;		//same
	for(int i=0;i<3;i++)
	{
		ap[i]=&ary[i];		//populating pointer array  or (ap+i)=(
		
	}	
	for(int i=0;i<3;i++)
	{
		//(ary[i])+=2;
		cout<<"through array "<<ary[i]<<" through Pointer array"<<*ap[i];
		cout<<" Through pointer *(p+i) = "<<*(p+i)<<endl;  //*(ap+i)
	}	
}
