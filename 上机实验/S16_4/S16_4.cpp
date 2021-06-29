#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream infile;
	infile.open("str.txt");
	ofstream outfile;
	outfile.open("strout.txt");
	char string[100][30],cha[30];
	int x=0,n=0;
	infile.getline(string[0],30);
	while(strcmp(string[x],"End of String"))
	{
		n++;
		x++;
		infile.getline(string[x],30);
	}
	int flag=1;
	while(flag)
	{
		flag=0;
		for(int i=0;i<n-1;i++)
		if(string[i][0]>string[i+1][0])
		{
			flag=1;
			strcpy(cha,string[i]);
			strcpy(string[i],string[i+1]);
			strcpy(string[i+1],cha);
		}
	}
	outfile<<"字符串的个数为："<<n<<endl;
	outfile<<"排序后的字符串："<<endl;
	for(int i=0;i<x;i++)
	outfile<<string[i]<<endl;
	infile.close();
	outfile.close();
}