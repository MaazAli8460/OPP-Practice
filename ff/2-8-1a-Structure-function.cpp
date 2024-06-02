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
void getitem(item*);     //by reference
void display(item);      //by value 						    	

main()
{
	item i;
	item *iptr=&i;
	getitem(iptr);    //call by reference
	display(i);		//call by value
	display(i);		//callby value		
}
void getitem(item *ip2){
	cout<<"enter part Num ";
	cin>>(*ip2).partnum;
	cout<<"enter description";
	cin>>ip2->descrip;

}
void display(item ifu)
{
	cout<<"\n\n\nPart Num = ";
	cout<<ifu.partnum;
	ifu.partnum=333;
	cout<<"\nPart descrip "<<ifu.descrip;
	cout<<"\nNumber of items in stock"<<ifu.stock;
	cout<<"\nPrice"<<ifu.price;
}
