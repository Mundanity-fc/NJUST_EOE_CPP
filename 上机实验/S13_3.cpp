#include <iostream>
using namespace std;
int trans(char *p,int *b)
{
	int n=0,i=0;
	while(p[i]!='\0')
	{
		if(p[i]>='0'&&p[i]<='9')
		{
			n++;
			b[n-1]=0;
		}
		else
		{
			i++;
			continue;
		}
		while(p[i]>='0'&&p[i]<='9')
		{
			b[n-1]=b[n-1]*10+p[i]-'0';;
			i++;
		}
	}
	return n;
}
int main()
{
	int n;
	char str[100];
	int b[100];
	cin.getline(str,100);
	n=trans(str,b);
	for(int i=0;i<n;i++)
		cout << b[i] <<'\t';
	cout<<endl;
	return 0;
}