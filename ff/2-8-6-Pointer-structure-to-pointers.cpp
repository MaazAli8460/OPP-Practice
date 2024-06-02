 /*
Pointers in structure & pointer to structure
Tony: Program 11-10
*/ 
#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

struct grade{
	string name;
	int *testscore;
	int score;
	};						    	

main()
{
	grade g, *stptr=&g;
	g.testscore=&g.score;
	g.score=25;
	cout<<"Grade Score g.score   "	<<g.score<<endl;
	cout<<"Grade Score g.testscore  "	<<g.testscore<<"   &g.score "<<&g.score<<endl;
	cout<<"Grade Score *g.testscore  "	<<*g.testscore<<"  "<<endl;
	cout<<stptr->testscore<<endl;
	cout<<(*stptr).testscore<<endl;
	cout<<*stptr->testscore<<endl;
	cout<<*(*stptr).testscore<<endl;
	
}


