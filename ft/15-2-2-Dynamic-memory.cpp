#include<iostream>
using namespace std;
void fun(int**arr){
	
}
main()
{
	int *p1,**p2,*p3,**p4;
	p1=new int;
	p2=new int *;
	p3=new int[2];
	p4=new int*[2];
	
	cout<<p3<<"  "<<(p3+1)<<endl;
	//cout<<*p4<<"  "<<*(p4+1)<<endl;
	*p1=5;
	*p2=p1;
	*p3=6;
	*(p3+1)=7;
	*p4=p3;
	*(p4+1)=++p3;

	cout<<" *p1 "<<*p1<<" *p3 "<<*p3<<" *(p3+1) "<<	*(p3+1)<<endl;	
	//cout<<" **p2 "<<**p2<<" **p4 "<<**p4<<" **(p4+1) "<<**(p4+1);
	
	delete[] p1;
	delete[] *p2;
	delete[] p3;
    delete[]*p4;
    
    int arr[4],arr2[4];
    int* s[2]={arr,arr2};
    fun(s);
}
