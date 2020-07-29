#include<bits/stdc++.h>
using namespace std;

bool arepair(char a, char b)
{
	if(a=='(' && b==')') return true;
	if(a=='{' && b=='}') return true;
	if(a=='[' && b==']') return true;
	return false;
}
bool check(char a[])
{
	stack <char> c;
	int n= strlen(a);
	for(int i=0; i<n; i++)
	{
		if ((a[i] == '(') || (a[i] == '[') || (a[i] == '{'))
		{ 
		   c.push(a[i]);
		}
		else if( (a[i]==')') || (a[i]=='}') || (a[i]==']') )
		{ 
			if( c.empty() || !arepair(c.top(), a[i]) )return false;
		    else c.pop();
	    }
	}  
	return c.empty();
} 
int main()
{
	char a[100];
	cout<<"Input your string:\n";
    cin>>a;
    bool x =check(a);
    if (x== true) cout<<"\n its balanced.";
    else cout<<"Its not balanced.";
    return 0;
}
