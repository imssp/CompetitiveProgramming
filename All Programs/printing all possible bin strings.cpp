#include<iostream>
using namespace std;
void bin(int n,char a[])
{
	if(n<1)
	cout<<"\n"<<a;
	else
	{
		a[n-1]='0';
		bin(n-1,a);
		a[n-1]='1';
		bin(n-1,a);
	}
}
int main()
{
	char a[4];
	bin(4, a);
	return 0;
}
