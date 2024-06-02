 /*
Void pointer:  

Slides
*/

#include<iostream>
using namespace std;
main()
{
	int ivar=5;
	float fvar=4.3;
	char cvar='Z';
	int* p1;
	void* vp2;
	p1 = &ivar; // Allowed  
	//p1 = &fvar; // Not Allowed         ERROR convert float to int
	//P1 = &cVar; // Not Allowed		 ERROR
	vp2 = &fvar; // Allowed
	cout<<"Float printed using void ptr "<<*(float*)vp2<<endl;	
	vp2 = &cvar; // Allowed
	vp2 = &ivar; // Allowed	
}


