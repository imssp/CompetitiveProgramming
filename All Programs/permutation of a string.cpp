#include<iostream>
using namespace std;
void swap(char &x, char &y)
{
	char ch;
	ch= x;
	x= y;
	y= ch;
}
void permutation(string s, int i, int n)
{
	static int count; 
	int j;
	if(i==n)
	{
		count++;
		cout<<count<<". "<<s<<"\t";
	}
	else
	{
		for(j=i; j<s.length(); j++)
		{
			swap(s[i], s[j]);
			permutation(s, i+1, n);
			swap(s[i], s[j]);
		}
	}
}
int main()
{
	string str;
	cout<<("Enter a string:\t");
	cin>>str;
	cout<<endl<<"The permutations of the given string are:";
	permutation(str, 0, str.length()-1);
	return 0;
}
