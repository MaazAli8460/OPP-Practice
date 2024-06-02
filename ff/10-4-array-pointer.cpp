//Pointer Array Heap
/*
Array pointers
*/

#include<iostream>
using namespace std;
main()
{
	int a[]={1,4,8,12,16}, *ip=&a[0]; 
	char c[]={'a','d','h','l','p'}, *cp=&c[0];
	double d[]={1,8,16,24,32},*dp=&d[0];	
	
   for(int i=0;i<4;i++) 
   {
   	cout<<i<<". address of integer ary  "<<&a[i]<< "  value at address through ptr  "<< *ip <<endl;
   	cout<<"\n *ip+1  " <<*ip+1 <<"  *(ip+1)  " <<*(ip+1)<<endl; 
	ip++;
      	
   	cout<<i<<".  address of character ary  "<<(void *)&c[i]<< "  value at address through ptr  "<< *cp <<endl;
   	cout<<"\n *cp+1  " <<*cp+1 <<"  *(cp+1)  " <<*(cp+1)<<endl; 
	cp++;
   	
   	
   	cout<<i<<".  address of double ary  "<<&d[i]<< "  value at address through ptr  "<< *dp <<endl;
   	cout<<"\n *dp+1  " <<*dp+1 <<"  *(dp+1)  " <<*(dp+1)<<endl; 
	dp++;
   	
   	cout<<"\n\n\n";
   }	
}




