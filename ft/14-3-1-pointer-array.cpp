/*

Array of pointers

*/

#include<iostream>
using namespace std;

main()
{
	int* ary[3];
	int a=1,b=2,c=3;	

	ary[0]=&a;
	ary[1]=&b;
	ary[2]=&c;
	
	
	for(int i=0;i<3;i++)
	{	
		cout<<"Address at ary "<<i<<"  "<<ary[i]<<" Value "<<*ary[i]<<endl;  //*ary[i]
	}	
}

