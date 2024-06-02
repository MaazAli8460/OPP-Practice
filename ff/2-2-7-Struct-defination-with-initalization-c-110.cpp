 /*
Structure:  Anonymous Structure
link: https://www.youtube.com/watch?v=6Z-silgul48&list=PPSV
*/
 
#include<iostream>
#include<string.h>
using namespace std;

//Structure template
struct test{			 		         //structure name/tag
	char name[20]="hello";				
	int roll=1234;
	float marks=3.25; 
	};						
	
main()
{
  test t;
  cout<<t.marks;			
}
