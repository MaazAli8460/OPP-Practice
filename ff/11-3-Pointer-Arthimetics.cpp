// Pointer Arthimetic
/*
time: 14:21
*/

#include<iostream>
using namespace std;
main()
{
	int a[]={1,2,3,9};
	char c[]={'a','c','d'};
	double d[]={9,3,5,7};
	char *cp=c;
	int *ip=a;
	double *dp=d;
	
	cout<<*ip+1<<endl;		//will print 2 as *ip is uniary operator solved first than +1 is added
	cout<<*(ip+1)<<"\n\n";		//will print 2 ip+1 new address calculated thn pointed
	
	for(int i=0;i<4;i++)
	{
		cout<<*ip<<"        "<<*cp<<"       "<<*dp<<endl;
		ip++;
		cp++;
		dp++;		
	}
}




