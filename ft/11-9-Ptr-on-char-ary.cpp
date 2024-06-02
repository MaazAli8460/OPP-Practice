// Pointer Arthimetic
/*
time: 50:45

*/

#include<iostream>
using namespace std;
main()
{
	char c2[2];
	char c[]={'a','b','c','d','1','1','2','3','4','5','6','7','8','9'};
	char *cp=&c[9];
	char *cpp=&c[0];
	
	int length_ary=cp-cpp;   // give us length of array but will not work if array
							//is longer than 10 elements as numbers are in hex thn
	cout<<length_ary;
	cin>>c2;
	cout<<endl<<c2;
	
}
