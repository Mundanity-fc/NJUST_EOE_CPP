#include <iostream>
#include <ctime>
using namespace std;
class Circle
{
	int num[20];
	int Max[4];
	int Min[4];
	int sum_max;
	int sum_min;
public:
	Circle()
	{
		srand(time(NULL));
		for(int i=0;i<20;i++)
			num[i]=rand()%100;
	}
	void Find_Max()
	{
		int a=0,b=1,c=2,d=3;
		sum_max=num[0]+num[1]+num[2]+num[3];
		sum_min=num[0]+num[1]+num[2]+num[3];
		Max[0]=num[a];
		Max[1]=num[b];
		Max[2]=num[c];
		Max[3]=num[d];
		Min[0]=num[a];
		Min[1]=num[b];
		Min[2]=num[c];
		Min[3]=num[d];
		for(int i=1;i<20;i++)
		{
			a=i;b=i+1;c=i+2;d=i+3;
			if(b>19) b=b-20;
			if(c>19) c=c-20;
			if(d>19) d=d-20;
			if(num[a]+num[b]+num[c]+num[d]>sum_max)
			{
				sum_max=num[a]+num[b]+num[c]+num[d];
				Max[0]=num[a];
				Max[1]=num[b];
				Max[2]=num[c];
				Max[3]=num[d];
			}
			if(num[a]+num[b]+num[c]+num[d]<sum_min)
			{
				sum_min=num[a]+num[b]+num[c]+num[d];
				Min[0]=num[a];
				Min[1]=num[b];
				Min[2]=num[c];
				Min[3]=num[d];
			}
		}
	}
	void Show()
	{
		cout<<"圆盘中的20个随机数为："<<endl;
		for(int i=0;i<20;i++) cout<<num[i]<<'\t';
		cout<<endl;
		cout<<"Max = "<<sum_max<<endl;
		for(int i=0;i<4;i++) cout<<Max[i]<<'\t';
		cout<<endl;
		cout<<"Min = "<<sum_min<<endl;
		for(int i=0;i<4;i++) cout<<Min[i]<<'\t';
		cout<<endl;
	}
};
int main()
{
	Circle test;
	test.Find_Max();
	test.Show();
	return 0;
}