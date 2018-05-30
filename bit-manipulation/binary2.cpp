//binary representation of a numberr
#include<bits/stdc++.h>
using namespace std;
int binary(unsigned int n){
	if(n>1){
		binary(n/2);
	}
	cout<<n%2;
}
int main(){
	unsigned int n,i,j,k;
	cout<<"\n Enter the number n";
	cin>>n;
	binary(n);
	return 0;
}