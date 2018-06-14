//Determine convex hull of a given set of points:
#include<bits/stdc++.h>
using namespace std;
struct Point {
	int x,y;
};
int direction(Point p , Point q , Point r){
	// y2-y1*x3-x2 - x2-x1*Y3-Y2
	int value = (q.y-p.y)*(r.x-q.x) - (q.x-p.x)*(r.y-q.y);
	if(value == 0)
		return 0;
	else if(value > 0)
		return 1;
	else 
		return 2;
}
void convex(Point points[] , int n){
	// find left most point
	// keep connecting and traversing points in the counter clockwise direction
	// until meet end point ie convergence 
	//otherwise conves hull not possible
	vector<Point> hull;
	if(n < 3){
		cout <<"\n Convex hull not possible";
		return ;
	}
	int l=0;
	// the left most point will have the least value of x 
	for(int i =1 ; i<n;i++){
		if(points[i].x < points[l].x)
			l=i;
	}
	int p=l;
	int q;
	do{
		hull.push_back(points[p]);
		q = (p+1)%n;
		for(int i =0;i<n;i++){
			if(direction(points[p],points[i],points[q])==2){
				q=i;
			}

		}
		p=q;

	}while(p!=l); // next point is not starting point 
	// if it is terminate
	for(int i =0 ; i<hull.size();i++){
		cout<<"("<<hull[i].x<<","<<hull[i].y<<"),";
	}
}
int main(){
	Point points[] = { {0,3},{2,2},{1,1},{2,1},{3,0},{0,0},{3,3}};
	int n = sizeof(points)/sizeof(points[0]);
	convex(points , n);
	return 0;

}