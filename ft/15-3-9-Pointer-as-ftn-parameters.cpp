 /*
Pointer as function parameter

slides:155
*/

#include<iostream>
using namespace std;

void funct(int *num)
{
	*num=10;
	cout<<"Address of num "<<&num<<endl;
}

main()
{
	int n=5,*p=&n;
	cout<<"n before function call "<<n<<endl;
	funct(p);
	cout<<"Address of P "<<&p<<endl;
	cout<<"n after function call "<<n<<endl;
}

