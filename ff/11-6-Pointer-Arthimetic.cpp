// Pointer Arthimetic
/*
time: 29:00
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
	
	for(int i=0;i<5;i++)
	{
		cout<<"  ip "<<ip <<" ip+i " << ip+i<<" *ip+"<<i<<"  "<<*ip+i<< " *(ip+"<<i<<")  " <<*(ip+i)<<endl;		
	}
}
