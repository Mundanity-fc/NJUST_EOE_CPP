#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	for(a=0;a<=5;a++)
		for(b=0;b<=9;b++)
			for(c=0;c<=9;c++)
			{
				if(a==5||b==5||c==5)
					if((a*100+b*10+c)%3==0) cout << (a*100+b*10+c) << endl;
			}
	return 0;
}