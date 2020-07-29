#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node* next;
};

node* makelist(int x, node *head)
{   
    node *temp= new node;
    temp->data=x;
	temp->next= NULL;
	if(head ==NULL) head= temp;
	else {
		node* temp1= head;
		while(temp1->next!= NULL) temp1=temp1->next;
		temp1->next=temp;
	}
	return head;
}
void print(node* head)
{
	if(head== NULL) return;
    cout<<head->data;
    print(head->next); 
}
void reverse(node* head)
{
	if(head== NULL) return;
    reverse(head->next);
	cout<<head->data; 
}

int main()
{
	node *head= NULL;
	int n,x;
	cin>>n;
	for(int i=0; i<n ;i++)
	{ 
	  cin>>x;
	  head= makelist(x, head);
		
	}
	/*head= makelist(2, head);
	head= makelist(4, head);
	head= makelist(6, head);
	head= makelist(5, head);*/
	print(head);
	cout<<"\n";
	reverse(head);
	return 0;
}
