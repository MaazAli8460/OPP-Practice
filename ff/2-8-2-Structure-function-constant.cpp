 /*
Const Structure through functions ;

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

void getitem(item&);
void display(item);        						    	

main()
{
	item i;
	getitem(i);
	display(i);	
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
void display(const item ifu)
{
	//ifu.partnum=35;				//Error item.partnum is read only
	cout<<"\n\n\nPart Num = ";
	cout<<ifu.partnum;
	cout<<"\nPart descrip "<<ifu.descrip;
	cout<<"\nNumber of items in stock"<<ifu.stock;
	cout<<"\nPrice"<<ifu.price;
}
