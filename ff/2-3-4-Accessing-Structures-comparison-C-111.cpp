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

	s2=s1;							//intializing structure with another structure
	cout<<"S2 structure Name "<<s2.name<<endl;
	cout<<"S2 structure Roll "<<s2.roll<<endl;
	cout<<"S2 structure Marks "<<s2.marks<<"\n\n\n";
	
	//if(s1>s2)  (s1==s2)   //cannot compare structures
	if(s1.name==s2.name)
	{
		cout<<" S1 and S2 Same name students ";
	}
	
	


		
}
