 /*
Structure
 Program: Student information systems 
time:5:00
*/
 
#include<iostream>
#include<string.h>
using namespace std;

struct student{
	string name;   			//Properties of student 	// or fix size char name[20];
	int rollno;
	float cgpa;
	float marks[4];
	int credit[4];
 	void input(student &);
	void display()
	{
	cout<<"Enter student name"<<name<<endl;
	cout<<"Enter Roll # "<<rollno<<endl;
	cout<<"Enter CGPA"<<cgpa<<endl;
	for(int i=0;i<4;i++)
		cout<<"Enter Marks of subject "<<i<<"  "<<marks[i]<<" Credit hour of the course "<<credit[i];
} 
};


int main()
{
	student s;
	s.input(s);
	s.display();

}

void student::input(student &s1)      //have to define scope
{
	cout<<"Enter student name= ";
	cin>>s1.name;
	cout<<"Enter Roll # ";
	cin>>s1.rollno; 
	cout<<"Enter CGPA";
	cin>>s1.cgpa;
	
	for(int i=0;i<4;i++)
	{
		cout<<"Enter Marks of subject "<<i<<"  ";
		cin>>s1.marks[i];
		cout<<" Credit hour of the course ";
		cin>>s1.credit[i];
		
	}
}


