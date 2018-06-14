#include<bits/stdc++.h>
using namespace std;
void zig(int array[],int n)
{
	bool flag = true;
	for (int i=0;i<n-2;i++)
	{
	if(flag=1)
	{
		if(array[i]>array[i+1])
			swap(array[i],array[i+1]);
	}
	else
	{
		if(array[i]<array[i+1])
			swap(array[i],array[i+1]);
	}
	flag = !flag;
	}
}
int main()
{
	
	int arr[] = {3,4,6,2,7,4,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	zig(arr,n);
	for(int i=0;i<n;i++)
	{
	cout<<arr[i];
	}
}