#include <iostream>
#include "point1.h"

using namespace std;
 
point::point(float a, float b){
	x=a;
	y=b;
}
void point::deplace(float x2, float y2){
	x=x+x2;
	y=y+y2;
}
void point::affiche(){
	cout<<"Les coordonnées cartesiens sont :"<<"X = "<<x<<" et Y= "<<y<<endl;
}
 
