 /*
Structure: Accessing & initalizing structure members
link: https://www.youtube.com/watch?v=OxkTCgGIWxk&list=PLdo5W4Nhv31a8UcMN9-35ghv8qyFWD9_S&index=111
*/
//progrm to print hello world? 
#include<iostream>
#include<string.h>
using namespace std;

//Structure template
struct student{			 		//structure name/tag
	//string name ;				//data members of structure
	char name[20];			//s.name="abdullah"   Error
	int roll;
	float marks; 
	}s={"name",1234,25.5};						//s is obj or variable of datatype student;		

main()
{

	//s.name="abdullah";			//Error Incompatible types in assignmnet of const char
	//char arr[]="abdullah";
	//arr="ABC";    //arr is a const pointer
}
