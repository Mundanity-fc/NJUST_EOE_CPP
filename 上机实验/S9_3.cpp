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
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int i,j,flag=0,n=0;
	cout<<"转置前的数组 a:\n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++) cout<<a[i][j]<<'\t';
		cout<<'\n';
	}

	for(i=0;i<4;i++)
		for(j=i;j<4;j++)
		{
			if(prime(a[i][j]))
			{
				flag=1;
				a[i][j]++;
				n++;
			}
			while(flag)
			{
				if(prime(a[i][j])) flag=0;
				else a[i][j]++;
			}
		}
	cout<<"转置后的数组 a:\n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++) cout<<a[i][j]<<'\t';
		cout<<'\n';
	}
	cout<<"素数个数："<<n<<endl;
	return 0;
}