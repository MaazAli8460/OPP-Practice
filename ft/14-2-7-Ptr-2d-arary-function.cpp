/*

Passing 2d array through functions using pointer
*/

#include<iostream>
using namespace std;

void ftn(int p[][3],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{		
			cout<< *(*(p+i)+j)<<"\t";
		}	
		cout<<"\n";
	}				
}
main()
{
	int ary[2][3]={{1,2,6},{3,4}};
	int (*p)[3]=ary;
  	ftn(p,2,3);			//ftn(ary,2,3);
}
