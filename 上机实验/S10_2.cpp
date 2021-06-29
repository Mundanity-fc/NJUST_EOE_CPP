#include <iostream>
using namespace std;

int del(int array[],int n)
{
	for(int i=0;i<n-1;i++)
		if(array[i]==array[i+1])
		{
			for(int j=i+2;j<n;j++)
				array[j-1]=array[j];
			n=n-1;
			i=i-1;
		}
		return n;
}
int main()
{
	int a[]={2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10};
	int n = del(a,sizeof(a)/sizeof(a[0]));
	for(int i=0;i<n;i++)
		cout << a[i] << '\t';
	cout<<endl;
	return 0;
}