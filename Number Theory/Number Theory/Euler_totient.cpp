// implementation of the Eulers totient Function
// computes the Greatest common divisor and Checks for relative prime
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(a==0)
		return b;
	else
		return gcd(b%a,a);
}
int main(){
	int n;
	int i,j,k;
	cout<<"\n Enter the Number n";
	cin>>n;
	int ans;
	for(i=1;i<=n;i++){
		ans = gcd(i,n);
		cout<<"EulerPhi("<<i<<")="<<ans<<endl;
	}
	return 0;
}