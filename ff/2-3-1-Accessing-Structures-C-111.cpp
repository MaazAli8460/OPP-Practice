 /*
Structure: Accessing & initalizing structure members
link: https://www.youtube.com/watch?v=OxkTCgGIWxk&list=PLdo5W4Nhv31a8UcMN9-35ghv8qyFWD9_S&index=111
*/
 
#include<iostream>
#include<string.h>
using namespace std;

//Structure template
struct student{			 		//structure name/tag
	string name ;				//data members of structure
	int roll;
	float marks; 
	};						//s is obj or variable of datatype student;		

main()
{
	student s1,s2={"Umar Farooq",1235,27.9};    //compile time is initialization
	student s3={"s"};							//roll number and marks will be initialized by zero  
		
	s1.name="Abdullah Khan";	
	s1.roll=1234;
	s1.marks=25.5;
	
	cout<<"S1 structure Name "<<s1.name<<endl;
	cout<<"S1 structure Roll "<<s1.roll<<endl;
	cout<<"S1 structure Marks "<<s1.marks<<"\n\n\n";
	
	cout<<"S2 structure Name "<<s2.name<<endl;
	cout<<"S2 structure Roll "<<s2.roll<<endl;
	cout<<"S2 structure Marks "<<s2.marks<<"\n\n\n";
	
	cout<<"Enter Name ";			//**Runtime initialization
	cin>>s3.name;
	cout<<"Enter Roll ";
	cin>>s3.roll;
	cout<<"Enter Marks ";
	cin>>s3.marks;
	
	cout<<"\n\n\nS3 structure Name "<<s3.name<<endl;
	cout<<"S3 structure Roll "<<s3.roll<<endl;
	cout<<"S3 structure Marks "<<s3.marks<<endl;		
}
