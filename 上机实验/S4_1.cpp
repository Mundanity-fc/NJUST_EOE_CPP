#include <iostream>
using namespace std;

int main()
{
	int a,b;
	int t,x;
	cout<<"请输入两个正整数";
	cin>>a>>b;
	x=a*b;
	if(a<b){
		t=a;a=b;b=t;
	}
	while(t=a%b){
		a=b;
		b=t;
	}
	cout<<"最大公约数："<<b<<endl;
	cout<<"最小公倍数："<<x/b<<endl;
	return 0;
}