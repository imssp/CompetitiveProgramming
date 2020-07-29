#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	if(a==b)
	return a;
	else if(a%b==0)
	return b;
	else if(b%a==0)
	return a;
	else
	{
		if(a>b)
		return gcd(a%b,b);
		else
		return gcd(a,b%a);
	}
}
int main()
{
	cout<<gcd(105,91);
	return 0;
}
