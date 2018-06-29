// display a tree;
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
struct node * newnode(int data){
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
};
void print(struct node *root,int l){
	int i;
	if(!root) return;
	print(root->right,l+1);
	for(i=0;i<l;i++)
		cout<<"--> ";
	cout<<root->data;
	print(root->left,l+1);
}

int main(){
	node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(3);
	root->left->right = newnode(4);
	root->right->left = newnode(5);
	root->right->right = newnode(6);
	print(root,0);
	return 0;
}