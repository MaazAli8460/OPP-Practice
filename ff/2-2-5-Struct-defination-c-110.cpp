 /*
Structure:  Anonymous Structure
link: https://www.youtube.com/watch?v=6Z-silgul48&list=PPSV
*/
 
#include<iostream>
#include<string.h>
using namespace std;

//Structure template
struct{			 		         //structure name/tag
	char name[20];				//data members of structure
	int roll;
	float marks; 
	}s1,s2,s3,s4[60];						//s is obj or variable of datatype student;	
											//**disadv: using this datatype will not allow to declare more 
											// objects in program.. As we donot have struct tag/name

main()
{
	cout<<sizeof(s1)<<endl;
	cout<<sizeof(s4);
	
		
}
