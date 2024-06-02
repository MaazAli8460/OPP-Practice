 /*
Structure pointer in structure
*/ 
#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

struct test{
	test *ptest;
	int x;
	};						    	

main()
{
	test t;
	t.x=5;
	cout<<"t.x = "<<t.x<<endl;
	t.ptest=&t;
	cout<<"&t  "<<&t<<"  ";//
	cout<<" t.ptest->x "<<t.ptest->x<<endl;
//	cout<<"--"<<t.((*ptest).x);
	
	test *t2=&t;		//test pointer
	cout<<(*t2).x<<endl;		//access through pointer
	cout<<t2->x<<endl;			//same as above
	
}


