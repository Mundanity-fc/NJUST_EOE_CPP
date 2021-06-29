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
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0&&prime(i))
			cout <<i<<'\t';
	}
	cout <<endl;
	return 0;
}