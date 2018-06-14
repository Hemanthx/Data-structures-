//Extended Euclidean algorithm to find out GCD
// ax - by = gcd(a,b)
#include<bits/stdc++.h>
using namespace std;
int euclid(int a , int b , int *x , int *y){
	if(a==0){
		*x = 0;
		*y=1;
		return b;
	}
	int x1,y1;
	int gcd =  euclid(b%a,b,&x1,&y1);
	//x = y1 - ⌊b/a⌋ * x1;
	//y = x1;
	*x=(y1 - (b/a)*x1);
	*y=x1;
	return gcd;
}
int main(){
	int x,y;
	int a = 35,b=15;
	int ans = euclid(a,b,&x,&y);
	cout<<ans;
	return 0;
}