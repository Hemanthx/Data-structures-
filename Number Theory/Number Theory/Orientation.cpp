// To determine if a given set of points is oriented counter clockwise , clockwise or are colinear ie in a stright line
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x1,y1,x2,y2,x3,y3;
	cout<<"P1:";
	cout<<"x1:";
	cin>>x1;
	cout<<"y1:";
	cin>>y1;
	cout<<"P2:";
	cout<<"x2:";
	cin>>x2;
	cout<<"y2:";
	cin>>y2;
	cout<<"P3:";
	cout<<"x3:";
	cin>>x3;
	cout<<"y3:";
	cin>>y3;
	//int sigma = (y2-y1)/(x2-x1);
	//int tou = (y3-y2)/(x3-x2);
	int value = (y2-y1)*(x3-x2) - (y3-y2)*(x2-x1);
	if(value ==0)
		cout<<"colinear";
	else if(value > 0 )
		cout<<"clockwise";
	else
		cout<<" counter clockwise";
	return 0;

}