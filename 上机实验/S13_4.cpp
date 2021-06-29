#include <iostream>
using namespace std;

int fun(char *str, char *substr)
{
	int n=0,i=0;
	while(str[i]!='\0')
	{
	if(str[i]==substr[0])
		{
			int j=0;
			while(substr[j]!='\0')
			{
				if(substr[j]==str[i])
				{
					j++;
					i++;
				}else break;
			}
			if(substr[j]=='\0') n++;
			continue;
		}
	i++;
	}
	return n;
}
int main()
{
	char a[100],b[100];
	cin.getline(a,100);
	cin.getline(b,100);
	cout << "TOTAL: "<< fun(a,b);
	return 0;
}