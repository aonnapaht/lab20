#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *A,Rect *B){
   double x = min(A->w+A->x,B->w+B->x) - max(A->x,B->x);
   double y = min(A->y,B->y) - max(A->y-A->h,B->y-B->h);
   if(x*y < 0) return 0;
   return x*y;   
}
