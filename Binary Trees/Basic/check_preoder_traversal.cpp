//check if given tree can be oreoder bst or mot
#include<bits/stdc++.h>
using namespace std;
int check(int pre[], int n){
	int root = INT_MIN;
	stack <int> s;
	for(int i =0 ;i<n;i++){
		if(pre[i] < root)
			return false;
		else
			while(!s.empty() && s.top() < root){
				root = s.top();
				s.pop();
			}
			s.push(pre[i]);
	}
	return true;
}
int main(){
	int pre1[] = {40,30,35,80,100};
	int n = sizeof(pre1)/sizeof(pre1[0]);
	bool value = check(pre1 , n);
	if(value)
		cout<<"true";
	else 
		cout<<"false";
	return 0;
}