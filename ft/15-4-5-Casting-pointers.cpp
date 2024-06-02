#include<iostream>
void fun(int);
using namespace std;
main()
{
 int *ip;
 
 short x[2]={1,2};
 short *sp;
 sp=x;
 
 ip=(int*)sp;
 
 cout<<*ip;     //00 02 00 01  IN HEX  //DEC 131073  //FOLLOWING LITTLE ENDIAN
	
}

