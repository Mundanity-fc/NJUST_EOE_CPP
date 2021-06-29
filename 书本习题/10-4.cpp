#include <iostream>
using namespace std;
class ARR{
private:
	int n;
	int a[100];
public:
	ARR(int x[],int size);
	void delsame();
	void show();
};
ARR::ARR(int x[],int size)
{
	for(int i=0;i<size;i++)
		a[i]=x[i];
	n=size;
}
void ARR::delsame()
{
	for(int i=0;i<n-1;i++)
		if(a[i+1]==a[i])
		{
			for(int j=i+1;j<n-1;j++)
				a[j]=a[j+1];
			n--;
			i--;
		}
}
void ARR::show()
{
	cout<<"Result: "<<endl;
	for(int i=0,num=1;i<n;i++,num++)
	{
		cout<<a[i]<<'\t';
		if(num==5)
		{
			cout<<endl;
			num=0;
		}
	}
	cout<<endl;
}
int main()
{
	int b[16]={1,2,2,3,4,4,5,6,6,7,8,8,8,9,10,10};
	ARR v(b,16);
	v.delsame();
	v.show();
	return 0;
}