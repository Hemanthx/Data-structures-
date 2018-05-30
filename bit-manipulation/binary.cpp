// binary representation of numbers from 1 - 10
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ;
	unsigned int x;
	cout<<"\n Enter a given number :";
	cin>>n;
	int arr[10];
	int i=0;
	while(n>0){
		if(n%2==0){
			arr[i++]=0;
			n=n/2;
		}
		else{
			arr[i++]=1;
			n=n/2;
		}
	}
	while(i>=0){
		cout<<arr[i];
		i--;
	}
	return 0;
}