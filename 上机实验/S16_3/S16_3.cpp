#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream infile("cj.txt");
	ofstream outfile;
	outfile.open("cjout.txt");
	float score[300],sum=0;
	int i=0,n,n50=0,n60=0,n70=0,n80=0,n90=0;
	infile>>score[0];
	while(score[i])
	{
		i++;
		infile>>score[i];
	}
	n=i;
	for(i=0;i<n;i++)
	{
		sum+=score[i];
		if(score[i]<60)
		n50++;
		else if(score[i]<70)
		n60++;
		else if(score[i]<80)
		n70++;
		else if(score[i]<90)
		n80++;
		else
		n90++;
	}
	float average;
	average = sum/n;
	outfile<<"总人数："<<n<<endl;
	outfile<<"\n平均成绩："<<average<<endl;
	outfile<<"90分以上："<<n90<<"名，比率："<<(1.0*n90/n)<<endl;
	outfile<<"80分以上："<<n80<<"名，比率："<<(1.0*n80/n)<<endl;
	outfile<<"70分以上："<<n70<<"名，比率："<<(1.0*n70/n)<<endl;
	outfile<<"60分以上："<<n60<<"名，比率："<<(1.0*n60/n)<<endl;
	outfile<<"不及格："<<n50<<"名，比率："<<(1.0*n50/n)<<endl;
	infile.close();
	outfile.close();
	return 0;
}