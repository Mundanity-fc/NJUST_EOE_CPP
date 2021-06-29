#include <iostream>
using namespace std;

void ins(int $a[100],int l,int n)
{
	int x=0;
	while(n>$a[x])
	{
		if($a[x]==0) break;
		x++;
	}
	for(int j=l;j>=x;j--) $a[j+1]=$a[j];
	$a[x]=n;
}

int main()
{
	int a[100],n,count=0;
	for(int i=0;i<100;i++) a[i]=0;
	cout<<"Insert: ";
	cin>>n;
	while(n!=0)
	{
		if(a[0]==0)
		{
			a[0]=n;
			count++;
			cout<<"Insert: ";
			cin>>n;
			continue;
		}
		ins(a,count,n);
		count++;
		cout<<"Insert: ";
		cin>>n;
	}
	cout<<"Output: ";
	for(int x=0;x<count;x++)
		cout << a[x] <<"\t";
	return 0;
}