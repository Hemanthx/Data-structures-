#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"\n Enter element 1:";
	int n;
	cin>>n;
	cout<<"\n Enter element 2:";
	int m;
	cin>>m;
	ans = ((n|m) & (~n|~m));
	cout<<"\n XOR:"<<ans<<endl;
}