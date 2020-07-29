#include<bits/stdc++.h>
using namespace std;

bool isoperand( char c)
{
	if(c>= '0' && c<= '9') return true;
	if(c>= 'a' && c<= 'z') return true;
	if(c>= 'A' && c<= 'Z') return true;
	return false;
}

bool isoperator( char c)
{
	if( c == '+' || c == '-' || c == '*' || c == '/' || c == '^') return true;
	return false;
}
bool isrightassociative( char c)
{
	if(c == '^') return true;
	else return false;
}
int getweight(char x)
{   int weight=0;
	switch(x)
	{
		case '+': weight=1;break;
		case '-': weight=1;break;
		case '*': weight=2;break;
		case '/': weight=2;break;
		case '^': weight=3;break; 
	}
	return weight;
}
bool hashigherprecedence( char op1, char op2)
{
	int op1weight= getweight(op1);
	int op2weight= getweight(op2);
	if(op1weight==op2weight)
	{
		if(isrightassociative(op1)) return false;
		else return true;
	}
	if(op1weight>op2weight) return true;
	else return false;
}

string change(string str)
{
	stack <char> s;
	string postfix= " ";
	for(int i= 0; i<str.length(); i++)
	{
		if(str[i]==',' || str[i]==' ') continue;
		
		else if(isoperator(str[i]))
		{
			while(!s.empty() && s.top()!= '(' && hashigherprecedence(s.top(), str[i]))
			{
				postfix += s.top();
				s.pop();
			}
			s.push(str[i]);
		}
		
		else if(isoperand(str[i]))
		{
			postfix += str[i];
		}
		
		else if(str[i]== '(')
		{
			s.push(str[i]);
		}
		
		else if(str[i] == ')')
		{
			while(!s.empty() && s.top()!= '(')
			{
				postfix += s.top();
				s.pop();
			}
			s.pop();
		}
		
	}
	
	while(!s.empty())
	{
		postfix += s.top();
		s.pop();
	}
	return postfix;
}


int main()
{
	string infix;
	cout<<"Enter expression: ";
	cin>>infix;
	string postfix= change(infix);
	cout<<"The Postfix expression is : "<< postfix;
	return 0;
}
