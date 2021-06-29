#include <iostream>
using namespace std;

int main()
{
	int a[6]= {9,8,7,6,5,4};
	int i,j,min,t;
	int n = 6;
	for(j=0;j<n-1;j++)
	{
		min=j;
		for(i=j;i<n;i++)
			if(a[min]>a[i])
				min=i;
		t=a[min];
		a[min]=a[j];
		a[j]=t;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<'\t';
	cout<<endl;
	return 0;
}