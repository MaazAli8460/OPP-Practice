// Pointer Arthimetic
/*
time: 35:33
*/

#include<iostream>
using namespace std;
main()
{
	int a[]={3,-9,7,4,2};
	char c[]={'a','e','f','g'};
	double d[]={9,32,45,-6,13};
	char* cp=&c[0];
	int* ip=&a[0];
	double* dp=&d[4];
	
	
	for(int i=0;i<=4;i++)
	{
		cout<<dp<<"   "<<*dp<<endl;
		dp--;  
	}
	cout<<"\n\n\n";
	dp++;
	for(int i=0;i<=4;i++)
	{
		cout<<dp<<"   "<<*dp<<endl;
		dp++;  
	}
		 
}
