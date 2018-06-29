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
struct node *LCA(struct node *root,int n1 , int n2)
{
	if(root == NULL)
		return NULL;
	if(root->data > n1 && root-> data >n2)
		return LCA(root->left,n1,n2);
	else if(root->data < n1 && root->data < n2)
		return LCA(root->right , n1 , n2);
	else
		return root;
}
int main()
{
	node *root = newnode(20);
	root->left               = newnode(8);
    root->right              = newnode(22);
    root->left->left         = newnode(4);
    root->left->right        = newnode(12);
    root->left->right->left  = newnode(10);
    root->left->right->right = newnode(14);
    int n1 = 14 , n2 = 8;
    node *temp = LCA(root , n1 , n2);
    cout<<temp->data;
    return 0;
}	