#include<iostream>
using namespace std;
void TOH(int n, char BEG, char AUX, char END)
{
	if(n>=1)
	{
		TOH(n-1,BEG,END,AUX);
		cout<<BEG<<END<<"\n";
		TOH(n-1,AUX,BEG,END);
	}
}
int main()
{
	TOH(4,'A','B','C');
	return 0;
}
