#include<bits/stdc++.h>
using namespace std;
int exor(int a, int b){
	return a^b;
}
int main(){
	int m,n,i,j,l;
	int arr[10];
	cout<<"\n Enter number of elements";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\n Enter element"<<i+1<<":";
		cin>>arr[i];
	}
	int ans = INT_MIN;
	int ans1;
	for(i=0;i<n-1;i++){
		for(j=0;j<n;j++){
			ans1 = exor(arr[i],arr[j]);
			ans = max(ans,ans1);
		}
	}
	cout<<"Max subarray exor value";
	cout<<ans;
	return 0;
}
