#include <iostream>
using namespace std;

class ARR{
private:
	int n;
	int a[100];
	int max,maxindex;
public:
	ARR(int x[],int size);
	void FindMax();
	void Show();
};
ARR::ARR(int x[],int size)
{
	n=size;
	for(int i=0;i<n;i++)
	{
		a[i]=x[i];
	}
}
void ARR::FindMax()
{
	max=a[0];
	maxindex=0;
	for(int i=0;i<n;i++)
		if(a[i]>max)
		{
			max=a[i];
			maxindex=i+1;
		}
}
void ARR::Show()
{
	for(int i=0,j=1;i<n;i++,j++)
	{
		cout<<a[i]<<'\t';
		if(j==5)
		{
			cout<<endl;
			j=0;
		}
	}
	cout<<endl;
	cout<<"max = "<<max<<"\tmaxindex = "<<maxindex<<endl;
}

int main()
{
	int b[]={3,4,6,8,10,34,2};
	ARR arr(b,7);
	arr.FindMax();
	arr.Show();
	return 0;
}