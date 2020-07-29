#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node* next;
};

node *head;// global variable

void makelist(int x)
{
	node* temp= new node;
	temp->data= x;
	temp->next= head;
	head=temp;
}
void print()
{
	node* temp= head;
	cout<<"The list is: \n";
	while(temp!=NULL)
	{
		cout<< temp->data<<" ";
		temp= temp->next;
	}
	cout<<"\n";
	
}
void reverse()
{
	node *current, *prev, *next;
	current= head;
	prev= NULL;
	while(current!= NULL)
	{
		next= current->next;
		current->next= prev;
		prev= current;
		current= next;
	}
	head = prev;
}

int main()
{   head = NULL;
	int n,x;
	cout<<"First lets make the list, so enter the number of element:\n";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"Enter the element:";
		cin>>x;
		makelist(x);
	}
	print();
	reverse();
	cout<<"The reverse of the list is: \n";
	print();
	return 0;
}
