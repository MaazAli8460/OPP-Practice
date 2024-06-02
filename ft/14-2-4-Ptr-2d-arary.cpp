#include<iostream>
using namespace std;

main()
{
	int ary[2][2]={{1,2},{3,4}};
	int (*p)[2]=ary;
	

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			//cout<<p[i][j]<<"\t";
			//cout<<ary[i][j]<<"\t";
			//cout<< *(*(ary+i)+j)<<"\t";
			cout<< *(*(p+i)+j)<<"\t";
		}	
		cout<<"\n";
	}	
			
	
	
}
