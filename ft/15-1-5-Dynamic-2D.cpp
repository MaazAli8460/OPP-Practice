#include<iostream>
using namespace std;
main()
{
	int **ary;
	
	ary=new int*[2];
	
	for(int i=0;i<2;i++)
		ary[i]=new int[4];
	
	
	for(int i=0;i<2;i++)
	{
	 	for(int j=0;j<4;j++)
		{
			ary[i][j]=(i+1)*((j+1)*10); 
			//*(*(ary+i)+j)=(i+1)*((j+1)*10);   
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			//cout<<*(*(ary+i)+j)<<"\t";
			cout<<ary[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	for(int i=0;i<2;i++)
	{
		delete[] ary[i];
	}	
	delete[] ary;

	//cout<<endl<<*ary1;				//garbage value print //Dangling pointer
	
}
