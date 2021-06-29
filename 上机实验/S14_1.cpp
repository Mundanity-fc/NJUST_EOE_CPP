#include <iostream>
#include <cmath>
using namespace std;
class Tri
{
	double a,b,c;
public:
	Tri(double x, double y, double z)
	{
		a=x; b=y; c=z;
	}
	double Peri()
	{
		return (a+b+c);
	}
	double Area()
	{
		double s=Peri()/2;
		double area=sqrt(s*(s-a)*(s-b)*(s-c));
		return area;
	}
	void Show()
	{
		cout<<"三角形的边长："<<a<<'\t'<<b<<'\t'<<c<<endl;
		cout<<"三角形的周长："<<Peri()<<endl;
		cout<<"三角形的面积："<<Area()<<endl<<endl;
	}
};
int main()
{
	Tri tri1(3,4,5),tri2(5,6,7);
	tri1.Show();
	tri2.Show();
	return 0;
}