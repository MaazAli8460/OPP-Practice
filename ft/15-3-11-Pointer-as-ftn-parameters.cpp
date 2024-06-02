 /*
Pointer as function parameter

slides:158-160
*/

#include<iostream>
using namespace std;

void compDouble(int* Ar)
{	for(int i=0;i<10;i++)
		{	*Ar=(*Ar)*2; 
			 Ar++;
		} 
}


main()
{
		int Arr[10]={0,1,2,3,4,5,6,7,8,9};
		//compDouble(&Arr); //inCorrect way
		compDouble(Arr); //Correct way

}

