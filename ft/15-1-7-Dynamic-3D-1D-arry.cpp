#include<iostream>
#define Page 2
#define Row 3
#define Col 4
using namespace std;
main()
{
	int *ary,count=1;	
	ary=new int[Page*Row*Col];
	
	for(int i=0;i<Page;i++)
	{
		for(int j=0;j<Row;j++)
		{
			for(int k=0;k<Col;k++)
			{
				*(ary+(i*Row*Col)+j*Col+k)=count++;
			}				
		}
	}
	
	for(int i=0;i<Page;i++)
	{
		for(int j=0;j<Row;j++)
		{
			for(int k=0;k<Col;k++)
			{
				cout<<*(ary+(i*Row*Col)+j*Col+k)<<"\t";
			}
			cout<<endl;				
		}
		cout<<"\n\n\n";
	}	
	delete []ary;
}
