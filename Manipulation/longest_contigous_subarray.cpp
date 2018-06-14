// {1,2,3,4} 
//{10,12,13}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[10],i,j,k,n,m;
	cout<<"\n Enter number of elements:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\n Enter element"<<i+1<<":";
		cin>>arr[i];
	}
	int temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int count =1;
	//sorted array
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[j]-arr[i]==1){
				count++;
			}
		}
	}
	cout<<"\n Length of longest contigous sub array"<<count;
	return 0;
}