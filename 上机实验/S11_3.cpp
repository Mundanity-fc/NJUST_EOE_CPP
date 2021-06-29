#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str[100];
	int i=0,x,n=0;
	cout<<"Input a string \n";
	cin.getline(str,100);
	while(str[i]!='\0')
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			n++;
		}else
		{
			i++;
			continue;
		}
		while((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			i++;
		}
	}
	cout<<n;
	return 0;
}