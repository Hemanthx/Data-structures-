//Segmented seive
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
	bool val = true;
	for(int i=2;i<n;i++){
		if(n == 0 || n==1){
			return false;
		}
		if(n%i==0){
			val = false;
		}
	}
	return val;
}
int seive(int n1 , int n2){
	while(n1 < n2){
		if(prime(n1))
			cout<<n1<<",";
		n1++;
	}
}
int main(){
	int n;
	cout<<"\n Enter the value of n";
	cin>>n;
	int n1 = 1;
	while(n1<=n){
		seive(n1,n1+10);
		n1 = n1+10;
	}
	return 0;
}