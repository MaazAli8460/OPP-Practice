//Const pointer Array
/*
 Const in pointer and array
 
 when we define an array
 
 
time: 25:25
*/

#include<iostream>
using namespace std;
main()
{
	int b, c;
	cout<<" b "<<&b<<"  c  "<<&c<<endl;
	
	int a[5]={-3,9,4,1,7};			//int *const a  array is always defined as constant pointer
									//whenever array is defined it is defined as constant pointer
									//a always has starting address of memory location
	cout<<"starting address of array a "<<a<<endl;						//starting address of a
	cout<<"checking starting address of array using & operator "<<&a[0]<<endl;
	cout<<"address of array 1 index using & operator "<<&a[1]<<endl;
	cout<<" value of a[0] pointed through address "<< *a<<" address of a[0] "<<a<<endl;
	cout<<" value of a[1] pointed through address "<<*(a+1)<<" address of a[1] "<<a+1<<"\n\n\n";
	
	for(int i=0;i<5;i++ )
		cout<<" array "<<i<<" address "<< a+i<<" value "<<*(a+i)<<endl;	
		
		//*** subscript operator a[i]<=> *(a+i)
}




