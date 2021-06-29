#include <iostream>
#include <cmath>
using namespace std;
float f(float x)
{
	return x*x+3*x-4;
}

int main()
{
	float x1,x2,x0;
	do
	{
		cout<<"ÇëÊäÈë³õÖµx1ºÍx2£º";
		cin>>x1>>x2;
	}while(f(x1)*f(x2)>0);
	do
	{
		x0=(x1+x2)/2;
		if(f(x0)*f(x1)>0)
			x1 = x0;
		else
			x2 = x0;
	}while(fabs(f(x0))>1e-5);
	cout <<"x0= "<<x0<<endl;
	return 0;
}