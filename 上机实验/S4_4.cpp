#include <iostream>
using namespace std;

int main()
{
	int a;
	for(a=100;a<=200;a++){
		int target=1;
		for(int i=2;i<a;i++){
			if(a%i==0) target=0;
		}
		if(target) cout << a << endl;
	}
	return 0;
}