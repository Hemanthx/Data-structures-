//Implemenatation Of Primality Test
// Fermats Method - Little theorem
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
int n , a , b , ans;
bool value = false;
cout<<"\n Enter the number";
cin>>n;
a = 2;
while(a<n-2){
	ans = pow(a,n-1);
	ans = ans%n;
	if(ans == 1){
		value = true;
		break;
	}
	a++;
}
if(value)
	cout<<"\n Probably a Prime number";
else
	cout<<"\n Probably not a prime number";
return 0;
}