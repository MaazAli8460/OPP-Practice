 /*
Void pointer:  is pointer having no specific data associative with it

https://www.youtube.com/watch?v=Vd-4eGnBAK8
*/

#include<iostream>
using namespace std;

void arryprint(void* arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<*((int*)(arr)+i)<<endl;
	}
}
main()
{
int ary[]={16,31,32,65};
int x=5;
arryprint(ary,4);
}


