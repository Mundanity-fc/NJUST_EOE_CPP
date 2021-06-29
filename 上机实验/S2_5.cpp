#include <iostream>
using namespace std;

int main()
{
	double a,b,out;
	char o;
	cin>>a>>o>>b;
	switch(o)
	{
	case '+':
		out=a+b;
		break;
	case '-':
		out=a-b;
		break;
	case '*':
		out=a*b;
		break;
	case '/':
		if(b==0) cout<<"Cannot do it";
		else out=a/b;
		break;
	}
	if(b==0);
	else cout << out;
	return 0;
}