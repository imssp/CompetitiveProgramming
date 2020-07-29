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
	
}
void insert(int x, int n)
{
   node* temp1= new node();
   temp1->data= x;
   temp1->next=NULL;
   	if(n==1)
   	{
   		temp1->next= head;
   		head= temp1;
   		return;
	   }
	node* temp2= head;
	for(int i=0; i<n-2; i++)
	{
		temp2= temp2->next;
	  }
	temp1->next= temp2->next;
	temp2->next= temp1;
}
void Delete(int n)
{
	node* temp1= head;
	if(n==1)
	{
		head=temp1->next;
		delete temp1;
		return;
	}
	for(int i=0; i<n-2; i++)
	{
		temp1= temp1->next;// temp1 points to (n-1)th node
	}
	node* temp2= temp1->next;// nth node
	temp1->next= temp2->next;//(n+1)th node
	delete temp2;// deletion or freeing the memory
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
	
	cout<<"\nNow enter the position where you want to insert: ";
	cin>>n;
	cout<<"Enter the element you want to insert: ";
	cin>>x;
	insert(x, n);
	print();
	cout<<"\n Enter the position you want to delete:";
	cin>>n;
	Delete(n);
	print();
	
	return 0;
}
