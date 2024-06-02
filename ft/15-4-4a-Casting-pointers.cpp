#include<iostream>
void fun(int);
using namespace std;
main()
{
 int *ip=new int;
 short *sp;
 char *cp;
 
 *ip=16706;			//Hex 4142
 //*ip=65;
 //	cp=ip;			//Error*** cannot convert int o char
 
cp=(char*)ip;
cout<<*cp<<endl;
cout<<*(cp+1)<<endl;
 
 sp=(short*)ip;
 cout<<*sp;
	
}

