#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node* next;
};

node *head= NULL;
void makelist(int x)
{
	node* temp= new node();
	temp->data= x;
	temp->next= head;
	head=temp;
}

int main()
{   
	int n,x;
	cout<<"First lets make the list, so enter the number of element:\n";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"Enter the "<<i<<"th element:";
		cin>>x;
		makelist(x);
	}
	
	return 0;
}
