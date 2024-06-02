 /*
Union in C;
link: https://www.youtube.com/watch?v=7lsqAXmBTGE&list=PLdo5W4Nhv31a8UcMN9-35ghv8qyFWD9_S&index=114
*/
 
#include<iostream>
#include<string.h>
using namespace std;


union student{			 		
	int a;	
	char b;
	float f; 
	};
	
struct str{			 		
	int a;	
	char b;	
	float f; 
	};							    	

main()
{
	student s;	//union will create a single memory block
	
	
		
}
