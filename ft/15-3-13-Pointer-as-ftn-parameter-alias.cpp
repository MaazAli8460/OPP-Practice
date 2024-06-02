 /*
Pointer as function parameter

slides:171
*/

#include<iostream>
using namespace std;

void fun(int &ref) 
{ 
    ref = 20; 
} 

main()
{ 
    int x = 10; 
    fun(x); 
    cout<<"New value of x is "<< x; 

}

