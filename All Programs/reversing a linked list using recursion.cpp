#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node* next;
};
node *head;
void makelist(int x)
{   
    node *temp= new node;
    temp->data=x;
	temp->next= head;
    head =temp;
}
void print()
{   node* temp= new node;
    temp= head;
	while(temp!= NULL)
    {
    	cout<<temp->data;
        temp=temp->next;
    }
}
void reverse(node* p)
{   
	if(p->next== NULL)
	{
		head== p;
		return;
	}
	reverse(p->next);
	node* q= p->next;
	q->next=p;
	p->next= NULL;
}
int main()
{
	head= NULL;
	int n,x;
	cin>>n;
	for(int i=0; i<n ;i++)
	{ 
	  cin>>x;
	  makelist(x);
		
	}
	/*head= makelist(2, head);
	head= makelist(4, head);
	head= makelist(6, head);
	head= makelist(5, head);*/
	print();
	cout<<"\n";
	reverse(head);
	print();
	return 0;
}
