#include <iostream>
using namespace std;

int main()
{
	float y=1,t=1;
	int n;
	cout<<"Input n: ";
	cin>>n;
	for(int i=2;i<=n;i++){
		t=t*i;
		y=y+t;
	}
	cout<<"1!+2!+3!+...+'"<<n<<"!="<<y<<endl;
	return 0;
}