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
	
	*p[0]=-1;
	cout<<"address of first heap zero index "<<p[0]<<" value "<< *p[0]<<endl;
	
	*(p[0]+1)=5;
	cout<<"address of first heap zero index "<<(p[0]+1)<<" value "<< *(p[0]+1)<<"\n\n\n";
	
	*p[1]=7;
	cout<<"address of first heap zero index "<<p[1]<<" value "<< *p[1]<<endl;
	
	*(p[1]+1)=4;
	cout<<"address of first heap zero index "<<(p[1]+1)<<" value "<< *(p[1]+1)<<endl;
	
	*(p[1]+2)=2;
	cout<<"address of first heap zero index "<<(p[1]+2)<<" value "<< *(p[1]+2)<<"\n\n\n";
	
	
	*p[2]=-3;
	cout<<"address of first heap zero index "<<p[2]<<" value "<< *p[2]<<endl;
	
	*(p[2]+1)=1;
	cout<<"address of first heap zero index "<<(p[2]+1)<<" value "<< *(p[2]+1)<<endl;
	
	*(p[2]+2)=2;
	cout<<"address of first heap zero index "<<(p[2]+2)<<" value "<< *(p[2]+2)<<"\n";
	
	*(p[2]+3)=4;
	cout<<"address of first heap zero index "<<(p[2]+2)<<" value "<< *(p[2]+2)<<"\n\n\n";
		
}
