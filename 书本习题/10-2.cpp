#include <iostream>
using namespace std;

class NUM{
private:
	int a[20];
	int count;
public:
	NUM(){	count=0;	}
	int reverse(int n);
	int isPrime(int n);
	void fun();
	void print();
};
	int NUM::reverse(int n)
	{
		int r=0;
		while(n)
		{
			r=r*10+n%10;
			n=n/10;
		}
		return r;
	}
	int NUM::isPrime(int n)
	{
		for(int i=2;i<n;i++)
			if(n%i==0) return 0;
		return 1;
	}
	void NUM::fun()
	{
		int x=0;
		for(int i=11;i<100;i++)
			if(isPrime(i)&&isPrime(reverse(i)))
			{
				a[x]=i;
				x++;
				count++;
			}
	}
	void NUM::print()
	{
		cout<<"count = "<<count<<endl;
		for(int i=0;i<count;i++)
			cout<<a[i]<<'\t';
		cout<<endl;
	}
	int main()
	{
		NUM num;
		num.fun();
		num.print();
		return 0;
	}