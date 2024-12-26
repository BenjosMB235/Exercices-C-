#include<iostream>
#include "point1.h"
using namespace std;


int main(){
	float v1, v2;
	float dv1, dv2;
	cout<<"Entre les coordonnées de votre point :"<<endl;
	cin>>v1>>v2;
	point A(v1, v2);
	A.affiche();
	
	cout<<"Entre les variations de votre point :"<<endl;
	cin>>dv1>>dv2;
	A.deplace(dv1, dv2);
	
	cout<<"***************************************"<<endl;
	cout<<"Après Translation :"<<endl;
	A.affiche();
	
	return 0;
}
