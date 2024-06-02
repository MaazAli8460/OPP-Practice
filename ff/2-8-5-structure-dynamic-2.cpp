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
	cptr=new circle[2];
	cout<<"cptr Circle 1 addres dynamic "<<cptr<<endl;
	getinfo(cptr);
	cptr->area=pi*pow(cptr->radius,2);
	cout<<"\nArea of circle 1 = "<<cptr->area<<"\n\n\n";
	
	
/*
	getinfo(cptr+1);
	(cptr+1)->area=pi*pow((cptr+1)->radius,2);
	cout<<"\nArea of circle 1 = "<<(cptr+1)->area<<endl;
*/
	cptr++;
	cout<<"cptr++ "<<cptr<<endl;
	getinfo(cptr);
	cptr->area=pi*pow(cptr->radius,2);
	cout<<"\nArea of circle 1 = "<<cptr->area<<endl;
	
	delete []cptr;
	cptr=NULL;		
}

void getinfo(circle *tempc)
{
	cout<<"Enter Radius ";
	cin>>tempc->radius;
}
