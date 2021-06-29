#include <iostream>
#include <cmath>
using namespace std;

float f(float x)
{
	float y;
	y=x*x+3*x-4;
	return y;
}

float df(float x)
{
	float y;
	y=2*x+3;
	return y;
}

int main()
{
	float x1,x0;
	x1=0;
	do
	{
		x0=x1;
		x1=x0-f(x0)/df(x0);
	}while(abs(f(x1))>=1e-5);
	cout <<"x= "<<x1<<endl;
	return 0;
}