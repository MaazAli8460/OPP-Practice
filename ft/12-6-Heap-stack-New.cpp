// Heap vs Stack
/*
time: 33:30
*/

#include<iostream>
using namespace std;
main()
{
	int *p;				//array of pointers
	
	int pary=new int[3];
	for(int i=0;i<3;i++)
	{
		pary[i]= new int[i+2];			//creates dynamic memory of size 2,3,4 integer
	}
	
	delete []pary;
}
