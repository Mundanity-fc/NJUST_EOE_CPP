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
		cout<<"�������ַ���1Ϊ��";
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
	cout<<"�ַ��� 1��"<<s1<<endl;
	cout<<"�ַ��� 2��"<<s2<<endl;
	cout<<"������ʼ��λ�ú��ַ�������";
	cin>>s>>n;
	STR str(s1);
	str.fun(s2,s,n);
	str.print();
	return 0;
}