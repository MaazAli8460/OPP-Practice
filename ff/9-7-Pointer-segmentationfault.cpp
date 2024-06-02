//Dereference operator
/*
 *
  pointer if not used properly it created segmentation fault
time 34:14 
*/

#include<iostream>
using namespace std;
main()
{
	int a=-1;
	int *p=&a;
		{	
			int *p;
			int d=7;
			    p = &d;
			    cout<<"Access through local pointer  "<<*p<<endl;
		}
		
	*p=9999;	//main poiinter
	cout<<*p<<"   "<<a;						
	
}



