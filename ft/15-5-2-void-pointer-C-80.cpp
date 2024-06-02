 /*
Void pointer:  is pointer having no specific data associative with it

Adv:by using void pointer we can print any type of data

https://www.youtube.com/watch?v=Sq0xsFBJ_nM&t=11s
*/

#include<iostream>
using namespace std;
main()
{
	int a=5;
	float f=4.5;
	char c='a';
	void *vp;			//void has no associative data type
	float *fp=&f;		//fp is pointer pointing to a float data type...type is associated with the pointer
	//int *ip=&a;		// ip is pointing to integer	
	//char *cp=&c; 
	vp=fp;
	cout<<"float using void  "<<*(float*)vp<<endl;
	vp=&a;
	
//	cout<<"void pointer"<<*vp;		//ERROR cannot dereference a void pointer
	cout<<"void pointer to int "<<*(int*)vp<<endl;          //type casting the void pointer to integer pointer
	vp=&c;
	cout<<"void pointer to char "<<*(char*)vp<<endl; 
	vp=&f;
	cout<<"void pointer to float "<<*(float*)vp;	
}


