#include<iostream>
using namespace std;

class BstNode 
{ public:
	int data; 
	BstNode* left;
	BstNode* right;
};


BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
 
BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { 
		root = GetNewNode(data);
	}
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}

bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int findmin(BstNode* root)
{
	if(root == NULL)
	{
		cout<<"Tree is empty\n";
		return -1;
	}
	else if(root->left== NULL) return root->data;
	return findmin(root->left);
}
int findmax(BstNode* root)
{
	if(root == NULL)
	{
		cout<<"Tree is empty\n";
		return -1;
	}
	else if(root->right== NULL) return root->data;
	return findmax(root->right);
}

int findheight(BstNode* root)
{
	if(root== NULL)
	return -1;
	
	return max(findheight(root->left), findheight(root->right)) + 1;
}
int main() {
	BstNode* root = NULL;
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
	int x= findmin(root);
	int y= findmax(root);
	cout<<"min= "<<x<<" \n max: "<<y;
	int height= findheight(root);
	cout<<"\n height:"<< height;
	return 0;
}
