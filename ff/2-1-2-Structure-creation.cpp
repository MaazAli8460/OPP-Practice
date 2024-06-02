 /*
Structure
 
All programs before that we create data and functions to manipulate data(process data).. But this approach has 
Program: Student information systems 
time:30:00
*/
 
#include<iostream>
#include<string.h>
using namespace std;
int main()
{

struct student{
	string name;   // or fix size char name[20];
	int rollno;
	float cgpa;
	float marks[40];
	int credit[40];
	void sin(student&);
};	

student s1,s2;  //for 2 students
student s[40];		//for 40 students

s1.name="Name1";
s2.name="Name2";

s[0].name="Name3";

cout<<s1.name<<endl;

cout<<s2.name<<endl;
cout<<s[0].name<<endl;
cout<<"  expecting name"<<s[2].name<<endl;    //**printing nothing
cout<<"  expecting roll from garbage "<<s[2].rollno<<endl;    //**printing nothing

//*** cout<<s1;			//ERROR as cout/Cin works for build in data types

}


