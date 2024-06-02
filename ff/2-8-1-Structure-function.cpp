 /*
Structure through functions;  Pass by reference
Tony: Program 11-6
*/
 
#include<iostream>
#include<string.h>
using namespace std;

struct item{	
	int partnum;
	string descrip;
	int stock;
	double price;	 
	};	
void getitem(item&);     //by reference
void display(item&);      //by value 						    	

main()
{
	item i;
	getitem(i);    //call by reference
	display(i);		//call by value
	display(i);		//callby value		
}
void getitem(item& ifun){
	cout<<"enter part Num ";
	cin>>ifun.partnum;
	cout<<"\nenter part descrip ";
	cin>>ifun.descrip;
	cout<<"\nenter Number of items in stock";
	cin>>ifun.stock;
	cout<<"\nenter price";
	cin>>ifun.price;
}
void display(item& ifu)
{
	cout<<"\n\n\nPart Num = ";
	cout<<ifu.partnum;
	ifu.partnum=333;
	cout<<"\nPart descrip "<<ifu.descrip;
	cout<<"\nNumber of items in stock"<<ifu.stock;
	cout<<"\nPrice"<<ifu.price;
}
