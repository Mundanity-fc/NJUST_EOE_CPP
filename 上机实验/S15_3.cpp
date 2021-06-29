#include <iostream>
#include <iostream>
using namespace std;
class STR{
private:
	char *p;
public:
	STR(char *s)
	{
		p=new char[100];
		strcpy(p,s);
	}
	void fun(char *s,int n1,int n2)
	{
		int i=0;
		for(;p[i]!='\0';i++);
		for(;n2;n2--)
		{
			p[i]=s[n1];
			i++;
			n1++;
		}
		p[i]='\0';
	}
	void print()
	{
		int i=0;
		cout<<"处理后的字符串1为：";
		cout<<p;
		cout<<endl;
	}
	~STR()
	{	if(p) delete []p;	}
};
int main()
{
	int s,n;
	char s1[]="abcdefg";
	char s2[]="12345678";
	cout<<"字符串 1："<<s1<<endl;
	cout<<"字符串 2："<<s2<<endl;
	cout<<"输入起始的位置和字符个数：";
	cin>>s>>n;
	STR str(s1);
	str.fun(s2,s,n);
	str.print();
	return 0;
}