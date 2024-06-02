#include<iostream>
using namespace std;
main()
{
	int *ary1,*ary2,**ary3;
	
	ary1=new int[4];
	ary2=new int[4];
	ary3=new int*[2];
	
	ary3[0]=ary1;
	ary3[1]=ary2;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			ary3[i][j]=(i+1)*((j+1)*10);
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<ary3[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	delete[] ary1;
	delete[] ary2;
	delete[] *ary3;

	//cout<<endl<<*ary1;				//garbage value print //Dangling pointer
	
}
