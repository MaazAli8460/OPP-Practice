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
   int **p =new int*[3];
   for(int i=0;i<3;i++)
    {
    	p[i]=new int[2];
	}
	int k=10;
	for(int i=0;i<3;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    		*(*(p+i)+j)=k;
			//p[i][j]=k;					
    		k++;
		}	
	}	
	for(int i=0;i<3;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    		cout<<p[i][j]<<"\t";    	
		}
		cout<<"\n";
	}	
	delete []p;	
}
