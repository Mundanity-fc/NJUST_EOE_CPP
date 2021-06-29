#include <iostream>
using namespace std;

void sum(int a[],int $b[10])
{
	int x,n;
	for(int i=0;i<7;i++)
	{
		x=a[i];
		while(x)
		{
			n=x%10;
			$b[n]++;
			x=x/10;
		}
	}
}
int main()
{
	int a[]={5,26,98,77,1,27,30};
	int b[10]={0,0,0,0,0,0,0,0,0,0};
	sum(a,b);
	for(int i=0;i<10;i++)
		cout<<b[i]<<' ';
	cout<<endl;
	return 0;
}