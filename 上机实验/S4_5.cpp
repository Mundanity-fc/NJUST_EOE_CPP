#include <iostream>
using namespace std;

int main()
{
	int a;
	for(a=2;a<=1000;a++){
		int s=0;
		for(int i=1;i<=a;i++){
			for(int j=i;j<=a;j++) if(i*j==a) s=s+i+j;
		}
		if(s-a==a) cout << a << endl;
	}
	return 0;
}