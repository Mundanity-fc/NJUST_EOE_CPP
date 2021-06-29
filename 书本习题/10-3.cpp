#include <iostream>
using namespace std;

class ARRAY{
private:
	int a[100];
	int n;
public:
	ARRAY(int t[],int m);
	int sum(int x);
	void fun();
	void print();
};

ARRAY::ARRAY(int t[],int m)
{
	for(int i=0;i<m;i++)
		a[i]=t[i];
	n=m;
}
int ARRAY::sum(int x)
{
	int r=0;
	while(x)
	{
		r=r+x%10;
		x=x/10;
	}
	return r;
}
void ARRAY::fun()
{
	int cha,flag=1;
	while(flag)
	{
		flag=0;
		for(int i=0;i<n-1;i++)
			if(sum(a[i])>sum(a[i+1]))
			{
				cha=a[i];
				a[i]=a[i+1];
				a[i+1]=cha;
				flag=1;
			}
	}
}
void ARRAY::print()
{
	int i;
	for(i=0;i<n-1;i++)
		cout<<a[i]<<", ";
	cout<<a[i]<<endl;
}
int main()
{
	int ary[6]={297,735,624,158,312,900};
	ARRAY arr(ary,6);
	cout<<"排序前的数组为：";
	arr.print();
	arr.fun();
	cout<<"排序后的数组为：";
	arr.print();
	return 0;
}