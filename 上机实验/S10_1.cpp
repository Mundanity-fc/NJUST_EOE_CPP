#include <iostream>
using namespace std;

int binary(int array[], int n, int number)
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(number<array[mid])
			high=mid-1;
		else if(number>array[mid])
			low=mid+1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int a[]={2,4,6,8,10,12,14,16,18,20,22,24};
	int num;
	cout<<"请输入要寻找的数: ";
	cin>>num;
	int index=binary(a,sizeof(a)/sizeof(a[0]),num);
	if(index!=-1)
		cout << "该数在数组中的序号为："<<index<<endl;
	else
		cout << "数组中没有该元素\n";
	return 0;
}