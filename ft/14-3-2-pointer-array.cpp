/*

Array of pointers

*/

#include<iostream>
using namespace std;

main()
{
	int* ary[3];
	int a[3],b[3],c[3];	
	
	ary[0]=a;
	ary[1]=b;
	ary[2]=c;
	
	int k=10;
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
		{
			(ary[i][j])=k;
			k+=10;
		}	
	}	
	
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
		{
			cout<<ary[i][j]<<"\t";
			
		}	
		cout<<"\n";
	}	
}

