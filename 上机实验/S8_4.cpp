#include <iostream>
using namespace std;

int main()
{
	int a[99];
	int i;
	for(i=0;i<99;i++)
		a[i]=i+2;
	for(i=1;i<99;i++)
		if(a[i]%2==0)
			a[i]=0;
	for(i=2;i<99;i++)
		if(a[i]%3==0)
			a[i]=0;
	for(i=4;i<99;i++)
		if(a[i]%5==0)
			a[i]=0;
	for(i=0;i<99;i++)
		if(a[i]!=0)
			cout<<a[i]<<'\t';
	cout<<endl;
	return 0;
}