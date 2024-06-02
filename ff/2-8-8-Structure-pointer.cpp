 /*
Pointers in structure & pointer to structure
Tony: Program 11-10
*/ 
#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

struct test{
	int *ptr;
	int score;
	};						    	

main()
{
    test t;
    t.score=5;
    cout<<"&(t.score)"<<&(t.score)<<endl;
    t.ptr=&(t.score);
    cout<<" t.ptr  "<<t.ptr<<endl;
    cout<<" *t.ptr  "<<*t.ptr<<endl;
	
}


