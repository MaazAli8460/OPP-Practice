#include<iostream>
#define Page 2
#define Row 3
#define Col 4
using namespace std;
main()
{
	int ***ary;
	
	ary=new int**[Page];
	
	ary[0]=new int*[Row];
	ary[1]=new int*[Row];
	
	ary[0][0]=new int[Col];
	ary[0][1]=new int[Col];
	ary[0][2]=new int[Col];

	
	ary[1][0]=new int[Col];
	ary[1][1]=new int[Col];
	ary[1][2]=new int[Col];
			
	int count=0;
	for(int i=0;i<Page;i++)
	{
	 	for(int j=0;j<Row;j++)
	 	{
	 		for(int k=0;k<Col;k++)
	 		{
	 			ary[i][j][k]=count++; 
			}			
		}
	}
	
	for(int i=0;i<Page;i++)
	{
	 	for(int j=0;j<Row;j++)
	 	{
	 		for(int k=0;k<Col;k++)
	 		{
	 			cout<<ary[i][j][k]<<"\t"; 
			}			
			cout<<"\n";		
		}
		cout<<"\n\n";
	}
	
	delete []ary[0][0];
	delete []ary[0][1];
	delete []ary[0][2];

	
	delete []ary[1][0];
	delete []ary[1][1];
	delete []ary[1][2];
	
	//cout<<*ary[1][2];
	
	delete []ary[0];
	delete []ary[1];
	
	delete []ary;
		
}
