 /*
Pointers in structure & pointer to structure
Tony: Program 11-10
*/ 
#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

struct test{
	test *tptr;
	int score;
	};	
struct t4
{
	int x;
};
main()
{
	test *newptr,t1,t2;
	newptr=&t1;
	newptr->score=99;
	newptr->tptr=&t2;
	newptr->tptr->score=56;
	newptr->tptr->tptr=newptr;	
}


