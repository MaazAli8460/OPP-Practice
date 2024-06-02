 /*
Void pointer:  is pointer having no specific data associative with it

https://www.youtube.com/watch?v=Vd-4eGnBAK8
*/

#include<iostream>
using namespace std;

void sayhello();
main()
{
//int result=sayhello();		//void means function is not returning any thing
int x=5;
int *ip;
void *p;					//its pointer pointing to void mean does not know the type
cout<<" Size of "<<sizeof(ip);
	
}

void sayhello()
{
	cout<<"Hello"<<endl; 
}
