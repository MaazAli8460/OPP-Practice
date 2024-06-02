// Pointer Arthimetic
/*
time: 32:07
*/

#include<iostream>
using namespace std;
main()
{
	int a[]={3,-9,7,4,2};
	char c[]={'a','e','f','g'};
	double d[]={9,32,45,-6,13};
	char* cp;
	int* ip=&a[0];
	double* dp;
	
	ip+=5;		//ip=ip+5  //no segementation fault//as claimed but not accessed 
	for(int i=1;i<=5;i++)
	{
		cout<<"ip -"<<i<<"  "<<(ip-i)<<" *(ip- "<<i<<" )  "<<*(ip-i)<<endl;//ary in reverse order
	}
}
