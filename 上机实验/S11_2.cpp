#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str[100];
	int flag=0;
	cout<<"Input a string \n";
	cin.getline(str,100);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z'&&flag==0)
		{
			str[i]=str[i]-32;
			flag=1;
		}
		if(str[i]==' '||str[i]=='\n')
		flag=0;
	}
	cout<<"the result is:\n";
	cout<<str<<endl;
	return 0;
}