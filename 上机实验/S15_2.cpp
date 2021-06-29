#include <iostream>
using namespace std;
class NUM
{
private:
	int n,count;
	int *p;
public:
	NUM(int num)
	{
		n = num;
		p = new int [n+1];
		for(int i=1;i<=n;i++)
			*(p+i)=0;
		count=n;
	}
	int d(int num)
	{
		int t=num;
		while(num)
		{
			t=t+num%10;
			num=num/10;
		}
		return t;
	}
	void fun()
	{
		int t;
		for(int i=1;i<=n;i++)
		{
			t=d(i);
			if(t<=n&&p[t]==0)
			{
				p[t]=1;
				count=count-1;
			}
		}
	}
	void print()
	{
		cout<<"不大于"<<n<<"的自身数有"<<count<<"个：\n";
		for(int i=1;i<=n;i++)
			if(p[i]==0)
				cout<<i<<'\t';
	}
	~NUM()
	{ if(p) delete []p; }
};
int main()
{
	int x;
	cout<<"请输入一个正整数：";
	cin>>x;
	NUM num(x);
	num.fun();
	num.print();
	return 0;
}