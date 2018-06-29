#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
struct node *newnode(int data){
	struct node*temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void vertical_view(struct node *temp , int hd , map <int , vector<int> > & m){
	if(temp==NULL)
		return;
	m[hd].push_back(temp->data);
	vertical_view(temp->left , hd-1,m);
	vertical_view(temp->right , hd+1,m);

}
void print(struct node *temp){
	map < int , vector <int> > m;
	int hd =0 ;
	vertical_view(temp , hd , m);
	map<int , vector<int> > :: iterator it;
	for(it=m.begin();it!=m.end();++it){
		for(int i =0 ; i<it->second.size();++i){
			cout<<it->second[i]<<" "<<endl;
		}
	}
}
int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    root->right->left->right = newnode(8);
    root->right->right->right = newnode(9);
    print(root);
    return 0;
}