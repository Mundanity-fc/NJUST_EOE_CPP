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
	cout<<"������һ������������0��������";
	cin>>n;
	while(n)
	{
		mul=fun(n);
		cout << n << "�ĸ�λ����֮��Ϊ" << mul << endl;
		cout<<"������һ������������0��������";
		cin>>n;
	}
	return 0;
}