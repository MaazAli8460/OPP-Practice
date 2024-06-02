#include<iostream>
using namespace std;

main()
{
	int ary[5]={1,2,3,4,5};
	int *ptr;
	ptr=ary;
	for(int i=0;i<5;i++)
	{
		cout<<"ptr "<<i<<"  "<<(ptr+i)<<" value "<<*(ptr+i)<<endl;	
		cout<<"Ary "<<i<<"  "<<(ary+i)<<" value "<<*(ary+i)<<"\n\n";
	}  			
}
