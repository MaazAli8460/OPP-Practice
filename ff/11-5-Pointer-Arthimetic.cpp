// Pointer Arthimetic
/*
time: 22:36
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
	
	ip=&a[0];			//save address of first index to ip
	cp=&c[0];
	dp=&d[3];
	cout<<"\naddress of first index saved in ip  "<<ip;
	cout<<"\nvalue pointed by ip  "<<*ip;			//3
	cout<<"\naddress of index 1 ip+1 "<<ip+1;
	cout<<"\nvalue of index 1 ip+1 "<<*(ip+1);		//-9
	cout<<"\nvalue at first index value+1  "<<*ip+1;		//uniary operator has more priority
}




