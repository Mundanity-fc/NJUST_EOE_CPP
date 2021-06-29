#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double y,x=0.75;
	y=x;
	while(abs((2*y/3+x/3/y/y)-y)>1e-5) y=2*y/3+x/3/y/y;
	cout << 2*y/3+x/3/y/y;
	return 0;
}