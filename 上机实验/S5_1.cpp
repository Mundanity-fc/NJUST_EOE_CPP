#include <iostream>
using namespace std;

int main()
{
	int t=2;
	int s=0;
	for(int i=1;i<=7;i++)
	{
		s=s+t;
		t=t*10+2;
	}
	cout << "2+22+222+...+2222222="<<s<<endl;
	return 0;
}