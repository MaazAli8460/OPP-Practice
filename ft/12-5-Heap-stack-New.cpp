// Heap vs Stack
/*
time: 30:16

// dynamic memory allocation & deallocation

keep track of memory
*/

#include<iostream>
using namespace std;
main()
{
	int* p;
	int x;
	{	
		int* t=new int[2];				// t has local scope
		cout<<"t "<<t<<endl;			//  
		t[0] =35;
		*(t+1)=25;
		for(int i=0;i<2;i++)
			cout<<"t at "<<i<<"  "<<*(t+i)<<endl;  
		p=t;						       	//by creating copy of t as has local scope where has p has main scope
		cout<<"First scope "<<p<<endl;
		
	}  		
	
	int* t =new int[7];                //creates a new block for t
	cout<<" After t scope "<<*p<<endl; 						
	delete []p;
	p=NULL;
	cout<<" \nNull pointer P  "<<p;
	delete[]t;
	
}
