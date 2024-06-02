 /*
Void pointer:  

Slides
*/

#include<iostream>
using namespace std;
main()
{
	void *vp;
	int *ip;
	int a=5;
	
	vp=&a;
	cout<<"using void pointer"<<*(int*)vp<<endl;
	//ip=vp;    //****Error  Invalid conversion from void to int	
	ip=(int*)vp;
	cout<<"using int pointer"<<*ip;
}


