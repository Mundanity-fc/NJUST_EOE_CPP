#include <iostream>
using namespace std;

int main()
{
	int a,i;
	cout<<"";
	cin>>a;
	for(i=2;i<a;i++) if(a%i==0) break;
	if(i==a) cout<<a<<"������\n";
	else cout<<a<<"��������\n";
	return 0;
}