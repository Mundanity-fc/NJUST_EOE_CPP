#include <iostream>
using namespace std;
class RMB{
private:
	int yuan,jiao,fen;
public:
	RMB(int x=0,int y=0,int z=0)
	{
		yuan=x;
		jiao=y;
		fen=z;
	}
	RMB operator + (RMB &);
	friend RMB operator - (RMB &, RMB &);
	friend istream& operator >> (istream&, RMB &);
	friend ostream& operator << (ostream &, RMB &);
	void Show();
};
RMB RMB::operator + (RMB &Q2)
{
	RMB Q1;
	Q1.fen=fen+Q2.fen;
	Q1.jiao=jiao+Q2.jiao;
	Q1.yuan=yuan+Q2.yuan;
	if(Q1.fen>10)
	{
		Q1.fen=Q1.fen-10;
		Q1.jiao++;
	}
	if(Q1.jiao>10)
	{
		Q1.jiao=Q1.jiao-10;
		Q1.yuan++;
	}
	return Q1;
}
RMB operator - (RMB &Q1, RMB &Q2)
{
	RMB Q,R;
	Q.yuan=Q1.yuan-Q2.yuan;
	Q.jiao=Q1.jiao-Q2.jiao;
	Q.fen=Q1.fen-Q2.fen;
	if(Q.fen<0)
		{
			Q.jiao--;
			Q.fen=Q.fen+10;
		}
	if(Q.jiao<0)
		{
			Q.yuan--;
			Q.jiao=Q.jiao+10;
		}
	if(Q.yuan<0)
	{
		cout<<"不能相减"<<endl;
		return R;
	}
	R=Q;
	return R;
}
istream& operator >> (istream &is, RMB &Q)
{
	cout<<"请输入元：";
	is>>Q.yuan;
	cout<<"请输入角：";
	is>>Q.jiao;
	cout<<"请输入分：";
	is>>Q.fen;
	return is;
}
ostream& operator << (ostream &os, RMB &Q)
{
	if(Q.yuan==0&&Q.jiao==0&&Q.fen==0)
	{
		cout<<Q.yuan<<"元"<<Q.jiao<<"角"<<Q.fen<<"分";
		return os;
	}
	if(Q.yuan>0)
		cout<<Q.yuan<<"元";
	if(Q.jiao>0)
		cout<<Q.jiao<<"角";
	if(Q.fen>0)
		cout<<Q.fen<<"分";
	return os;
}
int main()
{
	RMB Q1,Q2,Q3;
	cin>>Q1;
	cout<<"第一堆钱有："<<Q1<<endl;
	cin>>Q2;
	cout<<"第二堆钱有："<<Q2<<endl;
	char op;
	cout<<"输入这两对钱的运算符号（+或-）：";
	cin>>op;
	switch(op)
	{
	case '+':
		cout<<"计算 "<<Q1<<" + "<<Q2<<" 的值：";
		Q3=Q1+Q2;
		cout<<"结果为："<<Q3<<endl;
		break;
	case '-':
		cout<<"计算 "<<Q1<<" - "<<Q2<<" 的值： ";
		Q3=Q1-Q2;
		cout<<"结果为："<<Q3<<endl;
		break;
	default:
		cout<<"输入了错误的操作符，程序即将退出。";
		return 0;
	}
	return 0;
}