 /*
Pointer as function parameter

slides:155
*/

#include<iostream>
using namespace std;

void funct(int *num)
{
	*num=10;
}

main()
{
	int n=5;
	cout<<" n before function call "<<n<<endl;
	funct(&n);
	cout<<" n after function call "<<n<<endl;
}

