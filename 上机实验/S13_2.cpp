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
	cout <<"请输入您想转换的十进制数：";
	cin>>n;
	cout<<"您想讲十进制数"<<n<<"转换成多少进制的数？";
	cin>>r;
	fun1(s,n,r);
	fun2(s);
	cout<<"十进制数"<<n<<"转换成"<<r<<"进制的数，结果为："<<s<<endl;
	return 0;
}