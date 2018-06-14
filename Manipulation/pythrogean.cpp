#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[10],i,j,k,n,flag=0;
	int x,y,z;
	cout<<"\n Enter the number of elements";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\n Enter element"<<(i+1);
		cin>>arr[i];
	}
	for(i=0;i<n-2;i++)
	{
		for(j=0;j<n-1;j++){
			for(k=0;k<n;k++){
				x = arr[i]*arr[i];
				y=arr[j]*arr[j];
				z=arr[k]*arr[k];
				if(x==y+z || y==x+z || z==x+y)
					flag =1;
			}
		}
	}
	if(flag == 1)
		cout<<"yes";
	else
		cout<<"no";
}