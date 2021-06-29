#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double s,l,a,b,c;
	cin >>a>>b>>c;
	l=a+b+c;
	s=sqrt((double)(l/2)*(l/2-a)*(l/2-b)*(l/2-c));
	cout << s;
	return 0;
}