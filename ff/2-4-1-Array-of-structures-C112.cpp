 /*
Structure: Array of structure
link: https://www.youtube.com/watch?v=azgYvTZD3eo&list=PLdo5W4Nhv31a8UcMN9-35ghv8qyFWD9_S&index=112
*/
 
#include<iostream>
#include<string.h>
using namespace std;

//Structure template
struct student{			 		//structure name/tag
	string name ;				//structure data members of structure
	int roll;
	float marks; 
	};						    	

main()
{
	student s1,s2,s3[5];
	
	for(int i=0;i<5;i++)
	{
		s3[i].name=('A'+i);
		s3[i].marks=i+20;
		s3[i].roll=i+2.1;
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<"Name"<<i<<"  "<< s3[i].name[0]<<endl;
		cout<<"Marks of "<<s3[i].marks<<endl;
		cout<<"Roll "<<s3[i].roll<<"\n\n";
	}
		
}
