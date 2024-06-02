// Heap vs Stack
/*
New can be used in two ways( New is dynamic memory allocation DMA)

1.

2.

Always delete memory once created but if not deleted it is major reason for memory leak 
  
time: 26:35

*/

#include<iostream>
using namespace std;
main()
{
	char* cp=new char;        //creating dynamic memory for single character single byte will be reserved 
	int* ip= new int[5];	 //new creates 5 elements on stack  --twenty byte will be reserved
	float* fp=new float[2]; 	// 8 byte will be reserved
	
	*cp='a';
	*ip=1;
	*(ip+1)=2;				// second index  or *ip[1]=2
	*(ip+2)=3;				// second index  or *ip[2]=3
	*(ip+3)=4;				// second index  or *ip[3]=4
	*(ip+4)=5;				// second index  or *ip[4]=5
	
	cout<<ip<<"   "<<*ip;
	
	delete cp;
	delete []ip; 			// new has square than delete will use square bracket as well
	delete []fp;
	
	//delete []ip;  //*****again delete will be a segmentation block****	
}
