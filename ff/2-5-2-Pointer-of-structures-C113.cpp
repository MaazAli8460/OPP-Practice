 /*
Structure: pointer to structure  ..Structure pointer
link: https://www.youtube.com/watch?v=f0Uw1x8albM&list=PLdo5W4Nhv31a8UcMN9-35ghv8qyFWD9_S&index=113
*/
 
#include<iostream>
#include<string.h>
using namespace std;

//Structure template
struct student{			 		//structure name/tag
	string name ;				//structure data members of structure
	int roll;
	float marks;
	int *ptr; 
	};						    	

main()
{
	int a,*aptr=&a;
	int x=5;
	student s1={"abcde",123,34.454,&x};
	student *sptr;
	
	sptr= &s1;
	cout<<"Address of structure s1 "<<&s1<<endl;
	cout<<"Address using Pointer   "<<sptr<<"\n\n\n";

	cout<<"Access name using ptr "<<sptr->name<<endl;
	cout<<"Access name using ptr "<<(*sptr).name<<endl;
	
	cout<<"Access Roll using ptr "<<sptr->roll<<endl;
	cout<<"Access Marks using ptr "<<sptr->marks<<endl;

	cout<<"value of x using structure ptr "<<*sptr->ptr<<endl;
	cout<<"value of x using structure ptr "<<*((*sptr).ptr)<<endl;
	

	cout<<"n\n\nEnter name using pointer\n";
	cin>>sptr->name;
	cout<<"\nUpdated name Access name using ptr "<<sptr->name<<endl;
		
}
