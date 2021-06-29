#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	int n;
	fstream fio("fsqrt.dat",ios_base::in|ios_base::out|ios_base::binary|ios_base::trunc);
	if(!fio)
	{
		cout<<"File Operator Error!\n";
		exit(0);
	}
	for(int i=1;i<101;i++)
	{
		x=sqrt((double)i);
		fio.write((char *)&x,sizeof(x));
	}
	cout<<"������һ��1~100��������������0������"<<endl;
	cin>>n;
	while(1)
	{
		if(n==0)
		{
			cout<<"�������\n";
			exit(0);
		}
		while(n<1||n>100)
		{
			cout<<"��������ݴ������������룺\n";
			cin>>n;
			if(n==0)
			{
				cout<<"�������\n";
				exit(0);
			}
		}
		n=n-1;
		fio.seekg(n*sizeof(double),ios::beg);
		fio.read((char *)&x, sizeof(double));
		cout<<n+1<<"��ƽ�����ǣ�"<<x<<endl;
		cout<<"������һ��1~100��������������0������"<<endl;
		cin>>n;
	}
	fio.close();
	return 0;
}