//Slides(92-93) example  
#include<iostream>
void fun(int);
using namespace std;
main()
{
 int *pi=new int;
 *pi=131072;   //00000000 00000010 00000000 00000000 
 
 short int *sp; 
 sp=(short*)pi; 
 cout<<*sp<<endl;		//printing lower half
 sp++;
 cout<<*sp;     //print upper half	
}

