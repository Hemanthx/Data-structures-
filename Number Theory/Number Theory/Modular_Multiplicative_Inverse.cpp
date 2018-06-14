// To find out modular multiplicative Inverse
// a = 10 b =17
// In the ring from 10 to 17 we must find  a number such that
// (10*12) mod 17 = 1 , 12 is the modulo inverse of 3
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,ans,i,j;
	cout<<"\n Enter Value Of a :";
	cin>>a;
	cout<<"\n Enter Value Of b :";
	cin>>b;
	int temp;
	for(i=a;i<b;i++){
		if((a * i) % 17 == 1){
			temp = i;
			break;
		} 
	}
	cout<<"\n Modulo Inverse :";
	cout<<temp;
	return 0;
}