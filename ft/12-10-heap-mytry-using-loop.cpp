// Heap vs Stack
/*
populating the dynamic allocations
my try

time: 33:30
*/
#include<iostream>
using namespace std;
main()
{
	int *p[3],num=1;				//array of pointers
	for(int i=0;i<3;i++)
	{
		p[i]= new int[i+2];			//creates dynamic memory of size 2,3,4 integer
	}
	
	for(int j=0;j<3;j++)
	{
		int *q=p[j];
		cout<<q<<endl<<endl;

		for(int i=0;i<j+2;i++)
			{
				*(q+i)= num;
				num++;
				cout<<q+i<<"   "<<*(q+i)<<endl;
			}
		cout<<"\n\n\n";
	}
}
