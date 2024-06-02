//Const
/*

CONST in pointers:
is a keyword which is used to define a constant .

example pi =3.14;
 we use const keyword to declare a variable
 
 when const is written with a variable we cannot change it  we can only read it
 
 we will use it while defining a variable
 
 whenever constant is define it is initialized at that instant
 
 if we change value of a constant it will generate a syntax error
 
 Const in pointer
time: 9:30
*/

#include<iostream>
using namespace std;
main()
{
	float pi=3.14;
	pi=2.2;
	float const c_pi=3.14;
	//c_pi=2.2;  //ERROR read only variable

}




