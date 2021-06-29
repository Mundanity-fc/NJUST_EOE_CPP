#include <iostream>
using namespace std;

int main()
{
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int i,j,t;
	cout<<"转置前的数组 a:\n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++) cout<<a[i][j]<<'\t';
		cout<<'\n';
	}
	for(i=0;i<4;i++)
		for(j=i;j<4;j++)
		{
			t=a[j][i];
			a[j][i]=a[i][j];
			a[i][j]=t;
		}
	cout<<"转置后的数组 a:\n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++) cout<<a[i][j]<<'\t';
		cout<<'\n';
	}
	return 0;
}