#include <iostream>
#include <cmath>
using namespace std;

double JS(double a,double b)
{
	double f1,f2,f0,x0;
	f1=a*a+3*a-4;
	f2=b*b+3*b-4;
	x0=(a*f2-b*f1)/(f2-f1);
	f0=x0*x0+3*x0-4;
	if(abs(f0)<1e-5) return x0;
	else
	{
		if(f0*f1<0) return JS(a,x0);
		if(f0*f1>0) return JS(x0,b);
	}
}

int main()
{
	double x1,x2;
	do
	{
		cout << "Please Input two number: ";
		cin>>x1>>x2;
	}while((x1*x1+3*x1-4)*(x2*x2+3*x2-4)>4);
	cout << "The Result is " << JS(x1,x2) << endl;
	return 0;
}