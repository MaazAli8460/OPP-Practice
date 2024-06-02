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
    test *tptr;
	tptr=&t;	
	tptr->score=99;
	tptr->ptr=&t.score;
	cout<<"&t.score "<<&t.score<<endl;	
	cout<<*((*tptr).ptr)<<endl;
	cout<<*(tptr->ptr)<<endl;		
}


