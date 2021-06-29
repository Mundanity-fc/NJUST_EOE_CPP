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
		cout<<"�������"<<endl;
		return R;
	}
	R=Q;
	return R;
}
istream& operator >> (istream &is, RMB &Q)
{
	cout<<"������Ԫ��";
	is>>Q.yuan;
	cout<<"������ǣ�";
	is>>Q.jiao;
	cout<<"������֣�";
	is>>Q.fen;
	return is;
}
ostream& operator << (ostream &os, RMB &Q)
{
	if(Q.yuan==0&&Q.jiao==0&&Q.fen==0)
	{
		cout<<Q.yuan<<"Ԫ"<<Q.jiao<<"��"<<Q.fen<<"��";
		return os;
	}
	if(Q.yuan>0)
		cout<<Q.yuan<<"Ԫ";
	if(Q.jiao>0)
		cout<<Q.jiao<<"��";
	if(Q.fen>0)
		cout<<Q.fen<<"��";
	return os;
}
int main()
{
	RMB Q1,Q2,Q3;
	cin>>Q1;
	cout<<"��һ��Ǯ�У�"<<Q1<<endl;
	cin>>Q2;
	cout<<"�ڶ���Ǯ�У�"<<Q2<<endl;
	char op;
	cout<<"����������Ǯ��������ţ�+��-����";
	cin>>op;
	switch(op)
	{
	case '+':
		cout<<"���� "<<Q1<<" + "<<Q2<<" ��ֵ��";
		Q3=Q1+Q2;
		cout<<"���Ϊ��"<<Q3<<endl;
		break;
	case '-':
		cout<<"���� "<<Q1<<" - "<<Q2<<" ��ֵ�� ";
		Q3=Q1-Q2;
		cout<<"���Ϊ��"<<Q3<<endl;
		break;
	default:
		cout<<"�����˴���Ĳ����������򼴽��˳���";
		return 0;
	}
	return 0;
}