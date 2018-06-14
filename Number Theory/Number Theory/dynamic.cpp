//dyanmic
//n=10 r=2 p=13
//ncr mod p
// ncr = fac(n)/(fac(n-r)*fac(r))
#include<bits/stdc++.h>
using namespace std;
int fac(int n){
	int prod=1;
	while(n!=0){
		prod = prod*n;
		n--;
	}
	return prod;
}
int main(){
	int n =10;
	int r=2;
	int p = 13;
	int ans1 = fac(n);
	int ans2 = fac(r);
	cout<<ans2<<endl;
	int ans3 = fac(n-r);
	cout<<ans3<<endl;
	int ans = ans1/(ans2*ans3);
	cout<<ans<<endl;
	int answer = ans%p;
	cout<<answer;
	return 0;
}