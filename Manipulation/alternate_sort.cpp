#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr1[10],arr2[10],m,n,i,j,k,arr3[20];
	cout<<"\n Enter number of elements in array 1:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\n Enter element:"<<i+1;
		cin>>arr1[i];
	}
	cout<<"\n Enter number of elements in array 2:";
	cin>>m;
	for(i=0;i<m;i++){
		cout<<"\n Enter element:"<<i+1;
		cin>>arr2[i];
	}
	i=0;
	j=0;
	k=0;
	while(i<n && j<m){
		int arr3[k] = arr1[i++];
		arr3[k+1] = arr2[j++];
		k++;
	}
	cout<<arr3;
	return 0;
}