// Pointer Arthimetic
/*
 Segmentation fault always come when we try to access a location which are not part of your program
 Pointers are used to store the addresses
 
 Two operators we can use with pointer

1. + constant can be added using plus adding pointer does not results into any thing 
2. - we can take difference of pointer subtracting point helps to find values


**** If Pointer use address which are of same type why we need data type with the pointers****

POINTER type is required so we know how much jump we have to do in order to access next value
see 11-2

 
32 bit operating system --Pointer is of 32 bit
64 bit operating system--point is of 64 bit

we can change pointer type by force
 
time: 03:43
*/

#include<iostream>
using namespace std;
main()
{
	double d;		//8 byte
	double *dp;
	int i;			//4 bypte
	int *ip;
	char c;			//1 byte
	char *cp;
	short s;		//2byte 
	short* sp;			
						
	
	int ary[3]={1,2,3};
	int *pary=ary;
	cout<<"ary 0 index using pointer "<< *pary<<" Array address through first ";
	cout<<ary<<" pary pointer "<<pary<<endl;
	//ary++;	//ERROR as ary is a  const address
	pary++;      //as it of type int so compilier will automatically add 4 to access index 1
	cout<<"ary 1 index using pointer "<< *pary<<endl;
}




