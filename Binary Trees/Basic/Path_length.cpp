#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left , *right;
};
struct node *newnode(int data){
	struct node*temp = (struct node *)malloc(sizeof(struct node));
	temp -> data = data;
	temp -> left = NULL;
	temp -> right = NULL;
	return temp;
}
int pathlength(struct node *temp){
	if(temp==NULL)
		return 0;
	if(temp->right == NULL && temp->left == NULL)
		return 1;
	if(temp->right!=NULL)
		return pathlength(temp->right) +1;
	if(temp->left!=NULL)
		return pathlength(temp->left)+1;

}
int main(){
	node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->right = newnode(4);
	cout<<pathlength(root->left);
	return 0;
}