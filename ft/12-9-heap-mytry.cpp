// Heap vs Stack
/*
populating the dynamic allocations
time: 33:30

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
	
	ip=p[0];				//point storing address of heap
	*ip=-1;					//at heap 0 storing -1
	cout<<"Address "<< ip<<"  value "<<*ip<<endl;
	ip=ip++;				//access next address of heap 0 
	*ip=5;					//point address heap0 index 1 storing 5
	
	cout<<"Address "<< ip<<"  value "<<*(ip)<<"\n\n\n\n";

	ip=p[1];
	*ip=7;
	cout<<"Address "<< ip<<"  value "<<*ip<<endl;
	ip=ip++;
	*ip=4;
	cout<<"Address "<< ip<<"  value "<<*(ip)<<endl;
	ip=ip++;
	*ip=2;
	cout<<"Address "<< ip<<"  value "<<*(ip)<<"\n\n\n";	
	
	ip=p[1];
	*ip=-3;
	cout<<"Address "<< ip<<"  value "<<*ip<<endl;
	ip=ip++;
	*ip=1;
	cout<<"Address "<< ip<<"  value "<<*(ip)<<endl;
	ip=ip++;
	*ip=2;
	cout<<"Address "<< ip<<"  value "<<*(ip)<<endl;	
	ip=ip++;
	*ip=4;
	cout<<"Address "<< ip<<"  value "<<*(ip)<<endl;	
	
		
}
