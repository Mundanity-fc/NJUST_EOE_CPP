#include <iostream>
#include <string>
using namespace std;
void fun1(char *s, int n, int r)
{
	int i=0,t;
	while(n)
	{
		t=n%r;
		if(t>=10)
			s[i++]=65+t-10;
		else
			s[i++]=t+48;
		n=n/r;
	}
	s[i]='\0';
}
void fun2(char *s)
{
	char ch;
	int len=strlen(s);
	for(int i=0;i<len/2;i++)
	{
		ch=s[i];
		s[i]=s[len-i-1];
		s[len-i-1]=ch;
	}
}
int main()
{
	char s[200];
	int n,r;
	cout <<"����������ת����ʮ��������";
	cin>>n;
	cout<<"���뽲ʮ������"<<n<<"ת���ɶ��ٽ��Ƶ�����";
	cin>>r;
	fun1(s,n,r);
	fun2(s);
	cout<<"ʮ������"<<n<<"ת����"<<r<<"���Ƶ��������Ϊ��"<<s<<endl;
	return 0;
}