 /*
Structure

link: https://www.youtube.com/watch?v=LpHnHRI6gLc&list=PPSV

variables are used to store the value... for more thn one value we use array
if we want to store id of all the students we use arry

what if we want to store information of students.. 

Name is string
roll# int
marks float

what if have 2 students

string [2]  for 2 student name  S[0] for student 1 and s[1] for student 2 similarly need 
seperate data types for each student detail
if we need to store details for full class

need array  string name[50]
			int roll[50]
			float marks[50]
			
we can combine all them under a single name using structure 

 Data types 
1. premitive data type:  int float char 
2. derived data type: array are .
3. user define data type: structure is 

structure: is collection of different data types grouped under a single data type
*/
 
#include<iostream>
#include<string.h>
using namespace std;

//Structure template
struct student{				//structure name/tag

char name[20];				//data members of structure
int roll;
float marks;
//float roll;			//ERROR Redeclaration of Roll 
};						//structure total size 28 byte

main()
{
	
}
