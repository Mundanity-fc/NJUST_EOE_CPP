#include <iostream>
using namespace std;

int main()
{
	int a,i;
	cout<<"";
	cin>>a;
	for(i=2;i<a;i++) if(a%i==0) break;
	if(i==a) cout<<a<<"是素数\n";
	else cout<<a<<"不是素数\n";
	return 0;
}