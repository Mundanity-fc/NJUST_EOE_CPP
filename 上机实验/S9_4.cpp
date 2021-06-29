#include <iostream>
using namespace std;

int prime(int num)
{
	if(num==1) return 0;
	for(int i=2;i<num;i++)
		if(num%i==0) return 0;
	return 1;
}

int main()
{
	int a[10][10];
	int i,j;
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			a[i][j]=0;
	for(i=0;i<10;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=2;i<10;i++)
		for(j=1;j<i;j++) a[i][j]=a[i-1][j-1]+a[i-1][j];
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++) if(a[i][j]) cout<<a[i][j]<<' ';
		cout<<'\n';
	}
	return 0;
}