//Const pointer Array
/*
 Const in pointer and array
 
 when we define an array
 
 
time: 31:40  
*/

#include<iostream>
using namespace std;
main()
{
	int a[5]={-3,9,4,1,7};    //a is constant pointer
	int* p=a;					// copying a pointer to a pointer
	
	/* similar thing doing with a array above as a is a point to array first location
	 	int z=9;
	 	int* x=&z;
	 	int*y=x;
	 	cout<<" y "<< y<<"  x  "<<x<<endl;
	*/ 
	
	for(int i=0;i<5;i++)
	{
		cout<<" array access  through pointer "<< *p<<endl;
		p++;
    }	
     cout<<"\n\n\n";
     
    	for(int i=0;i<5;i++)
	{
		cout<<" array access  through pointer "<< *(a+i)<<endl;
		//a++;			//***error as a is a constant so address cannot be changed
						//reason behind not to change the value of a as if we keep on incrementing it 
						//by using a++ lose the track of starting array subscript 
    }	 
	

}




