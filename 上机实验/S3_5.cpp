#include <iostream>
using namespace std;

int main()
{
	int x,j,p,n,i,sum;
	cin >> x;
	sum=0;
	n=1;
	p=x;
	while(p/10!=0)
	{
		p=p/10;
		n++;
	}
	for(i=n;i>=1;i--)
	{
		p=1;
		for(j=1;j<=i-1;j++) p=p*10;
		sum=sum+(x/p-x/(p*10)*10);
	}
	cout << sum;
}