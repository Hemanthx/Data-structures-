//check if a given tree is a full binary tree or not
// a given tree is a full binary tree or not if it has either 2 or 0 childrens at all nodes
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
struct node* newnode(int data){
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void inorder(struct node *temp){
	while(temp!=NULL){
		inorder(temp->left);
		cout<<temp->data;
		inorder(temp->right);
	}
}
bool check(struct node *temp){
	if(temp == NULL)
		return true;
	if(temp->left == NULL && temp->right == NULL)
		return true;
	if(temp->left && temp->right){
		check(temp->left);
		check(temp->right);
	}
	else
		return false;
}
int main(){
	node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	root->right->left = newnode(6);
	root->right->right = newnode(7);
	if(check(root))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}