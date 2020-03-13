#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect,Rect);

int main(){
	Rect k1,k2;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> k1.x>>k1.y>>k1.w>>k1.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> k2.x>>k2.y>>k2.w>>k2.h;
	
	
	cout << "Overlap area = " << overlap(k1,k2);	
	return 0;
}

double overlap(Rect A,Rect B){
	double n;
	double m;
	double x1,x2,y1,y2;

	x1 = A.x+A.w;
	x2 = B.x+B.w;
	y1 = A.y-A.h;
	y2 = B.y-B.h;

    n= abs(max(A.x,B.x)+min(x1,x2));
    m= abs(min(A.y,B.y)-abs(max(y1,y2)));

   int j = n*m;
     
	 return j;
}
