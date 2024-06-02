 /*
Pointers in structure & pointer to structure
Tony: Program 11-10
*/ 
#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

struct Rectangle {
    int *width;
    int height;
};

main()
{	int w = 3;
	Rectangle rect1 = {&w,5};
	*rect1.width = 2; //dot has higher precedence
	rect1.height=4;
	cout<<w;

}


