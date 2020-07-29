#include<iostream>
using namespace std;

class node 
{ public:
	int data; 
	node* left;
	node* right;
};

node* insert(node* root,int data) {
	if(root == NULL) { 
		node* newnode= new node();
		newnode->data= data;
		newnode->left= newnode->right= NULL;
		root= newnode;
    	}
	else if(data <= root->data) {
		root->left = insert(root->left,data);
	}
	else {
		root->right = insert(root->right,data);
	}
	return root;
}
void print(node* root)
{
	if(root==NULL) return;
	print(root->left);
	cout<<root->data<<"\n";
	print(root->right);
}

bool isBSTutil(node* root, int minvalue, int maxvalue)
{
	if(root== NULL) return true;
	if(root->data > minvalue 
	    && root->data< maxvalue  
		&& isBSTutil(root->left, minvalue, root->data)
		&& isBSTutil(root->right, root->data, maxvalue))
		return true;
		
	else return false;
}
bool isaBST(node* root)
{
	return isBSTutil(root, INT_MIN, INT_MAX);
}
int main() {
	node* root = NULL;
	root = insert(root,15);	
	root = insert(root,10);	
	root = insert(root,20);
	root = insert(root,25);
	root = insert(root,8);
	root = insert(root,12);
	print(root);
	bool binary= isaBST(root);
	if(binary== true) cout<<"It is a binary search tree";
	else cout<<"it is not abinarry search tree";
	return 0;
}
