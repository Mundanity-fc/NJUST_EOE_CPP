#include <iostream>
#include <cmath>
using namespace std;
class NUM{
private:
	int n;
	int *p;
public:
	NUM(int n1)
	{
		n=n1;
		p=new int[n];
	}
	int yes(int x)
	{
		for(int i=2;i<=x/2;i++)
			if(x%i==0)
				return 1;
		return 0;
	}
	void fun()
	{
		int j;
		for(int i=3;1;i++)
		{
			j=0;
			while(yes(i)&&j<n)
			{
				p[j]=i;
				j++;
				i++;
			}
			if(j==n) break;
		}
	}
	void print()
	{
		for(int i=0;i<n;i++)
			cout<<p[i]<<'\t';
		cout<<endl;
	}
	~NUM()
	{
		if(p) delete[]p;
	}
};
int main()
{
	NUM num(10);
	num.fun();
	num.print();
	return 0;
}