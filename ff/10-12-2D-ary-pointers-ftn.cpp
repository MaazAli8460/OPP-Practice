#include<iostream>
using namespace std;
void print(int a[][3][2],int pag,int row, int col)
{
	for(int i=0;i<pag;i++)
	{
		cout<<"page "<<i<<endl;
		for(int j=0;j<row;j++)
		{
		 for(int k=0;k<col;k++)
			{
				//cout<<*(*(*(a+i)+j)+k)<<"\t";
				cout<<a[i][j][k]<<"\t";
			}		
		cout<<"\n";	
		}
		cout<<"\n\n\n";
	}
}
main()
{
	int ary[2][3][2]={{{1,2},{3,4},{5,6}},{{7,8},{9,10},{11,12}}};
	print(ary,2,3,2);
		
}
