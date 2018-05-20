#include<bits/stdc++.h>
using namespace std;
int main(){

	int n , arr[10],i,j,k;
	cout<<"\n Enter number of elements (lt10)";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\n Enter element"<<i+1<<":";
		cin>>arr[i];
	}
	int sum =0;
	// calculate sum of array
	for(i=0;i<n;i++){
		sum = sum +arr[i];
	}
	for(i=0;i<n-2;i++){
		for(j=i+1;j<n-1;j++){
			for(k=j+1;k<n;k++)
				if((arr[i]+arr[j]+arr[k] )< sum){
					cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<"\t";
				}
				else
					break;
		}
	}
}