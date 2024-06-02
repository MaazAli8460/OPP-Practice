#include<iostream>
using namespace std;

main()
{
	int ary[3][2]={1,2,3,4,5,6};
	int (*ptr)[2]=ary;
	
	cout<<ary<<endl;
	cout<<ary[0]<<"  "<<ary+0<<"  "<<*(*(ary+0))<<"  "<<*(*(ary+0)+1)<<endl;
	cout<<ptr<<"   "<<*ptr<<"  "<<(*(*ptr))<<"  "<<*(*(ptr+2)+1)<<endl;
	cout<<ary[1]<<"  "<<ary+1<<"  "<<*(*(ary+1))<<"  "<<*(*(ary+1)+1)<<endl;
	cout<<ary[2]<<"  "<<ary+2<<"  "<<*(*(ary+2))<<"  "<<*(*(ary+2)+1)<<endl;
	
	
	
}
