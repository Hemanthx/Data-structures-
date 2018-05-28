#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,arr[10],i,j;
	cout<<"\n Enter number of elements";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\n Enter element"<<i+1<<":";
		cin>>arr[i];
	}
	int count =0;
	int x;
	int ans=0;
	for(i=0;i<32;i++){
		for(j=0;j<n;j++){
			if(arr[j] &(1<<i)){
				++count;
			}
		}
		ans = ans+(count*(n-count)*2);
	}
	cout<<"\n Sum:"<<count;
	return 0;
}