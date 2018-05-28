#include<bits/stdc++.h>
using namespace std;
int magic(int n){
	int power =1 , answer =0;
	while(n){
		power = power*5;
		if(n&1){
			answer = answer +power;
		}
		n>>=1;
	}
	return answer;
}
int main(){
	int n;
	cout<<"\n Enter the nth number";
	cin>>n;
	//int m = 2 & 1;
	//cout<<m<<endl;
	int ans = magic(n);
	cout<<ans;
	return 0;
}
