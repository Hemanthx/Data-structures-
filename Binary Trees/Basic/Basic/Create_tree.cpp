#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
struct node* newnode(int data){
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node -> data = data;
	node -> left = NULL;
	node -> right = NULL;
	return node;
}
int main(){
	//     1
	//    / \
	//   2   3
	//  /
	// 4
	struct node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root -> left -> left = newnode(4);
	return 0;
}