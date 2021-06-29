#include <iostream>
#include <cmath>
using namespace std;
void input(int *a)
{
	for(int i=1;i<16;i++) a[i]=(15*a[i-1]+97)%256;
}
void output(int *a,int n)
{
	for(int i=0;i<n;i++)
		cout << a[i] << '\t';
	cout<<endl;
}
double ave(int *a)
{
	double aver=0;
	for(int i=0;i<16;i++) aver+=a[i];
	aver=aver/16;
	return aver;
}
double max(int *a,double ave)
{
	double maxx=a[0];
	int n=0;
	for(int i=1;i<16;i++)
		if(a[i]>maxx) maxx=a[i];
	return maxx;
}
int maxn(int *a,double ave)
{
	double max=fabs(ave-a[0]);
	int n=0;
	for(int i=1;i<16;i++)
		if(fabs(ave-a[i])>max)
		{
			max=fabs(ave-a[i]);
			n=i;
		}
	return n;
}
void del(int *a,int n,int l)
{
	for(int i=n;i<l-1;i++)
		a[i]=a[i+1];
}

int main()
{
	int a[16],n;
	a[0]=55;
	input(a);
	output(a,16);
	cout << "平均值 = " << ave(a) << endl;
	cout << "最大值 = " << max(a,ave(a)) << endl;
	cout <<"删除"<<max(a,ave(a))<<"后的数组元素：" << endl;
	del(a,maxn(a,ave(a)),16);
	output(a,15);
	return 0;
}