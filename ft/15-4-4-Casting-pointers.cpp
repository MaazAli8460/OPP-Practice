#include<iostream>
void fun(int);
using namespace std;
main()
{
 int *ip=new int;
 char *cp;
 
 *ip=65;
 
 //	cp=ip;			//Error*** cannot convert int o char
 
 cp=(char*)ip;
 cout<<cp;
 
	
}

