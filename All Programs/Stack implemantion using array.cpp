#include<bits/stdc++.h>
using namespace std;

#define maxsize 101
int a[maxsize];
int tp= -1;

void push(int x)
{
	if(tp== maxsize-1)
	{
		cout<<"Error stack overflow\n";
		return;
	}
	a[++tp]= x;
}
void pop()
{
	if(tp == -1)
	{
		cout<<"Error no elements to pop\n";
		return;
	}
	tp--;
}
int top()
{
	return a[tp];
}
void print()
{
	cout<<"Stack:";
	for(int i= 0; i<=tp; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	push(2);print();
	push(5);print();
	push(10);print();
	pop();print();
	push(12);print();
	return 0;
}
