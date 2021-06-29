#include <iostream>
using namespace std;

int fun(int num)
{
	int s=1;
	while(num)
	{
		s=s*(num%10);
		num=num/10;
	}
	return s;
}

int main()
{
	int n,mul;
	cout<<"请输入一个整数（输入0结束）：";
	cin>>n;
	while(n)
	{
		mul=fun(n);
		cout << n << "的各位数字之积为" << mul << endl;
		cout<<"请输入一个整数（输入0结束）：";
		cin>>n;
	}
	return 0;
}