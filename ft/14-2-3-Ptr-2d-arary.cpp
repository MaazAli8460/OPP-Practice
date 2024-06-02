#include<iostream>
using namespace std;

main()
{
	int *p[2];
	int R1[3]={1,2,3},R2[3]={4,5,6};
	
	p[0]=R1;
	p[1]=R2;
	
	cout<<R1<<"   "<<R2<<endl;
	for(int i=0;i<2;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<*(*(p+i)+j);
				cout<<"\t";
			}
			cout<<endl;
		}
}
