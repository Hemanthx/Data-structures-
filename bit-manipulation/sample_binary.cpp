//sample representation of binary number of a decimal
#include<bits/stdc++.h>
using namespace std;
int binary(int n){
	int arr[100];
	int i=0;
	while(n>0){
		arr[i]=n%2;
		n=n/2;
		i++;
	}
	return arr;
}
int main(){
	int n;
	cout<<"\n Enter the number:";
	cin>>n;
	int array[100];
	array = binary(n);
	int size = sizeof(array)/sizeof(array[0]);
	int i;
	for(i=0;i<size;i++){
		cout<<array[i];
	}
	return 0;
}