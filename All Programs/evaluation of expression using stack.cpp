#include<bits/stdc++.h>
using namespace std;

bool isoperator(char c)
{
	if ((c=='/') || (c=='-') || (c=='*') || (c=='+') )
	return true;
	else
	return false;
}

bool isnumeric(char c)
{
	if(c>= '0' && c<= '9') return true;
	else return false;
}

double eval(char c, double a, double b)
{
	if(c=='+') return (a+b);
	else if(c=='-') return (a-b);
	else if(c=='*') return (a*b);
	else if(c=='/') return (a/b);
	else {
	cout<<"Unexpected Error!"; return -1;}
}
double evaluate(string exp)
{
	stack<char> s;
	for(int i=0; i<exp.length(); i++)
	{
		if(exp[i]=' ' || exp[i]==',') continue;
		
		else if(isoperator(exp[i]))
		{
			double op2=s.top(); s.pop();
			double op1=s.top(); s.pop();
			double result= eval(exp[i], op1, op2);
			s.push(result);
		}
		else if(isnumeric(exp[i]))
		{
			int operand= 0; int j=i;
			while(j<exp.length() && isnumeric(exp[j]))
			{
				operand=(operand*10)+ (exp[i]-'0');
				j++;
			}
			s.push(operand);
		}
	}
	return s.top();
}


int main()
{
   string x;
   cout<<"Enter the postfix expression:-\n";
   getline(cin, x);
   double result= evaluate(x);
   cout<<"the above expression results to:- "<<result;
   return 0;
}
