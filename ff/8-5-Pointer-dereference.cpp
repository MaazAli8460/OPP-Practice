//Dereference operator
/*time 39:00
 
*/

#include<iostream>
using namespace std;

main()
{	
int a=9;
int b=5;
int *c;		// Pointer of type integer
	
	cout<<"Garbage Address saved in c" <<c<<endl;
	cout<<"point the garbage address  "<<*c<<endl;		//point to garbage value @ garbage address saved
	c=&a;
	cout<<"Address of A saved in c" <<c<<"    address of a using  address operator"<<&a<<endl;
	cout<<"value of A dereferenced by C " <<*c<<"\n\n\n";
	
	c=&b;
	cout<<"Address of b saved in " <<c<<"     "<<&b<<endl;
	cout<<"value of b dereferenced by C " <<*c <<"   without dereference "<<b <<endl;
	
	//*c=&b;   //error because we are dereferencing c which will be a value but we are assigning address to it
	*c=*&b; 
	*c=999;   //*c is point to b & we are changing value using pointer
	cout<<"\n\n\n value of b will be printed "<< *c; 
	
}





