#include <iostream>
using namespace std;

int main()
{
	int a,b;
	int t,x;
	cout<<"����������������";
	cin>>a>>b;
	x=a*b;
	if(a<b){
		t=a;a=b;b=t;
	}
	while(t=a%b){
		a=b;
		b=t;
	}
	cout<<"���Լ����"<<b<<endl;
	cout<<"��С��������"<<x/b<<endl;
	return 0;
}