 /*
C Recurrsion
Book: Tony Program: 19.4  
 */
 
#include<iostream>
#include<string.h>
using namespace std;
int charcount(char,string,int);
main()
{	
	string s="adbdbdbdb";
    int time=charcount('d',s,0);
   	cout<<"char d is "<<time <<" in string "<<s;
}

int charcount(char find,string sr,int count)
{
	if(sr.length()<=count)
	{
		//return 0;	
	}
	else if (sr[count]==find)
	{
		return 1+charcount(find,sr,count+1);
	}
	else if (sr[count]!=find)
	{
		return 0+charcount(find,sr,count+1);
	}	
	
}
	



