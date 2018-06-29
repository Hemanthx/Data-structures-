#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
struct node *newnode(int key){
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = key;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void display(struct node *temp){
	if(temp!=NULL){
	display(temp->left);
	cout<<temp->data<<" ";
	display(temp->right);
	}
}
struct node* insert(struct node*node , int key){
	if(node == NULL)
		return newnode(key);
	if( key < node->data)
		node->left = insert(node->left,key);
	else
		node->right = insert(node->right , key);
	return node;

}
struct node*minvaluenode(struct node*node){
	struct node* current = node;
	while(current->left!=NULL){
		current = current->left;
	}
	return current;
}
struct node* deletenode(struct node* root , int key){
	if(root == NULL)
		return root;
	if(key < root->data)
		root->left = deletenode(root->left , key);
	else if(key > root->data){
		root->right = deletenode(root->right,key);
	}
	else
	{
		if(root->left == NULL){
			struct node*temp = root->right;
			free(root);
		return temp;
	}
		else if(root->right == NULL){
			struct node*temp = root->left;
			free(root);
			return temp;
		}
		struct node*temp  = minvaluenode(root->right);
		root->data = temp->data;
		root->right = deletenode(root->right , temp->data);

	}
	return root;
}
int main(){
	struct node *root = NULL;
	root = insert(root,50);
	root = insert(root,30);
	root = insert(root,20);
	root = insert(root,40);
	root = insert(root,70);
	root = insert(root,60);
	root = insert(root,80);
	cout<<"\n Inorder traversal:";
	display(root);
	cout<<endl;
	cout<<"\n Inorder Traversal After deletion:";
	root = deletenode(root,20);
	display(root);
	return 0;
}