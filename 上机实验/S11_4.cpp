#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str[100],b[100][100];
	int a[100],n=0,i=0,x,max,j;
	cout<<"Input a string \n";
	cin.getline(str,100);
	for(i=0;i<100;i++) a[i]=0;
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			b[i][j]=0;
	i=0;
	while(str[i]!='\0')
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			n++;
			x=0;
		}else
		{
			i++;
			continue;
		}
		while((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			a[n]++;
			b[n][x]=str[i];
			i++;
			x++;
		}
	}
	max=1;
	for(j=1;j<=n;j++)
	if(a[j]>a[max])
	max=j;
	cout<<"the result is:\n";
	for(i=0;i<a[max];i++)
		cout<<b[max][i];
	return 0;
}