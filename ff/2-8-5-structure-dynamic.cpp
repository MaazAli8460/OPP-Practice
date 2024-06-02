 /*
Function returning Structures;
Tony: Program 11-8a
*/ 
#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

struct circle{	
	int radius;
	float area;
	};
		
const float pi=3.14;
void getinfo(circle*);       						    	

main()
{
	circle *cptr;
	cptr=new circle;				//dynamically created
	getinfo(cptr);
	cptr->area=pi*pow(cptr->radius,2);
	cout<<"\nArea of circle  = "<<cptr->area;
	delete cptr;
	cptr=NULL;		
}

void getinfo(circle *tempc)
{
	cout<<"Enter Radius ";
	cin>>tempc->radius;
}
