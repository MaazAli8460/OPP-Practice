 /*
Function returning Structures;

Tony: Program 11-7
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
circle getinfo();       						    	

main()
{
	circle c=getinfo();
	c.area=pi*pow(c.radius,2);
	cout<<"\nArea of circle  = "<<c.area;
		
}

circle getinfo()
{
	circle temp;
	cout<<"Enter Radius ";
	cin>>temp.radius;
	return temp;
}
