 /*
Structure
link: https://www.youtube.com/watch?v=6Z-silgul48&list=PPSV
*/
 
#include<iostream>
#include<string.h>
using namespace std;

//Structure template
struct student{				//structure name/tag
	char name[20];				//data members of structure
	int roll;
	float marks; 
	}s;						//s is obj or variable of datatype student;		

main()
{
	cout<<sizeof(s);
		
}
