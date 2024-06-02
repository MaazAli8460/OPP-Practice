 /*
C string
 
 
 Slides:130-132
*/
#include<iostream>
#include<string.h>
using namespace std;

main()
{

	char arr[] = "****";
	int i = 1;
	for (; i < 3; i++) {
		cout << (arr+i) << endl;
	}
	for (; i >= 1; i--) {
		cout << (arr + i) << endl;
	}
}


