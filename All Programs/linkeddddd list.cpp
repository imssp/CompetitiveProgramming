#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
};
Node* head;
void insert(int x)
{
	Node* temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;
}

void print()
{
    Node* temp= head;
    cout<<"list is:";
	while(temp!= NULL)
	{
		cout<<temp->data;
		temp= temp->next;
	}
	cout<<"\n";	
}
int main()
{
	head= NULL;
	cout<<"Enter the number of digits to be inserted? \n";
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the number \n";
		cin>>x;
		insert(x);
		print();
	
		
	}
	
	return 0;
}

