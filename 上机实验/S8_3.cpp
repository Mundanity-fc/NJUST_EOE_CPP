#include <iostream>
using namespace std;

int main()
{
	int a[10]= {2,5,78,4,6,3,89,12,15,34};
	int i,max=0;
	for(i=0;i<10;i++)
		if(a[i]>a[max])
			max=i;
	cout<<"max="<<a[max]<<", maxindex="<<max+1;
	return 0;
}