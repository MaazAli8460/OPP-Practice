// Pointer Arthimetic
/*

time: 22:00
*/

#include<iostream>
using namespace std;
main()
{
	int a[]={3,-9,7,4,2};
	char c[]={'a','e','f','g'};
	double d[]={9,32,45,-6,13};
	char* cp;
	int* ip;
	double* dp;
	
	ip=&a[0];			// ip=a  ip=&a//save address of first index to ip
	cp=&c[0];
	dp=&d[3];
	
	cout<<"  ip "<<ip<<"  cp "<<(void*)&cp<<"  dp "<<dp<<endl ;
	cout<<"  ip \t"<<*ip<<"\t  cp \t"<<*cp<<"   dp \t"<<*dp;
	for(int i=0;i<4;i++)
	{
		
	}
}




