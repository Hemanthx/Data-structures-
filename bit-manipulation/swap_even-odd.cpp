#include<bits/stdc++.h>
using namespace std;
int swapalal(unsigned int x){
	unsigned int even_bits = x & 0xAAAAAAAA;
	unsigned int odd_bits = x & 0x55555555;
	even_bits >>= 1;
	odd_bits <<= 1;
	return (odd_bits|even_bits);
}
int main(){
	unsigned int x;
	cout<<"\n Enter value for x";
	cin>>x;
	unsigned int y = swapalal(x);
	cout<<y;
}