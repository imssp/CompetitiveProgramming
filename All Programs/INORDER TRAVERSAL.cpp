class Node{
	int data;
	Node* right;
	Node* left;
	Node(int data): data{data}, right{nullptr}, left{nullptr};
};

Node* insert(Node *head,int data){
	if(head == NULL) return new Node(data);
	if(head->data > data)
		head->left= insert(head->left,data);
	else
	    head->right=insert(head->right,data);
		
	return head;		
}

void printInorder(Node* head){
	if(head== NULL) return;
	printInorder(head->left);
	cout<<head->data<<" ";
	printInorder(head->right);
}
int main()
{
	int N, val;
	cin>> N;
	cin>> val;
	n--;
	Node *head= insert(nullptr, val)
	while(N--){
		cin>> val;
		insert(head,val);
	}
	printInorder(head);
	return 0;
}
