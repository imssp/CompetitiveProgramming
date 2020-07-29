#include<bits/stdc++.h>
using namespace std;

class node
{ public:
	int data;
    node* link;
};
node* top= NULL;
void push(int x)
{
	node* temp= new node;
	temp->data= x;
	temp->link= NULL;
	if(top == NULL)top= temp;
	else
	{
		temp->link= top;
		top= temp;	
	}
}
void pop()
{
	node* temp= top;
	if(top== NULL) return;
	top= top->link;
	delete temp;
}
void topp()
{
    if(top== NULL) 
	{
		cout<<" Stack is empty\n";
	}
	else    
    {
	     cout<<top->data<<"\n";
    }
}
void print()
{
	node* temp= top;
	while(temp!= NULL)
	{
		cout<<temp->data<<" ";
		temp= temp->link;
	}
	cout<<"\n";
}
int main()
{
	push(2); print();
	push(3); print();
	push(7);print();
	pop();print();
	push(9);print();
    return 0;
}
