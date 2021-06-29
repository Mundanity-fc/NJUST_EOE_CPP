#include <iostream>
#include <cmath>
using namespace std;
class STR{
private:
	char *s1;
	char *s2;
public:
	STR(char *str)
	{
		s1=str;
		s2=new char[100];
	}
	void delsame()
	{
		s2[0]=s1[0];
		int i=1,n=1,flag=1;
		while(s1[i]!='\0')
		{
			for(int j=0;j<i;j++)
				if(s2[j]==s1[i]) flag=0;
			if(flag)
			{
				s2[n]=s1[i];
				n++;
			}
			i++;
		}
		s2[n]='\0';
	}
	void show()
	{
		int i=0;
		cout<<"Before: ";
		while(s1[i]!='\0')
			{
				cout<<s1[i];
				i++;
			}
		cout<<"\nAfter: ";
		i=0;
		while(s2[i]!='\0')
			{
				cout<<s2[i];
				i++;
			}
	}
	~STR(){
		if(s2) delete []s2;
	}
};
int main()
{
	STR test("concoon");
	test.delsame();
	test.show();
	return 0;
}