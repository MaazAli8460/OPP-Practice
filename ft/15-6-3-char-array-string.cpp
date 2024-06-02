 /*
C string
 
 
 Slides:130-132
*/
#include<iostream>
#include<string.h>
using namespace std;

main()
{

char name[]="Bail"; //always stores /0 at the end
char *ptr = name;
cout<< ptr;               //Bail    
}


