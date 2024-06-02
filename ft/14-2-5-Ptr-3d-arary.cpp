/*
3d array using pointers

*/
#include<iostream>
using namespace std;

main()
{
	int ary[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};
	int (*p)[2][2]=ary;
	

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				//cout<<p[i][j][k]<<"\t";
				//cout<<ary[i][j][k]<<"\t";
				//cout<< *(*(*(ary+i)+j)+k)<<"\t";
				cout<< *(*(*(p+i)+j)+k)<<"\t";
			}
			cout<<"\n";
		}	
		cout<<"\n\n\n";
	}	
			
	
	
}
