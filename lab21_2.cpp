#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *A,Rect *B){
	double maxx = max(A->x,B->x);
	double minx = min(A->x+A->w,B->x+B->w);
	double miny = min(A->y,B->y);
	double maxy = max(A->y-A->h,B->y-B->h);
	double overlapx = minx-maxx;
	double overlapy = miny-maxy;
	if(overlapx <=0 || overlapy <=0)return 0;
	return overlapx* overlapy;
}
int main(){
Rect R1 = {1,1,5,5};
Rect R2 = {2,2,5,5};	
cout << overlap(&R1,&R2);
}
