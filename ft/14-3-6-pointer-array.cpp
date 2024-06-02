/*
Array of pointers
 use ***p             INCOMPLETE
*/
#include<iostream>
using namespace std;

main()
{
	int* ary[3];
	int a[3],b[3],c[3];	
	int **p;	
	p=ary;
	
	*(p+0)=a;
	*(p+1)=b;
	*(p+2)=c;
	
	int k=10;
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
		{
			*(*(p+i)+j)=k;
			k+=10;
		}	
	}	
	
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
		{
			cout<<*(*(p+i)+j)<<"\t";			
		}	
		cout<<"\n";
	}	
}

