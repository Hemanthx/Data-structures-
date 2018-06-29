#include<bits/stdc++.h>
#include <tr1/unordered_map>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
struct node *newnode(int data){
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->right = NULL;
	temp->left = NULL;
	return temp;
}
void topview(struct node *temp){
	unordered_map<int, int> m;
	queue<pair<node*,int> >q;
	q.push(make_pair(temp , 0));
	while(!q.empty()){
		pair<node* , int>p = q.front();
		node *n = p.first;
		int val = p.second;
		q.pop();
		if(m.find(val)==m.end()){
			m[val] = n->data;
			cout<<n->data;

		}
		if(n->left!=NULL){
			q.push(make_pair(n->left,val-1));

		}
		if(n->right!=NULL){
			q.push(make_pair(n->right , val+1));
		}
	}
}
int main(){
    node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->right=newnode(4);
    root->left->right->right=newnode(5);
    root->left->right->right->right=newnode(6);
     
    topview(root);
    return 0;
}