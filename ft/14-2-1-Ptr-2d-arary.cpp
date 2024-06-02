#include<iostream>
using namespace std;

main()
{
	int ary[2][3]={{2,5,6},{7,8,12}};
	int (*ptr)[3]=ary;

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;++j)
		{
			cout<<*(*(ptr+i)+j)<<"\t";
		}
		cout<<endl;
	}		
}
