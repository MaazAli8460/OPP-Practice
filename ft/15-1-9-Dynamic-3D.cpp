#include<iostream>
#define Page 2
#define Row 3
#define Col 4
using namespace std;
main()
{
	int ***ary;
	
	ary=new int**[Page];
	
	for(int i=0;i<Page;i++)
		{
			ary[i]=new int*[Row];
		}
	for(int i=0;i<Page;i++)
		{
			for(int j=0;j<Row;j++)
			{
				ary[i][j]=new int[Col];
			}			
		}

	for(int i=0;i<Page;i++)
	{
	 	for(int j=0;j<Row;j++)
	 	{
	 		for(int k=0;k<Col;k++)
	 		{
	 			ary[i][j][k]=(i+1)*((j+1)*(k+1)); 
			}			
			//*(*(ary+i)+j)=(i+1)*((j+1)*10);  
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
			//*(*(ary+i)+j)=(i+1)*((j+1)*10);  
		}
		cout<<"\n\n";
	}
	
	
	 cout<<"before deletion *ary[1][2][3] "<<ary[1][2][3]<<endl;
	for(int i=0;i<Page;i++)
		{
			for(int j=0;j<Row;j++)
			{
				delete [] ary[i][j];
			}			
		}
	
		for(int i=0;i<Page;i++)
		{
			delete [] ary[i];
			//ary[i]=NULL;
		}
		
	 delete []ary;
	 //ary=NULL;
	 
	 cout<<"after deletion ary[1][2][3] "<<ary[1][2][3];
}
