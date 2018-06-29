#include<bits/stdc++.h>
using namespace std;
struct node{
	char ch;
	node *left, *right;
};
struct node *newnode(char ch){
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->ch = ch;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void inorder(struct node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->ch<<" ";
	inorder(root->right);
}
void preorder(struct node*root1 , struct node*root2 , int level){
	if(root1==NULL || root2 == NULL)
		return ;
	if(level%2==0)
		swap(root1->ch,root2->ch);
	preorder(root1->right,root2->left,level+1);
	preorder(root1->left,root2->right,level+1);
}
void reverse(struct node*root){
	preorder(root->right,root->left,0);
}
int main(){
	node *root = newnode('a');
	root->left = newnode('b');
	root->right = newnode('c');
	root->left->right = newnode('e');
	root->left->left = newnode('d');
	root->right->left = newnode('f');
	root->right->right = newnode('g');
	root->left->left->left = newnode('h');
	root->left->left->right = newnode('i');
	root->left->right->left = newnode('j');
	root->left->right->right = newnode('k');
	root->right->left->left = newnode('l');
	root->right->left->right = newnode('m');
	root->right->right->left = newnode('n');
	root->right->right->right = newnode('o');
	// before reversing 
	inorder(root);
	cout<<endl;
	reverse(root);
	//after reversing 
	inorder(root);
	return 0;
}