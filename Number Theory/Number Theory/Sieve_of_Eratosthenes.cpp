//Calculate Primes till number n
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
	bool value = true;
	for( int i=2;i<n-2;i++){
		if(n%i==0){
			value = false;
		}	
	}
	if(value == false)
		return false;
	if(value == true)
		return true;
}
int main(){
	int n;
	cout<<"\n Enter the number:";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(prime(i)){
			cout<<i<<",";
		}
	}
	return 0;
}