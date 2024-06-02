 /*
C string
 
 
 Slides:143-145
*/
#include<iostream>
#include<string.h>
using namespace std;

main()
{

char name[]="Bail"; //always stores /0 at the end
char *ptr = name;
cout<<"ptr[2]  "<<ptr[2]<<endl;
cout<<"ptr+2 "<<*(ptr+2)<<endl;
ptr++;
cout<< ptr; 
 
}


