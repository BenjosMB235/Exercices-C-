#include <iostream>
#include "point2.h"
#include<cmath>

using namespace std;

const float pi = 3.141592653 ;
float angle (float, float) ;
 
point::point(float a, float b){
	x=a;
	y=b;
}
void point::deplace(float x2, float y2){
	x=x+x2;
	y=y+y2;
}
void point::homothetie(float hm){
	x*=hm;
	y*=hm;
}
void point::rotation(float th){
	float r=sqrt(x*x + y*y);
	float t=angle(x, y);
	t+=th;
	x=r*cos(t);
	y=r*sin(t);
}
float point::getAbcisse(){
	return x;
}
float point::getOrdonne(){
	return y;
}
float point::rho(){
	return sqrt(x*x + y*y);
}
float point::theta(){
	return angle(x, y);
}

float angle (float x, float y)
{ 
	float a = x ? atan (y/x) : 0 ;
	if (y<0) 
		if (x>=0) 
			return a + pi ;
	else 
		return a - pi ;
	return a ;
}
