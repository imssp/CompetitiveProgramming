#include<iostream>
using namespace std;
long fact(int n)
{
	if (n>0)
		return (n*fact(n-1));
	else
	    return 1;
}
int main()
{
	long factorial= fact(5);
	cout<<factorial;
	return 0;
}
