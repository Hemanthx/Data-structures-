#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool prime(int n){
	bool value = true;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			value = false;

	}
	return value;
}
void segment(int a, int b){
	while(a<=b){
		if(prime(a)){
			cout<<a<<" ";
		}
		a++;
	}
}
int main(){
	int a ,b;
	
	cin>>a>>b;
	segment(a,b);
	return 0;
}