 /*
Type def C, Padding;

link: https://www.youtube.com/watch?v=ojhbmh5SJsw&list=PLdo5W4Nhv31a8UcMN9-35ghv8qyFWD9_S&index=115
*/
 
#include<iostream>
#include<string.h>
#pragma pack(1)      		//pragma turn on packages now it will pack the memory no padding will be applied
using namespace std;

struct student{	
	char b;			 		
	int a;
	float f; 
	};							    	

main()
{
	student s;	
	
	cout<<sizeof(s);		//o/p  12  because of padding as char take 4 bytes instead of 1 byte
	
		
}
