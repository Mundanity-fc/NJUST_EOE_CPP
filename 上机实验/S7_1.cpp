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
	for(int i=100;i<=200;i++)
	{
		if(prime(i))
			cout << i << '\t';
	}
	return 0;
}