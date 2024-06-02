 /*
C string 
 Slides:130-132
*/
#include<iostream>
#include<string.h>
using namespace std;

main()
{

string name1= "Bailey";
char name2[7]= {'B','a','i','l','e','y','y'};
char name3[7]= {'B','a','i','l','e','y','\0'};
char name4[8]="Bail";                    //automatically assign stores \0 at the end
char name5[]="Bailey"; 					//size of array 6character+1 \0
//char name6[4]="Bail"; 			//ERROR as no space for \0
char name6[5]="B--l";
char name7[4]= {'B','a','i','l'};
char name8[4]= {0};					//Always initialize your character array with 0, puts null terminator in all array elements
//char name9[3]={"hello","hi"};       //ERROR: initializer for array of chars is to long
string name9[2]={"hello","hi"};
cout<<"Name1  "<<name1<<endl;
cout<<"Name2  "<<name2<<endl;
cout<<"Name3  "<<name3<<endl;
cout<<"Name4  "<<name4<<endl; 
cout<<"Name5  "<<name5<<"  size of "<<sizeof(name5)<<endl;  
cout<<"Name6  "<<name6<<"  size of "<<sizeof(name6)<<endl;
cout<<"Name6+1  "<<name6+1<<"  size of "<<sizeof(name6)<<endl;
cout<<"Name[3]  "<<name6[3]<<endl; 
cout<<"Name7  "<<name7<<"  size of "<<sizeof(name7)<<endl;   //print BailB--l as no /0		
cout<<"Name8  "<<name8<<"  size of "<<sizeof(name8)<<endl;
name8[0]='h';
name8[1]='i';
cout<<"Name8  "<<name8<<"  size of "<<sizeof(name8)<<endl;
cout<<"Name9[0]  "<<name9[0]<<endl;
cout<<"Name9[1]  "<<name9[1]<<endl;


}


