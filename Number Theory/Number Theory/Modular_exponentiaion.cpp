//modular exponentiation
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	int x,y,z,ans;
	cout<<"\n Enter first input:";
	cin>>x;
	cout<<"\n Enter Second Input:";
	cin>>y;
	cout<<"\n Enter Third Input:";
	cin>>z;
	int ans1;
	ans1 = pow(x,y);
	ans = ans1%z;
	cout<<ans<<endl;
}