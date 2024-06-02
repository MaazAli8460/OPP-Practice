#include<iostream>
#define Row 3
#define Col 5
using namespace std;
main()
{
	int **ary;
	ary=new int*[Row];
	
	for(int i=0;i<Row;i++)
	{
			ary[i]=new int[Col];
	}
		
	for(int i=0;i<Row;i++)
	{	
	 	for(int j=0;j<Col;j++)
		{
			ary[i][j]=(i+1)*((j+1)*10); 
			//*(*(ary+i)+j)=(i+1)*((j+1)*10);   
		}
	}
	
	for(int i=0;i<Row;i++)
	{
		for(int j=0;j<Col;j++)
		{
			//cout<<*(*(ary+i)+j)<<"\t";
			cout<<ary[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	for(int i=0;i<2;i++)
		{
		delete[] ary[i];
		ary[i]=NULL;
		}	
	delete[] ary;
	ary=NULL;

	//cout<<endl<<*ary1;				//garbage value print //Dangling pointer
	
}
