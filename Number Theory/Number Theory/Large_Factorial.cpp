// to Calculate factorial of a very large number
#include<bits/stdc++.h>
using namespace std;
#define max 500
int multiply(int arr[],int x , int size);
void fac(int n){
	int arr[max];
	arr[0]=1;
	int size = 1;
	for(int x = 2; x <=n ; x++){
		size = multiply(arr,x,size);
	}
	cout<<size;
	cout<<"Factorial:";
	for(int i=size;i>=0;i--)
		cout<<arr[i];
}

int multiply(int arr[],int x,int size){
	int carry =0 ;
	for(int i=0;i<size;i++){
		int prod = arr[i] * x + carry;
		arr[i] = prod%10;
		carry = prod/10;
	}
	while(carry){
		arr[size]=carry%10;
		carry = carry/10;
		size++;
	}
	return size;
}
int main(){
	fac(100);
	return 0;
}