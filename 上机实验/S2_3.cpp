#include <iostream>
using namespace std;

int main()
{
	float a1,a2;
	char oper;
	float result;
	int flag=0;
	cout<<"������򵥵�����ʽ��\n";
	cin>>a1>>oper>>a2;
	switch(oper)
	{
	case '+':
		result=a1+a2;
		break;
	case '-':
		result=a1-a2;
		break;
	case '*':
		result=a1*a2;
		break;
	default:
		cout <<"���������������\n";
		flag=1;
	}
	if(flag==0)
		cout << a1 << oper << a2 << "=" << result << endl;
	return 0;
}