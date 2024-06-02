#include<iostream>
using namespace std;

main()
{
	int ary[5]={1,2,3,4,5};
	int *ptr;
	ptr=ary;
	for(int i=0;i<5;i++)
	{
		cout<<"ptr "<<i<<"  "<<ptr<<" value "<<*ptr<<endl;
		ptr++;
	}		
}
