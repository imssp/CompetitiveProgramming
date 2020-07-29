#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		string data;
		Node *next;
};

void push(Node **head, string x) //pointer to a pointer 
{
	Node *temp= new Node();
	temp->data= x;
	temp->next= *head;
	*head= temp;
	
}
/*
  Node* push(Node *head, string x) //pointer to a pointer 
{
	Node *temp= new Node();
	temp->data= x;
	temp->next= head;
	head= temp;
	return head;
	
}
*/
void print(Node *head)//pointer storing the value stored in another pointer
{   cout<<"the list is";
    
	while(head!= NULL)
	{
		cout<< head->data<<" ";
		head= head->next;
	}
	cout<<"\n";
}

int main()
{
	/*Node *head= NULL;
	Node *second= NULL;
	Node *third= NULL;
	
	head= new Node();
	second=new Node();
	third= new Node();
	
	head->data= 1;
	head->next= second;
	
	second->data=2;
	second->next= third;
	
	third->data=3;
	third->next= NULL;
	
	printlist(head);
	return 0;
	*/
	
	Node *head= new Node();
	int n;
	cout<<"how many names will u insert?";
	cin>>n;
	string x;
	for(int i=0; i< n; i++)
	{   
	    cout<<"Entr name:";
	    cin>>x;
		push(&head, x);  // head= push(head,x);
		print(head);
		
		
	}
	return 0;
	
}
