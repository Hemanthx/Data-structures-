#include<bits/stdc++.h>
using namespace std;
int findsmallest(int arr[] , int n){
	int res =1;
	for(int i=0;i<n && arr[i]<=res;i++){
		res = res+arr[i];
	}
	return res;
}

int main(){
	int arr[10],i,j,k,l,m,n;
	cout<<"\n Enter number of elements";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\n Enter element"<<i+1<<":";
		cin>>arr[i];
	}
	int temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int ans =findsmallest(arr,n);
	cout<<ans;
	return 0;
}