#include<iostream>
using namespace std;

main()
{
	int* p1,*p2,*p3;
	
	p1=new int;	
	p2=new int[3];
 	
	cout<<"p1 "<<p1<<" p2  "<<p2<<" p2+1 "<<p2+1<<" p2+2  "<<p2+2<<endl;
	*p1=5;
	*p2=6;
	*(p2+1)=7;
	*(p2+2)=8;
	cout<<"*p1 "<<*p1<<" *p2  "<<*p2<<" *(p2+1)  "<<*(p2+1)<<" *(p2+2)  "<<*(p2+2)<<endl;
	
}
