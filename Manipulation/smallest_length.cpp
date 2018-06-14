#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[10],i,j,k,m,n;
	cout<<"\n Enter number of elements:";
	cin>>n;	
	for(i=0;i<n;i++){
		cout<<"\n Enter element"<<i+1<<":";
		cin>>arr[i];

	}
	int temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int current = 0;
	int count=0;
	cout<<"\n Enter sum value:";
	cin>>m;
	i=0;
	while(current<=m){
		count++;
		current=current + arr[i];
		cout<<arr[i]<<"\t"<<endl;
		i++; 
	}
	cout<<count;
	return 0;
}