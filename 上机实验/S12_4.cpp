#include <iostream>
using namespace std;

void ave(int *p);
void max(int (*p)[4]);
void min(int (*p)[4]);
int main()
{
	int a[3][4]={{2,3,4,5},{12,13,14,15},{1,2,3,4}};
	ave(a[0]);
	max(a);
	min(a);
	return 0;
}

void ave(int *p)
{
	double resu=0;
	for(int i=0;i<12;i++) resu+=*(p+i);
	cout<<"ave = "<<resu/12<<' ';
}

void max(int (*p)[4])
{
	int m=*p[0];
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			if((*(p+i))[j]>m) m=(*(p+i))[j];
	cout<<"max = "<<m<<' ';
}

void min(int (*p)[4])
{
	int m=*p[0];
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			if((*(p+i))[j]<m) m=(*(p+i))[j];
	cout<<"min = "<<m<<' ';
}