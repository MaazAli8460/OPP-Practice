// Heap vs Stack
/*
populating the dynamic allocations
time: 38:30

my try
*/
#include<iostream>
using namespace std;
main()
{
	int *p[3],num=0,*ip;				//array of pointers
	for(int i=0;i<3;i++)
	{
		p[i]= new int[i+2];			//creates dynamic memory of size 2,3,4 integer
	}
	
	//as *(x+2) =x[2]
	//*(p[0][0])=-1;				//*p[0]=-1;
	cout<<"address of first heap zero index "<<p[0]<<" value "<< *p[0]<<endl;
	cout<<"address of first heap zero index "<<p[0]<<" value "<< *p[0]<<endl;
	
	*(*(p[0][1]))=5;					//*(p[0]+1)=5;
	cout<<"address of first heap zero index "<<(p[0]+1)<<" value "<< *(p[0]+1)<<"\n";
	cout<<"address of first heap zero index "<<p[0][1]<<" value "<< *p[0][1]<<endl;
	
	
		
}
