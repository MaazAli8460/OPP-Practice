 /*
Structure: Declaring Structure Variables/Objects

link: https://www.youtube.com/watch?v=6Z-silgul48&list=PPSV

*/
 
#include<iostream>
#include<string.h>
using namespace std;

//Structure template
struct student{				//structure name/tag

char name[20];				//data members of structure
int roll;
//float marks=60.5;			//**Warning : non static data member initializer

};

struct abc{
	int x;
	int y;
	int z;	
};

struct xyz{
	int x;
	float y;
	//char x[10];			//Error Redeclaration int x;	
};

struct emp{
	char *empname;
	int empid;
};
						

main()
{

student s1;  			//data type name of variable... objects	
}
