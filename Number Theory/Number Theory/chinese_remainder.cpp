// chinese remainder
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,k;
	int x=1;
	int value;
	int arr[] = {3,4,5};
	int rem[] = {2,3,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	while(true){
		for(i=0;i<n;i++){
			if(x%arr[i]!=rem[i])
				break;
		}
		if(i==n){
			 value =x;
			break;
		}
		x++;
	}
	cout<<value;
	return 0;
}
