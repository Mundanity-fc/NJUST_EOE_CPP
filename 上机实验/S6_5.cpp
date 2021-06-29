#include <iostream>
#include <cmath>
using namespace std;

double solve(int x0=0)
{
	double x1,f,fd;
	f=x0*x0+3*x0-4;
	fd=2*x0+3;
	x1=x0-f/fd;
	if(abs(f)<1e-5) return x0;
	else return solve(x1);
}

int main()
{
	cout << solve();
	return 0;
}