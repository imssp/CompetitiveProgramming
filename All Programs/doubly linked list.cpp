
/* Doubly Linked list
advantages of doubly linked list
1- we can look up in both direction i.e. both forward and backward.
2- and the ability to look at the previous and also the next node at the sametime makes life more easier.
disadvantages of doubly linked list
1- having to use extra memory for pointer to previous node. for eg- in a single linked list of integers, a node is of 8 bytes whereas in doubly linked its of 12 bytes
2- we have be extra careful while reseting a link during deletion or insertion.
Now lets see the implementation :-
*/
#include<bits/stdc++.h>
using namespace std;
class node
{   public:
	int data;
	node* next;
	node* prev;
};
node* head;
node* getnewnode(int x)
{
	node* newnode= new node;
	newnode->data= x;
	newnode->prev= NULL;
	newnode->next= NULL;
	return newnode;
}
void insertathead(int x)
{
	node* temp= getnewnode(x);
	if(head== NULL)
	{
		head= temp;
		return;
	}
	head->prev= temp;
	temp->next= head;
	head= temp;
   	/*node* temp1= head;                               // to add at tail;
 	while(temp1->next!=NULL) temp1=temp1->next;
	temp1->next= temp;
	temp->prev= temp1;*/
	
}
void print()
{
	node* temp= head;
	cout<<"Forward:";
	while(temp!= NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<"\n";
}
void reverseprint()
{
	node* temp= head;
	if(temp== NULL) return;
	while(temp->next!= NULL) temp=temp->next;
	cout<<"Reverse:";
	while(temp!= NULL)
	{
		cout<<temp->data;
		temp= temp->prev;
	}
	cout<"\n";
	
}
int main()
{
	head= NULL;
	insertathead(2);
	insertathead(3);
	insertathead(4);
	print();
	reverseprint();
    return 0;
}
