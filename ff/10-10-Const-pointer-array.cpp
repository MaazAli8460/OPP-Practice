//Array
/*
 
 Array size is always constant because array is created on stack & size of array is always fixed so we cannot 
 create unlimited space on stack.C-99 standard... 
 
 how to make a array size constant
 
 OS give us two memories.
 1. stack(adv: i)..memory is automatically allocated whenever ii)..we come out of stack it is automatically distroyed)
 	Disadv i)..stack is temp..whenever we are in scope of variable its available  but once we come out of scope 
 	variable is distroyed  ii) it has limited space we cannot create a very long space
 	
 	i) temp ii)limited   iii)automatic location iv) auto distruction
 	
 2. heap( tape or huge file)
	Adv:i)  Permenant storage.. until your program is running  it is part of program unless u destroy it
		ii) heap is unlimited: if 2gb memory we run 4gb program it will run on virtul memory & will slow the system
	disadv	i) no automatic allocation     ( request for memory allocation if accept memory allocated)
			ii) no automatic deallocation	(once used we have to return it back)
			
For application we use New 
for return memory we use delete

we use new/delete in pairs.... if not used in that way might create problem

 i/p   type/ size(by default is 1)  <---NEW---> Return starting address of that memory block)
 
 i/p  starting address/(memory deleted in block or single) <---DELETE--->  	
 
time: 48:32
*/

#include<iostream>
using namespace std;
main()
{
	
	int *pint=new int[4];
	char *pchar=new char[3];
	float *pfloat= new float[5];
	
	int *p2int=new int;     //single allocation is created
	
	//if square bracket used while allocating  we will use it for delete as well
	
	delete[];
}




