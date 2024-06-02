 /*
Pointers to Structures;

Tony: Program 11-8
*/ 
#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

struct student {	
	string name;
	int id;
	int credit;
	double gpa;
	}; 
	void getstudent(student*);  	

main()
{
	student s={"Ali",1234,34,3.2};
	student *sptr;
	sptr=&s;
	getstudent(sptr);
	cout<<"Name "<<sptr->name<<endl;
	cout<<"Id "<<sptr->id<<endl;
	cout<<"Credit "<<(*sptr).credit<<endl;
	cout<<"GPA "<<(*sptr).gpa<<endl;
		
}

void getstudent(student *spt)
{
	cout<<"Enter Name ";
	cin>>(*spt).name;
	cout<<"Enter ID ";
	cin>>spt->id;
	cout<<"Enter Credit";
	cin>>spt->credit;
	cout<<"Enter GPA";
	cin>>spt->gpa;
}
