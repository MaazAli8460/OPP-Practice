//Dereference operator
/*
 *
 Segmentation fault: will always come when we try to point to address which we assume exits assumption will leads
 to segmentation fault
time 34:14 
*/

#include<iostream>
using namespace std;
main()
{
	int a=-1;
	int *p;
	p=&a;
		{
			int c=5;
			p = &c;
		}
		{
			int e=7,f=9;
		}
	*p=9999;		//segmentation fault where variable is distroyed
	cout<<*p;						
	
}



