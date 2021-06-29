#include <iostream>
using namespace std;
class Complex{
private:
	double real;
	double image;
public:
	Complex(){}
	Complex(double re,double im){real = re; image=im;}
	Complex operator + (Complex &);
	friend Complex operator - (Complex &, Complex &);
	Complex operator += (Complex &);
	friend Complex operator * (Complex &, Complex &);
	friend istream& operator >> (istream&, Complex &);
	friend ostream& operator << (ostream &, Complex &);
};
Complex Complex::operator + (Complex &c)
{
	Complex cc;
	cc.real = real + c.real;
	cc.image = image + c.image;
	return cc;
}
Complex Complex::operator += (Complex &c)
{
	real=real+c.real;
	image=image+c.image;
	return *this;
}
Complex operator - (Complex &c1, Complex &c2)
{
	Complex cc;
	cc.real=c1.real-c2.real;
	cc.image=c1.image-c2.image;
	return cc;
}
Complex operator * (Complex &c1, Complex &c2)
{
	Complex cc;
	cc.real=c1.real*c2.real-c1.image*c2.image;
	cc.image=c1.real*c2.image+c1.image*c2.real;
	return cc;
}
istream& operator >> (istream &is, Complex &c)
{
	cout<<"请输入复数数据的实部：";
	is>>c.real;
	cout<<"请输入复数数据的虚部： ";
	is>>c.image;
	return is;
}
ostream& operator << (ostream &os, Complex &c)
{
	if(c.image>1e-5)
		os<<c.real<<'+'<<c.image<<'i'<<endl;
	else if(c.image<-1e-5)
		os<<c.real<<'-'<<(-c.image)<<'i'<<endl;
	else
		os<<c.real<<endl;
	return os;
}
int main()
{
	Complex c1(1,2), c2(3,4), c3;
	c3=c1+c2;
	cout<<"c1 = "<<c1;
	cout<<"c2 = "<<c2;
	cout<<"c1+c2 = "<<c3;
	c3=c1-c2;
	cout<<"c1-c2 = "<<c3;
	c3=c1*c2;
	cout<<"c1*c2 = "<<c3;
	c1+=c2+=c2;
	cout<<"c1+=c2+=c2: "<<c1<<endl;
	cin>>c1>>c2;
	c3=c1+c2;
	cout<<"c1 = "<<c1;
	cout<<"c2 = "<<c2;
	cout<<"c1+c2 = "<<c3;
	c3=c1-c2;
	cout<<"c1-c2 = "<<c3;
	c3=c1*c2;
	cout<<"c1*c2 = "<<c3;
	c1+=c2+=c2;
	cout<<"c1+=c2+=c2: "<<c1<<endl;
	return 0;
}