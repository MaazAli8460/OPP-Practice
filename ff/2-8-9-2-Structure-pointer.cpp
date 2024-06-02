 /*
Pointers in structure & pointer to structure
Tony: Program 11-10
*/ 
#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

struct test{
	test *ptr;
	int x;
	};		    	
main()
{
  test t1,t2,*tptr;
  tptr=&t1;
  t1.x=5;
  t2.x=23;
  t1.ptr=&t2;
  t2.ptr=&t1;
  
  cout<<tptr->ptr->ptr->ptr->x;
  cout<<t1.x<<"   "<<t2.x;		
}


