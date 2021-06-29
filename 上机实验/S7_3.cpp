#include <iostream>
using namespace std;

int prime(int x)
{
	for(int i=2;i<x;i++)
		if(x%i==0) return 0;
	return 1;
}

int main()
{
	int n;
	cout << "输入一个整数n：";
	cin>>n;
	for(int i=1;i<=n/2;i++)
		for(int j=n;j>=n/2;j--)
			if(i+j==n)
				if(prime(i)&&prime(j)) cout<<n<<'='<<i<<'+'<<j<<endl;
	return 0;
}