#include<iostream>
using namespace std;
main()
{
	int *ary1,*ary2;
	
	ary1=new int[4];
	ary2=new int[4];

	
	for(int i=0;i<4;i++)
	{
		*(ary1+i)=i*10;
		*(ary2+i)=i*20;	
	}
	
	for(int i=0;i<4;i++)
	{
		cout<<*(ary1+i)<<"\t"<<*(ary2+i);	
		cout<<"\n";	
	}
	cout<<endl<<*(ary1+2);	
	delete[] ary1;
	delete[] ary2;

	cout<<endl<<*ary1;				//garbage value print //Dangling pointer
	
}
