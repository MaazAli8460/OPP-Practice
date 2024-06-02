#include<iostream>
using namespace std;
main()
{
	int* p1,**p2;
	
	p1=new int;	
	p2=new int*;
	
	p2=&p1;
	*p1=25;
	cout<<"value at p1 = "<<*p1<<endl;
	cout<<"value at p1 using **p2 = "<<**p2;	
		
}

