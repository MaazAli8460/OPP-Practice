// Heap vs Stack
/*
time: 28:35

*/

#include<iostream>
using namespace std;
main()
{
	int* p;
	int x;
	{	
		int* t=new int[1];
		cout<<"t "<<t<<endl;		
	}
	//cout<<t;				// t is not declared in scope
}
