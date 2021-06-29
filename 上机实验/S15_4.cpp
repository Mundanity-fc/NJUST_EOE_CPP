#include <iostream>
using namespace std;
class NUM{
private:
	int n,count;
	int *p;
public:
	NUM(int num)
	{
		n=num;
		count=num;
		p=new int[401];
		for(int i=0;i<=400;i++) *(p+i)=1;
	}
	int isdiff(int num)
	{
		int st[6],x=0;
		while(num)
		{
			st[x]=num%10;
			num=num/10;
			x++;
		}
		for(int i=0;i<x;i++)
			for(int j=i+1;j<=x;j++)
				if(st[i]==st[j]) return 0;
		return 1;
	}
	int issort(int num)
	{
		int st[6],x=0;
		while(num)
		{
			st[x]=num%10;
			num=num/10;
			x++;
		}
		for(int i=0;i<x;i++)
			if(st[i]<st[i+1]) return 0;
		return 1;
	}
	void process()
	{
		for(int i=1;i<=n;i++)
		{
			if(!isdiff(i*i)||!issort(i*i))
				{
					p[i]=0;
					count--;
				}
		}
	}
	void print()
	{
		cout<<"�ڲ�����"<<n<<"�ķ�Χ��������������������ƽ�������£�"<<endl;
		cout<<"x\tx*x"<<endl;
		for(int i=1;i<=n;i++)
			if(p[i]) cout<<i<<'\t'<<i*i<<endl;
		cout<<"����Ϊ��"<<count<<endl;
	}
	~NUM()
	{
		if(p) delete []p;
	}
};
int main()
{
	int x;
	cout<<"������n��ֵ��������400����";
	cin>>x;
	NUM num(x);
	num.process();
	num.print();
	return 0;
}