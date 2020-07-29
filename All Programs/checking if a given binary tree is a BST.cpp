/* Binary Search tree is a binary tree in which for each node, value of all nodes in left subtree is lesser or equaland value of all the nodesin right sub tree is greater.
*/
#include<bits/stdc++.h>
using namespace std;
#define int_max INFINITY
#define int_min -INFINITY

class Node {
	public:
	char data;
	struct Node *left;
	struct Node *right;
};

void Inorder(Node *root) {
	if(root == NULL) return;

	Inorder(root->left);  
	cout<<root->data;  
	Inorder(root->right);    
}

Node* Insert(Node *root,int data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}
 
int main() {
	/*Code To Test the logic
	  Creating an example tree
	            10
			   / \
			  7   9
			 / \   
			5   6   
	*/
	Node* root = NULL;
	root = Insert(root,10); root = Insert(root,9);
	root = Insert(root,7); root = Insert(root,6); 
	root = Insert(root,5);
	cout<<"Inorder: ";
	Inorder(root);
	cout<<"\n";
	return 0;
}

/*
class node
{ 
 public:
	int data;
	node* left;
	node* right;
};
node* insert(node *root,int data) {
	if(root == NULL) 
	{
		root = new node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = insert(root->left,data);
	else 
		root->right = insert(root->right,data);
	return root;
}
void print(node* root)
{
	if(root= NULL) return;
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);
}
int main()
{   node* root;
    root= NULL;
    root= insert(root,10);
    root= insert(root, 9);
    root= insert(root, 6);
    root= insert(root, 7);
    root= insert(root, 5);
    
    print(root);
    
	return 0;
	
}
*/
