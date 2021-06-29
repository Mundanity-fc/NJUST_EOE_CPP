#include <iostream>
using namespace std;

int main()
{
	double x,y,k=0;
	int n,i,t;
	cin >>n>> x;
	y=x;
	k=x;
	for(i=2;i<=n;i++){
		t=i*2-1;
		k=k*x*x/t/(t-1)*(-1);
		y=y+k;
	}
	cout << y;
	return 0;
}