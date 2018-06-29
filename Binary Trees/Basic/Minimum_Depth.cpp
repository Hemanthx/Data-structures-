//find minimum depth 
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;

};
struct node *newnode(int data){
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp-> data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void inorder(struct node *root){
	if(root!=NULL){
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
	}
}
int count =0;
void depth(struct node* temp){
	if(temp == NULL)
		return 0;
	if(temp->left!=NULL && temp->right==NULL){
		count++;
		depth(temp->right);
	}
	if(temp->left==NULL && temp->right!=NULL){
		count++;
		depth(temp->left);
	}
	if(temp->left!=NULL && temp->right!=NULL){
		depth(temp->left);
		depth(temp->right);
	}
}
int main(){
	node *root        = newnode(1);
    root->left        = newnode(2);
    root->right       = newnode(3);
    root->left->left  = newnode(4);
    root->left->right = newnode(5);
    depth(root);
    cout<<count;
    return 0;
}
