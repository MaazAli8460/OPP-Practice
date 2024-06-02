 /*
Pointers in structure & pointer to structure
Tony: Program 11-10
*/ 
#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

struct StudentRecord{
   string name;          // student name
   int marks[5];         // test grades
   double ave;           // final average

   void print_ave( ) {
      cout << "Name: " << name << endl;
      cout << "Average: " << ave << endl;
    }
};

main()
{	StudentRecord s;
	s.name="Ali";
	s.marks[0]=3;
	s.print_ave();
}


