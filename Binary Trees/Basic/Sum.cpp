//maximum path sum in a tree
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
struct node *newnode(int data){
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void traversal(node *temp){
	if(temp!=NULL){
		traversal(temp->left);
		cout<<temp->data<<" ";
		traversal(temp->right);
	}
}
int number = 0;
int sum(node *temp){
	if(temp!=NULL){
	number = number + temp->data;
	sum(temp->left);
	sum(temp->right);
	}
	return number;
}
int main(){
	node *root        = newnode(1);
    root->left        = newnode(2);
    root->right       = newnode(3);
    root->left->left  = newnode(4);
    root->left->right = newnode(5);
    int ans = sum(root);
    traversal(root);
    cout<<endl;
    cout<<ans;
    return 0;
}