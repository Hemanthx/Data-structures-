#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int arr[10];
	int i,j,k,m;
	cout<<"\n Enter size of array";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\n Enter element "<<i+1<<":";
		cin>>arr[i];
	}
	int temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j]= temp;
			}
		}
	}
	int count[10];
	for(i=0;i<n;i++){
		count[i]=0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count[i]=count[i]+1;
			}
		}
	}
//	for(i=0;i<n;i++){
//		cout<<count[i]<<endl;
//	}
	cout<<"\n Answer is :";
	for(i=0;i<n;i++){
		if(count[i]==1){
			cout<<arr[i];
		}
	}
	return 0;

}