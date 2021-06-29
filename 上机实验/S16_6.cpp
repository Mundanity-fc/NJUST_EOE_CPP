#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
struct tri
{
	double sn;
	double cn;
};
int main()
{
	tri tri;
	double x;
	int n;
	fstream fio("ftrifun.dat",ios_base::in|ios_base::out|ios_base::binary|ios_base::trunc);
	if(!fio)
	{
		cout<<"File Operator Error!\n";
		exit(0);
	}
	for(double i=0;i<=90;i++)
	{
		x=i*3.1415926/180;
		tri.cn=cos(x);
		tri.sn=sin(x);
		fio.write((char *)&tri,sizeof(tri));
	}
	cout<<"请输入一个0~90的整数：（输入-1结束）"<<endl;
	cin>>n;
	while(1)
	{
		if(n==-1)
		{
			cout<<"程序结束\n";
			exit(0);
		}
		while(n<0||n>90)
		{
			cout<<"输入的数据错误，请重新输入：\n";
			cin>>n;
			if(n==-1)
			{
				cout<<"程序结束\n";
				exit(0);
			}
		}
		fio.seekg(n*sizeof(tri),ios::beg);
		fio.read((char *)&tri.sn, sizeof(double));
		fio.seekg(n*sizeof(tri)+sizeof(double),ios::beg);
		fio.read((char *)&tri.cn, sizeof(double));
		cout<<n<<"°的sin值为"<<tri.sn<<"\tcos值为"<<tri.cn<<endl;
		cout<<"请输入一个0~90的整数：（输入-1结束）"<<endl;
		cin>>n;
	}
	fio.close();
	return 0;
}