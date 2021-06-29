#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a,b,c,delta,x1,x2;
	cin >>a>>b>>c;
	delta=b*b-4*a*c;
	if(delta<0) cout << "No Result";
	else if (delta==0) cout << (double)(-b+sqrt(delta))/(2*a);
	else{
		x1=(double)(-b+sqrt(delta))/(2*a);
		x2=(double)(-b+sqrt(delta))/(2*a);
		cout << "x1 is " << x1 << endl;
		cout << "x2 is " << x2;
	}
	return 0;
}