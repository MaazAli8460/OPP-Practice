// Pointer Arthimetic
/*

 
time: 03:43
*/

#include<iostream>
using namespace std;
main()
{
	int ary[3]={1,2,3};
	int *pary=ary;
	cout<<"ary 0 index using pointer "<< *pary<<endl;
	cout<<"ary 0 index using pointer use as an array ";
	cout<<pary[0]<<endl;//slides 17, Lecture 1 OOP 	
	pary++;
	cout<<"ary 1 index using pointer  ";
	cout<<*pary<<endl;//as it of type int so compilier will automatically add 4 to access index 1
}




