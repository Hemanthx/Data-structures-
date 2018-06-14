//implemenation of lucas theorem but with high memory capacity
// nCr % p should produce result for very large numbers:
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int lucas(int n , int r , int p ){
	int c[r+1];

	memset(c,0,sizeof(c));
	c[0]=1;

	for(int i =1;i<=n;i++){
		for(int j = min(i,r);j>0;j--){
			c[j] = (c[j]+c[j-1])%p;
		}
	}	
	return c[r];
}
int main(){
	int n = 100,r=90,p=45;
	cout<<lucas(n,r,p);
	return 0;
}